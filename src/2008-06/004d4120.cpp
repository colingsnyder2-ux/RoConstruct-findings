// roc 2008-06 004d4120  unit: seg_004d0000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d4120
//
// 004d4120  832d70d0930001       sub dword ptr [0x93d070], 1
// 004d4127  7905                 jns 0x4d412e
// 004d4129  e9c2feffff           jmp 0x4d3ff0
// 004d412e  a1fc269700           mov eax, dword ptr [0x9726fc]
// 004d4133  8b08                 mov ecx, dword ptr [eax]
// 004d4135  83c004               add eax, 4
// 004d4138  a3fc269700           mov dword ptr [0x9726fc], eax
// 004d413d  8bc1                 mov eax, ecx
// 004d413f  c1e80b               shr eax, 0xb
// 004d4142  33c8                 xor ecx, eax
// 004d4144  8bd1                 mov edx, ecx
// 004d4146  81e2ad583aff         and edx, 0xff3a58ad
// 004d414c  c1e207               shl edx, 7
// 004d414f  33ca                 xor ecx, edx
// 004d4151  8bc1                 mov eax, ecx
// 004d4153  258cdfffff           and eax, 0xffffdf8c
// 004d4158  c1e00f               shl eax, 0xf
// 004d415b  33c8                 xor ecx, eax
// 004d415d  8bc1                 mov eax, ecx
// 004d415f  c1e812               shr eax, 0x12
// 004d4162  33c1                 xor eax, ecx
// 004d4164  c3                   ret 
// library rbxgs-raknet/Rand.cpp (function ?randomMT@@YAIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet Rand.cpp
