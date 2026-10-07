// roc 2009-06 005106c0  unit: CSHA1  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005106c0
//
// 005106c0  832db0659f0001       sub dword ptr [0x9f65b0], 1
// 005106c7  7918                 jns 0x5106e1
// 005106c9  68b0659f00           push 0x9f65b0
// 005106ce  680009a400           push 0xa40900
// 005106d3  680809a400           push 0xa40908
// 005106d8  e863feffff           call 0x510540
// 005106dd  83c40c               add esp, 0xc
// 005106e0  c3                   ret 
// 005106e1  a10009a400           mov eax, dword ptr [0xa40900]
// 005106e6  8b08                 mov ecx, dword ptr [eax]
// 005106e8  83c004               add eax, 4
// 005106eb  a30009a400           mov dword ptr [0xa40900], eax
// 005106f0  8bc1                 mov eax, ecx
// 005106f2  c1e80b               shr eax, 0xb
// 005106f5  33c8                 xor ecx, eax
// 005106f7  8bd1                 mov edx, ecx
// 005106f9  81e2ad583aff         and edx, 0xff3a58ad
// 005106ff  c1e207               shl edx, 7
// 00510702  33ca                 xor ecx, edx
// 00510704  8bc1                 mov eax, ecx
// 00510706  258cdfffff           and eax, 0xffffdf8c
// 0051070b  c1e00f               shl eax, 0xf
// 0051070e  33c8                 xor ecx, eax
// 00510710  8bc1                 mov eax, ecx
// 00510712  c1e812               shr eax, 0x12
// 00510715  33c1                 xor eax, ecx
// 00510717  c3                   ret 
// library rbx2016-raknet/Rand.cpp (function ?randomMT@@YAIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet Rand.cpp
