// roc 2010-06 009c8760  unit: seg_009c0000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c8760
//
// 009c8760  a1a03cc000           mov eax, dword ptr [0xc03ca0]
// 009c8765  8b0df0a69e00         mov ecx, dword ptr [0x9ea6f0]
// 009c876b  a801                 test al, 1
// 009c876d  7538                 jne 0x9c87a7
// 009c876f  83c801               or eax, 1
// 009c8772  a3a03cc000           mov dword ptr [0xc03ca0], eax
// 009c8777  dd01                 fld qword ptr [ecx]
// 009c8779  dd1d983cc000         fstp qword ptr [0xc03c98]
// 009c877f  a801                 test al, 1
// 009c8781  7524                 jne 0x9c87a7
// 009c8783  83c801               or eax, 1
// 009c8786  a3a03cc000           mov dword ptr [0xc03ca0], eax
// 009c878b  dd01                 fld qword ptr [ecx]
// 009c878d  dd1d983cc000         fstp qword ptr [0xc03c98]
// 009c8793  a801                 test al, 1
// 009c8795  7510                 jne 0x9c87a7
// 009c8797  83c801               or eax, 1
// 009c879a  a3a03cc000           mov dword ptr [0xc03ca0], eax
// 009c879f  dd01                 fld qword ptr [ecx]
// 009c87a1  dd1d983cc000         fstp qword ptr [0xc03c98]
// 009c87a7  dd05983cc000         fld qword ptr [0xc03c98]
// 009c87ad  d91584a1c000         fst dword ptr [0xc0a184]
// 009c87b3  d91588a1c000         fst dword ptr [0xc0a188]
// 009c87b9  d91d8ca1c000         fstp dword ptr [0xc0a18c]
// 009c87bf  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\roc_export_2e510945f61df65f.cpp (function ??__E?INF3@Vector3@G3D@@2V12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/roc_export_2e510945f61df65f.cpp
