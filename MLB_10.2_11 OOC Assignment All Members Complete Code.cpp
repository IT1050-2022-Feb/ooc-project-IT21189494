#include <iostream>
#include <cstring>
#define SIZE

using namespace std;

//Following classes are coded by : C H H K S A Chandrasekara - IT21189494
class Visitor{
protected:
	char visitorName[30];
	int visitorIP;

public:
	Visitor() {
		
	}

	Visitor(char vName, int vIP) {
		strcpy_s(visitorName, vName);
		visitorIP = vIP;
	}

	void setVisitorDetails() {
		
	}

	void accessPublicPages() {

	}

	~Visitor() {

	}
};

//Inheritance; Visitor class is the bass class and Member class is the derived class 
class Member : public Visitor {
private:
	char memberName[30];
	int memberID;
	char password[15];
	int memberPhone;
	int pkgID;
	char address[50];
	Package* pkg; //Bi-directional association with Package class
	Payment* pmnt[100]; //Bi-directional association with Payment class
	Reward* rwd[20]; //Bi-directional association with Reward class

public:
	Member() {

	}
	
	Member(char mName, int mID, char pswd, int mPhone, int pID, char mAddress, Package *pk) {
		strcpy_s(memberName, mName);
		memberID = mID;
		strcpy_s(password, pswd);
		memberPhone = mPhone;
		pkgID = pID;
		strcpy_s(address, mAddress);
		pkg = pk;
	}

	void makePayment(Payment* mbrPmnt) {

	}

	void collectReward(Reward* mbrRwrd) {

	}

	void setDetails() {

	}

	int getMemberDetails() {

	}

	void purchasePkg() {

	}

	~Member() {

	}
};

class Package {
private:
	int pkgID;
	char pkgDetails[50];
	float pkgAmount;
	Member* mbr[100]; //Bi-directional association with Member class
	Payment* pmt; //Aggregation relationship with Payment class

public:
	Package() {
		
	}

	Package(int pID, char pDetails, float pAmount) {
		pkgID = pID;
		strcpy_s(pkgDetails, pDetails);
		pkgAmount = pAmount;
	}

	void addPayment(Payment *pay) {
		pmt = pay;
	}

	void addMember(Member* mb) {
		mbr = mb;
	}

	void setPkgDetails() {

	}

	void addPackage() {

	}

	void deletePackage() {

	}

	void updatePackage() {

	}

	~Package() {

	}
};

//Following class is coded by : Chanuth Naveen Pieris - IT21380150 
class Payment {
Private:
    int PaymentID;
    int MemberID;
    int Date;
    int InvoiceID;
    float Amount;
    Invoice*Invo[SIZE];
    Member*Mbr;

Public:
    Payment (int pPaymentID, float pAmount, pMemberID, pInvoiceID,  pDate) 
    {
        PaymentID= pPaymentID;
        memberID = pMemberID;
        InvoiceID = pInvoiceID;
        Date = pDate;
        Amount = pAmount; 
    }

    void  addInvoice ()
    {
        Invo[0]= New Invoice ();
        Invo[1]= New Invoice ();
    }

    void  addMember (Member* mb)
    {
        Mbr = mb
    }
    
    void  setPaymentDetails (int pPaymentID, pMemberID, pInvoiceID,  pDate, float pAmount)
    {
        PaymentID = pPaymentID;
        memberID = pMemberID;
        InvoiceID = pInvoiceID;
        Date = pDate;
        Amount = pAmount; 
    }

    int  getPaymentDetails ()
    {
    }

    int  Amount ()
    {
    }

    Void  ValidatePayment ()
    {
    }

    ~ Payment ()
    {
        for(int x=0; x<SIZE ; x++)
            delete Invo[x];
    }

};

//Following class is coded by : M.L.Y.M. Liyanage - IT21377808 
class Admin
{
private:
    int adminID;
    char adminName[30];
    char password[20];
    char email[20];
    int phoneNo;
    Package *pk;

public:
    Admin()
    {

    }

