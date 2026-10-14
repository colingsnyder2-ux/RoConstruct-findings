// roc 2009-06 00888b10  unit: seg_00880000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00888b10
//
// 00888b10  a1c029a400           mov eax, dword ptr [0xa429c0]
// 00888b15  8b0db0e58900         mov ecx, dword ptr [0x89e5b0]
// 00888b1b  a801                 test al, 1
// 00888b1d  7538                 jne 0x888b57
// 00888b1f  83c801               or eax, 1
// 00888b22  a3c029a400           mov dword ptr [0xa429c0], eax
// 00888b27  dd01                 fld qword ptr [ecx]
// 00888b29  dd1db829a400         fstp qword ptr [0xa429b8]
// 00888b2f  a801                 test al, 1
// 00888b31  7524                 jne 0x888b57
// 00888b33  83c801               or eax, 1
// 00888b36  a3c029a400           mov dword ptr [0xa429c0], eax
// 00888b3b  dd01                 fld qword ptr [ecx]
// 00888b3d  dd1db829a400         fstp qword ptr [0xa429b8]
// 00888b43  a801                 test al, 1
// 00888b45  7510                 jne 0x888b57
// 00888b47  83c801               or eax, 1
// 00888b4a  a3c029a400           mov dword ptr [0xa429c0], eax
// 00888b4f  dd01                 fld qword ptr [ecx]
// 00888b51  dd1db829a400         fstp qword ptr [0xa429b8]
// 00888b57  dd05b829a400         fld qword ptr [0xa429b8]
// 00888b5d  d915682aa400         fst dword ptr [0xa42a68]
// 00888b63  d9156c2aa400         fst dword ptr [0xa42a6c]
// 00888b69  d91d702aa400         fstp dword ptr [0xa42a70]
// 00888b6f  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\roc_export_2e510945f61df65f.cpp (function ??__E?INF3@Vector3@G3D@@2V12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/roc_export_2e510945f61df65f.cpp
