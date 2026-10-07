// roc 2009-06 00510a60  unit: CSHA1  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00510a60
//
// 00510a60  8bc1                 mov eax, ecx
// 00510a62  33c9                 xor ecx, ecx
// 00510a64  894808               mov dword ptr [eax + 8], ecx
// 00510a67  8908                 mov dword ptr [eax], ecx
// 00510a69  894804               mov dword ptr [eax + 4], ecx
// 00510a6c  c3                   ret 
// library rbx2016-raknet/CloudClient.cpp (function ??0?$List@UCloudKey@RakNet@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudClient.cpp