    Admin(char pName[], int pID, char pWord[], char pMail[], int pNo)
    {
        strcpy(adminName, pName);
        strcpy(password, pWord);
        strcpy(email, pMail);
        adminID = pID;
        phoneNo = pNo;
    }

    ~Admin()
    {

    }
    
    void setAdminDetails(char pName[], int pID, char pWord[], char pMail[], int pNo)
    {
        strcpy(adminName, pName);
        strcpy(password, pWord);
        strcpy(email, pMail);
        adminID = pID;
        phoneNo = pNo;
    }
    
    void updatePackageDetails(Package *p)
    {
        pk = p;
    }

    void getAdminDetails(){}
    void manageUserProfile(){}
    void manageAdd(){}
};

//Following class is coded by : R.S.U. Madushan - IT21377044
class Reward
{
private:
    int rewardID;
    int memberID;
    Member *mb[100];
    
public:
    Reward(int PrewardID,  int PmemberID)
    {
    rewardID = PrewardID;
    memberID = PmemberID;
    }

    void addEligableMember(Member* m)
    {

    }

    void setRewardDetails()
    {

    }
    int getRewardDetails()
    {

    }

    void validateMemberEligibility()
    {

    }

    ~Reward()
    {

    }
};

//Following class is coded by : W.M. Chamod Maheshan Weerasinghe - IT21199530
class Invoice
{
	private:
		int invoiceID;
		int invoiceDate;
		int memberID;
		int packageID;
		char packageDetails;
		int paymentID;
		float amount;
		
	public:
		Invoice(int PinvoiceID, int PinvoiceDate, int PmemberID, int PpackageID, int PpackageDetails, int PpaymenyID, float Pamount)
		{
		invoiceID = PinvoiceID;
		invoiceDate = PinvoiceDate;
		memberID = PmemberID;
		packageID = PpackageID;
		strcpy = PpackageDetails;
		paymentID = PpaymenyID;
		amount = Pamount;
		
		}
		void setInvoiceDetails(int PinvoiceID, int PinvoiceDate, int PmemberID, int PpackageID, int PpackageDetails, int PpaymenyID, float Pamount)
		{
		invoiceID = PinvoiceID;
		invoiceDate = PinvoiceDate;
		memberID = PmemberID;
		packageID = PpackageID;
		strcpy = PpackageDetails;
		paymentID = PpaymenyID;
		amount = Pamount;
		
		}
		int getInvoiceDetails()
		{}
		int getMemberDetails()
		{}
		int Caltotalamountc ()
		{}
		void displayInvoiceDetails()
		{}
		~Invoice()
		{}
};

int main()
{

	Visitor* v1 = new Visitor("Sam", 123456789);
	v1->setVisitorDetails();
	v1->accessPublicPages();

	Package* p1 = new Package(001, "Package 1", 100000.00);
	p1->setPkgDetails();
	p1->updatePackage();
	p1->deletePackage();


	Member* m1 = new Member("Bob", 1234, "abc123", 0111234567, 001, "123, Abc Road, Main City", p1);
	m1->accessPublicPages();
	m1->setDetails();
	m1->getMemberDetails();
	m1->purchasePkg();

    Payment *py1 = New Payment (10,9,12 ,15,2000);
    py1->Amount();
    py1->ValidatePayment();

    Admin *a1 = new Admin("Jake", 1234, "abc123", "abc@mail.com", 0711234567);
    a1->getAdminDetails();
    a1->manageUserProfile();
    a1->manageAdd();

    Reward *r1 = new Reward(0001, 123);
    r1->setRewardDetails();
    r1->getRewardDetails();
    r1->validateMemberEligibility();

    Invoice *in1 = new Invoice(I0045,5,008,25994,xxxxxxxxx,A0215,45000.00);
	in1->setInvoiceDetails();
	in1->getInvoiceDetails();
	in1->getMemberDetails();
	in1->Caltotalamountc();
	in1->displayInvoiceDetails();


	delete v1;
	delete p1;
	delete m1;
    delete py1;
    delete a1;
    delete r1;

	return 0;
}
