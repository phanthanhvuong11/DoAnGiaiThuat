#include<iostream>
#include<conio.h>
#include<fstream>
#include<ostream>
#include<istream>
#include<stdio.h>
#include<string>
#include<iomanip>

using namespace std;

struct vSach
{
	string maSoSach;
	string tenSach;
	string tenTacGia;
	string nhaXuatBan;
	int    namXuatBan;
	int    trangThaiSach;

};


struct Node
{
	vSach info;
	Node *next;
};

typedef Node NODE;
struct dsSach
{
	NODE *pHead;
	NODE *pTail;
};
typedef  struct dsSach ListdsSach;
//Câu 1: khởi tạo một danh sách:	
void init(ListdsSach &l) {
	l.pHead = NULL;
	l.pTail = NULL;
	cout << "\n\t\t<=*=> Khởi tạo danh sách thành công<=*=>\n";

}

//khởi tạo node đưa vào v


NODE* createNode(vSach s)
{
	NODE *p = new NODE;
	if (p == NULL)
	{
		cout << "\nKhông đủ bộ nhớ";
		return NULL;
	}
	p->info = s;
	p->next = NULL;
	return p;
}
//Cấu hình đưa vào đầu danh sách
void addHead(ListdsSach &vds, Node *p)
{
	if (vds.pHead == NULL)
	{
		vds.pHead = vds.pTail = p;
	}
	else
	{
		p->next = vds.pHead;
		vds.pHead = p;
	}
}

//Cấu hình vào cuối danh sách
void addTail(ListdsSach &vds, Node *p)
{
	if (vds.pHead == NULL)
	{
		vds.pHead = vds.pTail = p;

	}
	else
	{
		vds.pTail->next = p;
		vds.pTail = p;
	}
}

//*************************************************************************************************/
// Câu 2:
//Function thêm vào đầu danh sách
/*
void InsertHead(ListdsSach &ds)
{

}



//Function chèn vào sau một cuốn sách nào đó
void InsertAfter(ListdsSach &ds)
{


}


//Function thêm vào cuối danh sách
void InsertTail(ListdsSach &ds)
{

}
*/
//***************************************************************************//
//Câu 2:
//Function xóa sách ở đầu danh sách
/*
int DeleteHead(ListdsSach &ds)
{

}


//Function xóa sách theo mã số
int DeleteMaSo(ListdsSach &ds)
{


}

//Function xóa sách theo tên sách
int DeleteteTenSach(ListdsSach &ds)
{


}

//Function xóa theo tên tác giả

int DeleteTenTacGia(ListdsSach &ds)
{

}

//Function xóa cuốn sách sau một cuốn sách có mã nào đó
int DeleteSauMotCuonSach(ListdsSach &ds)
{

}
//Function xóa cuốn sách ở cuối danh sách
int DeleteCuoiDanhSach(ListdsSach &ds)
{

}
*/
//******************************************************************************//
//Đọc file sách
/*
void Doc_File(ifstream &Filein, vSach &s)
{


}
//Đọc file danh sách sách
void Doc_File_DS_Sach(ifstream &Filein, ListdsSach &ds)
{

}
//Giải phóng vùng nhớ
void Giai_Phong_Vung_Nho(ListdsSach &v)
{

}

//*****************************************************************************/

//Đọc sách
/*
void Doc_File(ifstream &file, ListdsSach &ds)
{

}
//Ghi file
void  Ghi_File(ifstream &Fileout, vSach &s)
{

}
//Lưu File
void Luu_File_Sach(ListdsSach &ds)
{

}
//******************************************************************************/
//Câu 4: Search

//Tìm kiếm theo tên sách
/*
void Search_TenSach(ListdsSach *ds, string tenSach)
{


}

//Tìm kiếm theo tên tác giả

void Search_TacGia(ListdsSach *ds, string tenTacGia)
{


}

//Tìm kiếm theo tên nhà xuất bản

void Search_NhaXuatBan(ListdsSach *ds, string tenNhaXuatBan)
{


}
//*********************************************************************/
//Câu 5:
//Xem danh sách
//Xem toàn bộ danh mục sách trong thư viện
/*
void Xuat_Sach(ListdsSach ds)
{

}
//Xem toàn bộ sách đang cho mượn

void Xuat_Sach_ChoMuon(ListdsSach ds)
{

}
//Xem toàn bộ sách chưa cho mượn
void Xuat_Sach_ChuaMuon(ListdsSach ds)
{

}
//Xem sách theo thứ tự



//*******************************************************************/
//Mượn Trả sách
/*
void Muon_Sach(ListdsSach &ds, string ma)
{

}
//Trả sách theo mã
void  Tra_Sach(ListdsSach &ds, string ma)
{

}
//****************************************/
//****************************************//
//Chỉnh sửa sách//



