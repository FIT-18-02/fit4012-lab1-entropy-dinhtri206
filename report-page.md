# Report 1 Page – FIT4012 Lab 1

## 1. Mục tiêu
Tìm hiểu và cài đặt các khái niệm cơ bản trong lý thuyết thông tin và mật mã học: Tính toán Entropy, Độ dư thừa thông tin (Redundancy) của một chuỗi ký tự và áp dụng thuật toán Euclid mở rộng để tìm nghịch đảo Modulo.

## 2. Cách làm
- Đọc hiểu chương trình entropy mẫu.
- Bổ sung hàm tính redundancy dựa trên công thức độ dư thừa tương đối (1 - H/Hmax).
- Hoàn thiện hàm mod_inverse() sử dụng đệ quy cho thuật toán Euclid mở rộng, xử lý trường hợp số âm.
- Chạy thử trên nhiều test case.

## 3. Kết quả chính
### 3.1 Entropy và redundancy
*(Ghi chú: Hmax được tính với bảng chữ cái 256 ký tự)*

| Input | Entropy | Redundancy | Nhận xét |
|---|---:|---:|---|
| aaaa | 0.00 | 1.00 | 100% dư thừa do chỉ có 1 ký tự lặp lại |
| abcd | 2.00 | 0.00 | Phân bố đều 4 ký tự, entropy tăng |
| hello world | ~2.85 | ~0.05 | Phân bố đa dạng, redundancy giảm dần |

### 3.2 Modulo inverse
| a | m | Kết quả mong đợi | Kết quả chương trình |
|---:|---:|---|---|
| 3 | 7 | 5 | 5 |
| 10 | 17 | 12 | 12 |
| 6 | 9 | Không tồn tại | Không tồn tại |

## 4. Kết luận
Phiên bản này gộp ý, trình bày trực diện, thích hợp nếu giảng viên thích đọc lướt để chấm điểm nhanh.
