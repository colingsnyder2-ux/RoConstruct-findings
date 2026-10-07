// roc 2010-06 0051ebf0  unit: CSHA1  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051ebf0
//
// 0051ebf0  8381c8090000ff       add dword ptr [ecx + 0x9c8], -1
// 0051ebf7  8d91c8090000         lea edx, [ecx + 0x9c8]
// 0051ebfd  8d81c4090000         lea eax, [ecx + 0x9c4]
// 0051ec03  790c                 jns 0x51ec11
// 0051ec05  52                   push edx
// 0051ec06  50                   push eax
// 0051ec07  51                   push ecx
// 0051ec08  e8c3feffff           call 0x51ead0
// 0051ec0d  83c40c               add esp, 0xc
// 0051ec10  c3                   ret 
// 0051ec11  8b10                 mov edx, dword ptr [eax]
// 0051ec13  8b0a                 mov ecx, dword ptr [edx]
// 0051ec15  83c204               add edx, 4
// 0051ec18  8910                 mov dword ptr [eax], edx
// 0051ec1a  8bc1                 mov eax, ecx
// 0051ec1c  c1e80b               shr eax, 0xb
// 0051ec1f  33c8                 xor ecx, eax
// 0051ec21  8bd1                 mov edx, ecx
// 0051ec23  81e2ad583aff         and edx, 0xff3a58ad
// 0051ec29  c1e207               shl edx, 7
// 0051ec2c  33ca                 xor ecx, edx
// 0051ec2e  8bc1                 mov eax, ecx
// 0051ec30  258cdfffff           and eax, 0xffffdf8c
// 0051ec35  c1e00f               shl eax, 0xf
// 0051ec38  33c8                 xor ecx, eax
// 0051ec3a  8bc1                 mov eax, ecx
// 0051ec3c  c1e812               shr eax, 0x12
// 0051ec3f  33c1                 xor eax, ecx
// 0051ec41  c3                   ret 
// library rbx2016-raknet/Rand.cpp (function ?RandomMT@RakNetRandom@RakNet@@QAEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet Rand.cpp
