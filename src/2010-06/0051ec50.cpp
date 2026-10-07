// roc 2010-06 0051ec50  unit: CSHA1  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051ec50
//
// 0051ec50  832d5456b90001       sub dword ptr [0xb95654], 1
// 0051ec57  7918                 jns 0x51ec71
// 0051ec59  685456b900           push 0xb95654
// 0051ec5e  68f07dc000           push 0xc07df0
// 0051ec63  68f87dc000           push 0xc07df8
// 0051ec68  e863feffff           call 0x51ead0
// 0051ec6d  83c40c               add esp, 0xc
// 0051ec70  c3                   ret 
// 0051ec71  a1f07dc000           mov eax, dword ptr [0xc07df0]
// 0051ec76  8b08                 mov ecx, dword ptr [eax]
// 0051ec78  83c004               add eax, 4
// 0051ec7b  a3f07dc000           mov dword ptr [0xc07df0], eax
// 0051ec80  8bc1                 mov eax, ecx
// 0051ec82  c1e80b               shr eax, 0xb
// 0051ec85  33c8                 xor ecx, eax
// 0051ec87  8bd1                 mov edx, ecx
// 0051ec89  81e2ad583aff         and edx, 0xff3a58ad
// 0051ec8f  c1e207               shl edx, 7
// 0051ec92  33ca                 xor ecx, edx
// 0051ec94  8bc1                 mov eax, ecx
// 0051ec96  258cdfffff           and eax, 0xffffdf8c
// 0051ec9b  c1e00f               shl eax, 0xf
// 0051ec9e  33c8                 xor ecx, eax
// 0051eca0  8bc1                 mov eax, ecx
// 0051eca2  c1e812               shr eax, 0x12
// 0051eca5  33c1                 xor eax, ecx
// 0051eca7  c3                   ret 
// library rbx2016-raknet/Rand.cpp (function ?randomMT@@YAIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet Rand.cpp
