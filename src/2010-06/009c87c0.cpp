// roc 2010-06 009c87c0  unit: seg_009c0000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c87c0
//
// 009c87c0  a1f89ec000           mov eax, dword ptr [0xc09ef8]
// 009c87c5  8b0d98a69e00         mov ecx, dword ptr [0x9ea698]
// 009c87cb  a801                 test al, 1
// 009c87cd  7538                 jne 0x9c8807
// 009c87cf  83c801               or eax, 1
// 009c87d2  a3f89ec000           mov dword ptr [0xc09ef8], eax
// 009c87d7  dd01                 fld qword ptr [ecx]
// 009c87d9  dd1df09ec000         fstp qword ptr [0xc09ef0]
// 009c87df  a801                 test al, 1
// 009c87e1  7524                 jne 0x9c8807
// 009c87e3  83c801               or eax, 1
// 009c87e6  a3f89ec000           mov dword ptr [0xc09ef8], eax
// 009c87eb  dd01                 fld qword ptr [ecx]
// 009c87ed  dd1df09ec000         fstp qword ptr [0xc09ef0]
// 009c87f3  a801                 test al, 1
// 009c87f5  7510                 jne 0x9c8807
// 009c87f7  83c801               or eax, 1
// 009c87fa  a3f89ec000           mov dword ptr [0xc09ef8], eax
// 009c87ff  dd01                 fld qword ptr [ecx]
// 009c8801  dd1df09ec000         fstp qword ptr [0xc09ef0]
// 009c8807  dd05f09ec000         fld qword ptr [0xc09ef0]
// 009c880d  d91578a1c000         fst dword ptr [0xc0a178]
// 009c8813  d9157ca1c000         fst dword ptr [0xc0a17c]
// 009c8819  d91d80a1c000         fstp dword ptr [0xc0a180]
// 009c881f  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\roc_export_2e510945f61df65f.cpp (function ??__E?INF3@Vector3@G3D@@2V12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/roc_export_2e510945f61df65f.cpp
