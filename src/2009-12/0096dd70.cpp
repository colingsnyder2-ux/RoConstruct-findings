// roc 2009-12 0096dd70  unit: seg_00960000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096dd70
//
// 0096dd70  a1303eb800           mov eax, dword ptr [0xb83e30]
// 0096dd75  8b0de0b49800         mov ecx, dword ptr [0x98b4e0]
// 0096dd7b  a801                 test al, 1
// 0096dd7d  7538                 jne 0x96ddb7
// 0096dd7f  83c801               or eax, 1
// 0096dd82  a3303eb800           mov dword ptr [0xb83e30], eax
// 0096dd87  dd01                 fld qword ptr [ecx]
// 0096dd89  dd1d283eb800         fstp qword ptr [0xb83e28]
// 0096dd8f  a801                 test al, 1
// 0096dd91  7524                 jne 0x96ddb7
// 0096dd93  83c801               or eax, 1
// 0096dd96  a3303eb800           mov dword ptr [0xb83e30], eax
// 0096dd9b  dd01                 fld qword ptr [ecx]
// 0096dd9d  dd1d283eb800         fstp qword ptr [0xb83e28]
// 0096dda3  a801                 test al, 1
// 0096dda5  7510                 jne 0x96ddb7
// 0096dda7  83c801               or eax, 1
// 0096ddaa  a3303eb800           mov dword ptr [0xb83e30], eax
// 0096ddaf  dd01                 fld qword ptr [ecx]
// 0096ddb1  dd1d283eb800         fstp qword ptr [0xb83e28]
// 0096ddb7  dd05283eb800         fld qword ptr [0xb83e28]
// 0096ddbd  d9152c3fb800         fst dword ptr [0xb83f2c]
// 0096ddc3  d915303fb800         fst dword ptr [0xb83f30]
// 0096ddc9  d91d343fb800         fstp dword ptr [0xb83f34]
// 0096ddcf  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\roc_export_2e510945f61df65f.cpp (function ??__E?INF3@Vector3@G3D@@2V12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/roc_export_2e510945f61df65f.cpp
