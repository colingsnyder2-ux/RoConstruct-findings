// roc 2010-06 0051f010  unit: CSHA1  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051f010
//
// 0051f010  8bc1                 mov eax, ecx
// 0051f012  33c9                 xor ecx, ecx
// 0051f014  894808               mov dword ptr [eax + 8], ecx
// 0051f017  8908                 mov dword ptr [eax], ecx
// 0051f019  894804               mov dword ptr [eax + 4], ecx
// 0051f01c  c3                   ret 
// library rbx2016-raknet/CloudClient.cpp (function ??0?$List@UCloudKey@RakNet@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudClient.cpp
