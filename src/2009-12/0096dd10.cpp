// roc 2009-12 0096dd10  unit: seg_00960000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096dd10
//
// 0096dd10  a110ccb700           mov eax, dword ptr [0xb7cc10]
// 0096dd15  8b0db0b59800         mov ecx, dword ptr [0x98b5b0]
// 0096dd1b  a801                 test al, 1
// 0096dd1d  7538                 jne 0x96dd57
// 0096dd1f  83c801               or eax, 1
// 0096dd22  a310ccb700           mov dword ptr [0xb7cc10], eax
// 0096dd27  dd01                 fld qword ptr [ecx]
// 0096dd29  dd1d08ccb700         fstp qword ptr [0xb7cc08]
// 0096dd2f  a801                 test al, 1
// 0096dd31  7524                 jne 0x96dd57
// 0096dd33  83c801               or eax, 1
// 0096dd36  a310ccb700           mov dword ptr [0xb7cc10], eax
// 0096dd3b  dd01                 fld qword ptr [ecx]
// 0096dd3d  dd1d08ccb700         fstp qword ptr [0xb7cc08]
// 0096dd43  a801                 test al, 1
// 0096dd45  7510                 jne 0x96dd57
// 0096dd47  83c801               or eax, 1
// 0096dd4a  a310ccb700           mov dword ptr [0xb7cc10], eax
// 0096dd4f  dd01                 fld qword ptr [ecx]
// 0096dd51  dd1d08ccb700         fstp qword ptr [0xb7cc08]
// 0096dd57  dd0508ccb700         fld qword ptr [0xb7cc08]
// 0096dd5d  d915383fb800         fst dword ptr [0xb83f38]
// 0096dd63  d9153c3fb800         fst dword ptr [0xb83f3c]
// 0096dd69  d91d403fb800         fstp dword ptr [0xb83f40]
// 0096dd6f  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\roc_export_2e510945f61df65f.cpp (function ??__E?INF3@Vector3@G3D@@2V12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/roc_export_2e510945f61df65f.cpp
