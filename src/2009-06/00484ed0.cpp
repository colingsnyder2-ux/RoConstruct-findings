// roc 2009-06 00484ed0  unit: RBX::MeshGen  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00484ed0
//
// 00484ed0  8b442408             mov eax, dword ptr [esp + 8]
// 00484ed4  8b10                 mov edx, dword ptr [eax]
// 00484ed6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00484eda  3b11                 cmp edx, dword ptr [ecx]
// 00484edc  7202                 jb 0x484ee0
// 00484ede  8bc1                 mov eax, ecx
// 00484ee0  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??$min@I@std@@YAABIABI0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
