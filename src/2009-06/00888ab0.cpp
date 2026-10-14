// roc 2009-06 00888ab0  unit: seg_00880000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00888ab0
//
// 00888ab0  a1b8c8a300           mov eax, dword ptr [0xa3c8b8]
// 00888ab5  8b0d44e58900         mov ecx, dword ptr [0x89e544]
// 00888abb  a801                 test al, 1
// 00888abd  7538                 jne 0x888af7
// 00888abf  83c801               or eax, 1
// 00888ac2  a3b8c8a300           mov dword ptr [0xa3c8b8], eax
// 00888ac7  dd01                 fld qword ptr [ecx]
// 00888ac9  dd1db0c8a300         fstp qword ptr [0xa3c8b0]
// 00888acf  a801                 test al, 1
// 00888ad1  7524                 jne 0x888af7
// 00888ad3  83c801               or eax, 1
// 00888ad6  a3b8c8a300           mov dword ptr [0xa3c8b8], eax
// 00888adb  dd01                 fld qword ptr [ecx]
// 00888add  dd1db0c8a300         fstp qword ptr [0xa3c8b0]
// 00888ae3  a801                 test al, 1
// 00888ae5  7510                 jne 0x888af7
// 00888ae7  83c801               or eax, 1
// 00888aea  a3b8c8a300           mov dword ptr [0xa3c8b8], eax
// 00888aef  dd01                 fld qword ptr [ecx]
// 00888af1  dd1db0c8a300         fstp qword ptr [0xa3c8b0]
// 00888af7  dd05b0c8a300         fld qword ptr [0xa3c8b0]
// 00888afd  d915742aa400         fst dword ptr [0xa42a74]
// 00888b03  d915782aa400         fst dword ptr [0xa42a78]
// 00888b09  d91d7c2aa400         fstp dword ptr [0xa42a7c]
// 00888b0f  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\roc_export_2e510945f61df65f.cpp (function ??__E?INF3@Vector3@G3D@@2V12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/roc_export_2e510945f61df65f.cpp
