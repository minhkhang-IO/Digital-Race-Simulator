🏎️ Digital Race Simulator
Dự án này là một chương trình mô phỏng cuộc đua xe kỹ thuật số được viết bằng ngôn ngữ C. Chương trình sử dụng các kiến thức về Structure (Cấu trúc), Pointers (Con trỏ), và Logic toán học để tạo ra một cuộc đua ngẫu nhiên đầy kịch tính giữa hai tay đua.

📋 Mục tiêu dự án
Thực hành quản lý dữ liệu phức tạp bằng struct.

Sử dụng con trỏ (pointers) để cập nhật dữ liệu trực tiếp trong bộ nhớ.

Áp dụng thư viện time.h và stdlib.h để tạo tính ngẫu nhiên (randomness).

🛠️ Công nghệ sử dụng
Ngôn ngữ: C (C99 hoặc mới hơn).

Thư viện chuẩn: stdio.h, stdlib.h, time.h, string.h.

🏗️ Cấu trúc dữ liệu
1. struct Race
Quản lý trạng thái tổng quát của cuộc đua:

numberOfLaps: Tổng số vòng đua.

currentLap: Vòng đua hiện tại.

firstPlaceDriverName: Tên người đang dẫn đầu.

firstPlaceRaceCarColor: Màu xe của người dẫn đầu.

2. struct RaceCar
Quản lý thông tin chi tiết của từng xe đua:

driverName: Tên tài xế.

raceCarColor: Màu xe.

totalLapTime: Tổng thời gian tích lũy qua các vòng.

🚀 Các chức năng chính
🏁 Chuẩn bị (Pre-Show)
printIntro(): Hiển thị lời chào mừng khán giả.

printCountDown(): Đếm ngược từ 5 đến 1 để bắt đầu cuộc đua.

🧠 Logic điều khiển
calculateTimeToCompleteLap(): Tính toán thời gian hoàn thành một vòng đua dựa trên các chỉ số ngẫu nhiên: Speed, Acceleration, và Nerves.

updateRaceCar(): Sử dụng con trỏ để cập nhật thời gian hoàn thành vào totalLapTime của mỗi xe.

updateFirstPlace(): So sánh thời gian giữa hai xe để xác định ai đang dẫn đầu.

📊 Mô phỏng (Simulation)
startRace(): Hàm điều khiển trung tâm, thực hiện vòng lặp qua từng lap, gọi các hàm logic và in kết quả cập nhật cho khán giả.

printCongratulation(): Tôn vinh người chiến thắng sau khi kết thúc số vòng đua quy định.

🖥️ Cách chạy chương trình
Biên dịch:

Bash

gcc -o race_simulator main.c
Thực thi:

Bash

./race_simulator
📝 Lưu ý logic
Chương trình sử dụng srand(time(0)) để đảm bảo mỗi lần chạy sẽ cho ra một kết quả khác nhau. Thời gian mỗi vòng đua được tính ngẫu nhiên trong khoảng từ 3 đến 9 đơn vị thời gian (tổng của 3 chỉ số từ 1-3).

Phát triển bởi: Minh Khang Trần 👨‍💻

Trường: Đại học FPT (FPT University)

Một vài gợi ý nhỏ cho bạn:
Bạn có thể thêm một mục "Future Improvements" (Cải tiến tương lai) như: thêm nhiều xe hơn, thêm hệ thống tính điểm, hoặc giao diện đồ họa đơn giản bằng ký tự.

Đừng quên kiểm tra lại lỗi logic nhỏ ở hàm updateFirstPlace (phần gán màu xe cho người dẫn đầu) mà mình đã nhắc ở câu trước để đảm bảo README mô tả đúng một chương trình hoàn hảo nhé!
