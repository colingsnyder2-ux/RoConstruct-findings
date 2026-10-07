// roc 2008-06 004d3c90  unit: seg_004d0000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d3c90
//
// 004d3c90  8bc1                 mov eax, ecx
// 004d3c92  33c9                 xor ecx, ecx
// 004d3c94  894808               mov dword ptr [eax + 8], ecx
// 004d3c97  8908                 mov dword ptr [eax], ecx
// 004d3c99  894804               mov dword ptr [eax + 4], ecx
// 004d3c9c  c3                   ret 
// library rbx2016-raknet/CloudClient.cpp (function ??0?$List@UCloudKey@RakNet@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudClient.cpp
