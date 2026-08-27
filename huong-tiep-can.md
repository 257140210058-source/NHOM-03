# Phương pháp tiếp cận của lập trình truyền thống

## 1. Lập trình tuyến tính
* **Tư duy:** Theo lối tuần tự, chạy từ lệnh đầu đến lệnh cuối.

### Đặc trưng
* Hướng tiếp cận này đơn giản, đơn luồng, mạch lạc.

### Tính chất
* **Ưu điểm:** Chương trình đơn giản, dễ hiểu.
* **Nhược điểm:** Vì chương trình đơn giản, an toàn, hướng tiếp cận này không phù hợp để dùng để giải quyết ứng dụng phức tạp, thứ cần nhiều sự tương tác qua lại giữa các dòng lệnh và tệp.

## **Ví dụ:** 
* Có một bộ xếp hình ->  Bạn ngồi lắp liên tục từ mảnh thứ 1 đến mảnh thứ 1000 theo một danh sách hướng dẫn dài dằng dặc. Không chia nhỏ công đoạn, không dừng lại. Lắp xong xe thì cho vào túi. Code của bạn là một dải lệnh duy nhất từ trên xuống.

---

## 2. Lập trình cấu trúc
* **Tư duy:** Chương trình được chia nhỏ.

### Đặc trưng
* `Chương trình = Cấu trúc dữ liệu + Giải thuật`

### Tính chất
* Mỗi chương trình con có thể được gọi thực hiện nhiều lần.
* Cung cấp một số cấu trúc lệnh điều khiển chương trình.

### Ưu điểm
* Chương trình dễ hiểu, dễ theo dõi.
* Tư duy giải thuật rõ ràng.

### Nhược điểm
* Không hỗ trợ việc sử dụng lại mã nguồn, nên không phù hợp với các phần mềm lớn.

## **Ví dụ:** 
* Có một bộ xếp hình ->   Bạn chia việc lắp ráp thành các công đoạn nhỏ (hàm): *Hàm lắp bánh xe*, *Hàm lắp khung*, *Hàm lắp động cơ*. Bạn chỉ cần viết công thức "lắp bánh xe" một lần, rồi gọi lại công thức đó 4 lần để có 4 bánh (tái sử dụng code). Ráp các cụm lại là xong xe.

---

# Phương pháp tiếp cận hướng đối tượng

## 1. Phương pháp lập trình hướng đối tượng
* Khắc phục những hạn chế của lập trình hướng cấu trúc, đóng gói dữ liệu, cho phép sử dụng lại mã nguồn nhiều lần.

## 2. Phương pháp phân tích và thiết kế hướng đối tượng
* Mô tả bài toán.
* Đặc tả yêu cầu.
* Trích chọn đối tượng.
* Mô hình hoá lớp đối tượng.
* Thiết kế tổng quan.
* Thiết kế chi tiết.

## **Ví dụ:** 
* Có một bộ xếp hình -> Bạn coi chiếc xe được tạo từ các đối tượng độc lập: *Bánh xe*, *Động cơ*, *Cánh cửa*. 
* Mỗi đối tượng tự quản lý thông tin của nó (ví dụ: *Bánh xe* có thuộc tính *Kích thước*, *Màu sắc* và hành động *Quay*). 
* Bạn chỉ cần kết nối các đối tượng này lại với nhau. Nếu sau này muốn làm *Máy bay*, bạn có thể bê nguyên đối tượng *Động cơ* sang dùng tiếp mà không cần thiết kế lại từ đầu.
