// roc 2009-06 00510660  unit: CSHA1  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00510660
//
// 00510660  8381c8090000ff       add dword ptr [ecx + 0x9c8], -1
// 00510667  8d91c8090000         lea edx, [ecx + 0x9c8]
// 0051066d  8d81c4090000         lea eax, [ecx + 0x9c4]
// 00510673  790c                 jns 0x510681
// 00510675  52                   push edx
// 00510676  50                   push eax
// 00510677  51                   push ecx
// 00510678  e8c3feffff           call 0x510540
// 0051067d  83c40c               add esp, 0xc
// 00510680  c3                   ret 
// 00510681  8b10                 mov edx, dword ptr [eax]
// 00510683  8b0a                 mov ecx, dword ptr [edx]
// 00510685  83c204               add edx, 4
// 00510688  8910                 mov dword ptr [eax], edx
// 0051068a  8bc1                 mov eax, ecx
// 0051068c  c1e80b               shr eax, 0xb
// 0051068f  33c8                 xor ecx, eax
// 00510691  8bd1                 mov edx, ecx
// 00510693  81e2ad583aff         and edx, 0xff3a58ad
// 00510699  c1e207               shl edx, 7
// 0051069c  33ca                 xor ecx, edx
// 0051069e  8bc1                 mov eax, ecx
// 005106a0  258cdfffff           and eax, 0xffffdf8c
// 005106a5  c1e00f               shl eax, 0xf
// 005106a8  33c8                 xor ecx, eax
// 005106aa  8bc1                 mov eax, ecx
// 005106ac  c1e812               shr eax, 0x12
// 005106af  33c1                 xor eax, ecx
// 005106b1  c3                   ret 
// library rbx2016-raknet/Rand.cpp (function ?RandomMT@RakNetRandom@RakNet@@QAEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet Rand.cpp
