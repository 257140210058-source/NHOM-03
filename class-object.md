# Khái niệm Class và Object trong OOP

## 1. Class (Lớp) là gì?
- Class là một khuôn mẫu (template) hoặc một bản thiết kế (blueprint) để định nghĩa các thuộc tính (attribute) và phương thức (method) chung cho các đối tượng cùng loại.
- Class chưa chiếm không gian bộ nhớ khi mới chỉ định nghĩa.

## 2. Object (Đối tượng) là gì?
- Object là một thể hiện cụ thể (instance) được tạo ra từ Class.
- Object có trạng thái (dữ liệu thuộc tính) và hành vi (phương thức) cụ thể và chiếm không gian trong bộ nhớ khi chạy.

## 3. Mã nguồn ví dụ (Java)

```java
// Định nghĩa Class SinhVien
public class SinhVien {
    // Thuộc tính
    String ten;
    int msbv;

    // Phương thức
    public void xinchao() {
        System.out.println("Xin chào, tôi là " + ten + " - MSSV: " + msbv);
    }

    public static void main(String[] args) {
        // Khởi tạo Object sv1 từ Class SinhVien
        SinhVien sv1 = new SinhVien();
        sv1.ten = "Thảo";
        sv1.msbv = 12345;

        // Gọi phương thức của đối tượng
        sv1.xinchao();
    }
}
