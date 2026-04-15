# Test cases – FIT4012 Lab 1

Đánh dấu [x] khi đã chạy và kiểm tra kết quả.

## 1. Entropy / Redundancy
- [x] Input: `aaaa` -> entropy thấp, redundancy cao
- [x] Input: `abcd` -> entropy cao hơn `aaaa`
- [x] Input: `hello world` -> entropy và redundancy được tính hợp lệ

## 2. Modulo inverse
- [x] `a=3, m=7` -> nghịch đảo modulo là 5
- [x] `a=10, m=17` -> nghịch đảo modulo là 12
- [x] `a=6, m=9` -> không tồn tại nghịch đảo modulo

## 3. Ghi chú
Về lý thuyết: * Dữ liệu càng lặp lại (vd: aaaa) thì Entropy càng thấp, Redundancy càng cao và ngược lại.Nghịch đảo modulo chỉ tồn tại khi 2 số nguyên tố cùng nhau (gcd(a, m) = 1).Về code (Edge cases):Xử lý lỗi số âm đầu vào bằng công thức (a % m + m) % m.Ép kiểu long long khi test a * inv % m để tránh lỗi tràn số.