//***************************************//
/**/
void HoVaTen()
{
	cout << "\n";
	cout << "\t\t _______________________________________________________________\n";
	cout << "\t\t|" << setw(45) << "<=: DE TAI :=> QUAN LY THU VIEN" << "                  |\n";
	cout << "\t\t|_______________________________________________________________|\n";
	cout << "\t\t|" << setw(40) << "GVHD : TRUONG NGOC CHAU" << "                       |\n";
	cout << "\t\t|_______________________________________________________________|\n";
	cout << "\t\t|" << setw(40) << "SV1 : PHAN THANH VUONG" << "                       |\n";
	cout << "\t\t|" << setw(32) << "Lop : 16T1" << "                               |\n";
	cout << "\t\t|" << setw(38) << "MSSV : 102160078" << "                         |\n";
	cout << "\t\t|_______________________________________________________________|\n";
}
void menuMain()
{
	cout << "\n\t\t\tCHUC NANG CHINH CUA CHUONG TRINH\n\n";
	cout << "\t\t1.kHOI tao danh sach va doc File!\n";
	cout << "\t\t2.Them mot cuon sach vao danh sach!\n";
	cout << "\t\t3.Xoa mot cuon sach vao danh sach!\n";
	cout << "\t\t4.Tim kiem sach!\n";
	cout << "\t\t5.Chuc Nang Xem Danh Sach !\n";
	cout << "\t\t6.Chuc Nang Muon va Tra Sach !\n";
	cout << "\t\t7.Chinh Sua Trang Thai Thong Tin Cua Sach !\n";
	cout << "\t\t8.Chuc Nang Luu File !\n";
}
void menu1() {
	cout << "\t1.Khoi Tao Danh Muc Sach !\n";
	cout << "\t2.Doc tu File\n";
}
void menu2() {
	cout << "\t1.Them Vao Dau Danh Sach !\n";
	cout << "\t2.Them vao sao 1 cuon sach nao do !\n";
	cout << "\t3.Them vao cuoi dach sach !\n";
}
void menu3() {
	cout << "\t    CAC CHUC NANG XOA !\n";
	cout << "\t1.Xoa Theo Ma So !\n";
	cout << "\t2.Xoa Theo ten sach!\n";
	cout << "\t3.Xoa theo ten tac gia !\n";
	cout << "\t4.Xoa cuon sach o dau danh sach !\n";
	cout << "\t5.Xoa cuon sach sau 1 cuon sach nao do !\n";
	cout << "\t6.Xoa cuon sach cuoi danh sach !\n";
}
void menu4() {
	cout << "\t1.Tim theo ten sach !\n";
	cout << "\t2.Tim theo ten tac gia !\n";
	cout << "\t3.Tim theo ten nha xuat ban !\n";
}
void menu5() {

	cout << "\t1.Xem toan bo danh sach!\n";
	cout << "\t2.Xem nhung cuon sach cho muon !\n";
	cout << "\t3.Xem nhung cuon sach chua cho muon !\n";
}
void menu51()
{
	cout << "\t1.Xem dach theo van alphabet cua tac gia !\n";
	cout << "\t2.Xem danh sach theo van alphabet cua nha xuat ban !\n";
	cout << "\t3.Xem danh sach theo nam xuat ban !\n";
}
void menu6()
{
	cout << "\t1.Muon sach !\n";
	cout << "\t2. Tra sach !\n";
}
void menu7()
{
	cout << "\t1.Chinh sua ten sach !\n";
	cout << "\t2.Chinh sua ten tac gia cua sach !\n";
	cout << "\t3.Chinh sua ten nha xuat ban cua sach !\n";
}
void menu8()
{
	cout << "\t1.Luu File !\n";
}
int main()
{

	ListdsSach DS;
	ifstream file;
	//NODE *p;
	HoVaTen();
	menuMain();
	system("pause");
	return 0;
}