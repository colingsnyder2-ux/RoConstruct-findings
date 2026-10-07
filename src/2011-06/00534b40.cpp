// roc 2011-06 00534b40  unit: seg_00530000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00534b40
//
// 00534b40  8381c8090000ff       add dword ptr [ecx + 0x9c8], -1
// 00534b47  8d91c8090000         lea edx, [ecx + 0x9c8]
// 00534b4d  8d81c4090000         lea eax, [ecx + 0x9c4]
// 00534b53  790c                 jns 0x534b61
// 00534b55  52                   push edx
// 00534b56  50                   push eax
// 00534b57  51                   push ecx
// 00534b58  e8c3feffff           call 0x534a20
// 00534b5d  83c40c               add esp, 0xc
// 00534b60  c3                   ret 
// 00534b61  8b10                 mov edx, dword ptr [eax]
// 00534b63  8b0a                 mov ecx, dword ptr [edx]
// 00534b65  83c204               add edx, 4
// 00534b68  8910                 mov dword ptr [eax], edx
// 00534b6a  8bc1                 mov eax, ecx
// 00534b6c  c1e80b               shr eax, 0xb
// 00534b6f  33c8                 xor ecx, eax
// 00534b71  8bd1                 mov edx, ecx
// 00534b73  81e2ad583aff         and edx, 0xff3a58ad
// 00534b79  c1e207               shl edx, 7
// 00534b7c  33ca                 xor ecx, edx
// 00534b7e  8bc1                 mov eax, ecx
// 00534b80  258cdfffff           and eax, 0xffffdf8c
// 00534b85  c1e00f               shl eax, 0xf
// 00534b88  33c8                 xor ecx, eax
// 00534b8a  8bc1                 mov eax, ecx
// 00534b8c  c1e812               shr eax, 0x12
// 00534b8f  33c1                 xor eax, ecx
// 00534b91  c3                   ret 
// library rbx2016-raknet/Rand.cpp (function ?RandomMT@RakNetRandom@RakNet@@QAEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet Rand.cpp
