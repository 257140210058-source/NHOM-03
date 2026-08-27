#include <iostream>
#include <string>

class SinhVien {
// ==================== THÀNH PHẦN PRIVATE ====================
private:
    // Thuộc tính dữ liệu (Đặt ở private để bảo mật thông tin)
    std::string hoTen;
    double diemToan;
    double diemVan;

    // Phương thức trung gian (Chỉ dùng nội bộ để tính toán đệm)
    double tinhDiemTrungBinh() {
        return (diemToan + diemVan) / 2;
    }

// ==================== THÀNH PHẦN PUBLIC ====================
public:
    // Các phương thức set/get để nhập và xem dữ liệu từ bên ngoài
    void setThongTin(std::string ten, double toan, double van) {
        hoTen = ten;
        diemToan = toan;
        diemVan = van;
    }

    std::string getHoTen() {
        return hoTen;
    }

    // Phương thức cung cấp chức năng hoạt động, thể hiện hành vi ra bên ngoài
    void hienThiKetQua() {
        std::cout << "Sinh vien: " << hoTen << std::endl;
        std::cout << "Diem trung binh: " << tinhDiemTrungBinh() << std::endl;
        
        // Xét kết quả dựa trên phương thức đệm nội bộ
        if (tinhDiemTrungBinh() >= 5.0) {
            std::cout << "Trang thai: Dat" << std::endl;
        } else {
            std::cout << "Trang thai: Khong dat" << std::endl;
        }
    }
};

int main() {
    // Tạo một đối tượng sinh viên từ hàm main (bên ngoài lớp)
    SinhVien sv;

    // LỖI BIÊN DỊCH NẾU TRUY CẬP TRỰC TIẾP:
    // sv.hoTen = "Nguyen Van A"; // Lỗi! hoTen là private
    // sv.tinhDiemTrungBinh();   // Lỗi! Hàm này là private

    // TRUY CẬP HỢP LỆ QUA CÁC HÀM PUBLIC:
    sv.setThongTin("Nguyen Van A", 7.5, 8.0);
    
    std::cout << "--- Thong tin lay qua hàm Getter ---" << std::endl;
    std::cout << "Ho ten sinh vien: " << sv.getHoTen() << "\n\n";

    std::cout << "--- Goi ham chuc nang Public ---" << std::endl;
    sv.hienThiKetQua();

    return 0;
}
