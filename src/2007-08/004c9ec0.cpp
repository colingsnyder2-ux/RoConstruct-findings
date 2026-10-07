// roc 2007-08 004c9ec0  unit: seg_004c0000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c9ec0
//
// 004c9ec0  8bc1                 mov eax, ecx
// 004c9ec2  33c9                 xor ecx, ecx
// 004c9ec4  894808               mov dword ptr [eax + 8], ecx
// 004c9ec7  8908                 mov dword ptr [eax], ecx
// 004c9ec9  894804               mov dword ptr [eax + 4], ecx
// 004c9ecc  c3                   ret 
// library rbx2016-raknet/CloudClient.cpp (function ??0?$List@UCloudKey@RakNet@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudClient.cpp
