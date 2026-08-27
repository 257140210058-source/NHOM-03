1. Khái niệm Đối tượng (Object)
Định nghĩa: Đối tượng là các thực thể trong hệ thống hoạt động khi chương trình đang chạy. Đối tượng là một thể hiện cụ thể (instance) của lớp và tồn tại thực sự trong bộ nhớ RAM.

Ví dụ: Một chiếc xe nhãn hiệu "Ford", màu trắng, giá 5000$ là một đối tượng cụ thể.

3 Yếu tố xác định đối tượng:

Định danh (Identity): Cơ chế phân biệt đối tượng này với đối tượng khác.

Trạng thái (State): Giá trị của các thuộc tính tại một thời điểm.

Hoạt động / Hành vi (Behavior): Các phương thức quyết định những gì đối tượng có thể làm.

2. Khái niệm Lớp (Class)
Định nghĩa: Lớp là một khái niệm trừu tượng, dùng để chỉ một tập hợp các đối tượng có mặt trong hệ thống. Lớp đóng vai trò như một bản thiết kế (blueprint) hoặc nguyên mẫu (template).

Ví dụ: "Xe hơi" là một lớp đối tượng dùng để chỉ tất cả các loại xe hơi của cửa hàng.

Các khả năng cấu thành của một Lớp:

Chỉ có thuộc tính, không có phương thức.

Chỉ có phương thức, không có thuộc tính.

Có cả thuộc tính và phương thức (phổ biến nhất).

Lớp trừu tượng (Abstract Class): Các lớp đặc biệt không có đối tượng khởi tạo tương ứng trực tiếp.

3. Mối quan hệ & So sánh giữa Class và Object
Tính trừu tượng vs Thực thể: Lớp là sự trừu tượng hóa của các đối tượng. Đối tượng là thể hiện cụ thể tồn tại thực sự khi chương trình chạy.

Thuộc tính & Phương thức: Thuộc tính/phương thức của lớp tương ứng với thuộc tính/hành động của đối tượng.

Bộ nhớ: Lớp chưa chiếm bộ nhớ khi định nghĩa; Đối tượng được cấp phát dung lượng bộ nhớ thực tế khi khởi tạo.

4. Mã nguồn ví dụ (Java)
Java
// Định nghĩa Class SinhVien (Bản thiết kế / Khuôn mẫu)
public class SinhVien {
    // Thuộc tính (Attributes / State)
    String ten;
    int mssv;

    // Phương thức (Methods / Behavior)
    public void xinChao() {
        System.out.println("Xin chào, tôi là " + ten + " - MSSV: " + mssv);
    }

    public static void main(String[] args) {
        // Khởi tạo Object sv1 (Instance) từ Class SinhVien
        SinhVien sv1 = new SinhVien();
        
        // Gán dữ liệu cho thuộc tính của đối tượng
        sv1.ten = "Thảo";
        sv1.mssv = 12345;

        // Gọi phương thức/hành vi của đối tượng
        sv1.xinChao();
    }
}
