Bài 1 (Practice):
Viết chương trình mô phỏng quá trình quản lý danh sách công việc. Người dùng có thể thực hiện chương trình với các chức năng cơ bản sau:
——————————— TO-DO LIST MANAGER ———————————
1.	ADD x: thêm công việc x vào danh sách: thêm ký tự x vào cuối văn bản
2.	UNDO: hoàn tác việc thêm gần nhất: hoàn tác thao tác gần nhất (xóa ký tự cuối)
3.	REDO: phục hồi thao tác vừa hoàn tác: phục hồi thao tác vừa undo
4.	DANH SÁCH: hiển thị danh sách công việc: in danh sách công việc hiện tại
5.	THOÁT: kết thúc chương trình
Yêu cầu chung:
Sử dụng các cấu trúc dữ liệu tuyến tính sau:
●	Ngăn xếp: quản lý danh sách các ký UNDO: hoàn tác việc thêm gần nhất và REDO: phục hồi thao tác vừa hoàn tác
●	Chuỗi: quản lý danh sách các ký tự trong chuỗi ký tự
Cấu trúc dữ liệu tham khảo:
Cấu trúc dữ liệu của một Operation (Tiến trình)
Bao gồm các thông tin:
❖	Action (char) – Đại diện cho hành động, tiến trình vừa thực hiện với chuỗi ký tự (Ví dụ - Insert – I)
❖	Value (char) – Ký tự vừa được thực hiện cùng hành động đó
Cấu trúc dữ liệu của một stack UNDO: hoàn tác việc thêm gần nhất & REDO: phục hồi thao tác vừa hoàn tác
Bao gồm các thông tin:
❖	Data (Operation[ ]) – Mảng chứa các phần tử tiến trình
❖	Top (integer) – Chỉ số của phần tử Operation trên cùng của stack
Thang điểm chi tiết: 
STT	Yêu cầu	Mô tả chi tiết	Thang điểm
1	INSERT x: thêm ký tự vào cuối văn bản	INSERT x: thêm ký tự vào cuối văn bản, đồng thời thêm Operation bao gồm ký tự x đó vào trong stack UNDO		15 điểm
2	UNDO: hoàn tác thao tác gần nhất	UNDO: hoàn tác thao tác gần nhất, xoá ký tự đó khỏi chuỗi, xoá Operation đó khỏi UNDO và thêm vào REDO		15 điểm
3	REDO: phục hồi thao tác vừa undo	REDO: phục hồi thao tác vừa undo, thêm ký tự từ REDO vào chuỗi, xoá Operation đó khỏi REDO và thêm vào UNDO	15 điểm
4	HIỂN THỊ: in văn bản hiện tại	HIỂN THỊ: in văn bản hiện tại từ chuỗi	10 điểm
5	THOÁT	Thoát khỏi chương trình	5 điểm
