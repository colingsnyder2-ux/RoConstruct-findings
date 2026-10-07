// roc 2011-06 00534ba0  unit: seg_00530000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00534ba0
//
// 00534ba0  832dd8fac20001       sub dword ptr [0xc2fad8], 1
// 00534ba7  7918                 jns 0x534bc1
// 00534ba9  68d8fac200           push 0xc2fad8
// 00534bae  688896cb00           push 0xcb9688
// 00534bb3  689096cb00           push 0xcb9690
// 00534bb8  e863feffff           call 0x534a20
// 00534bbd  83c40c               add esp, 0xc
// 00534bc0  c3                   ret 
// 00534bc1  a18896cb00           mov eax, dword ptr [0xcb9688]
// 00534bc6  8b08                 mov ecx, dword ptr [eax]
// 00534bc8  83c004               add eax, 4
// 00534bcb  a38896cb00           mov dword ptr [0xcb9688], eax
// 00534bd0  8bc1                 mov eax, ecx
// 00534bd2  c1e80b               shr eax, 0xb
// 00534bd5  33c8                 xor ecx, eax
// 00534bd7  8bd1                 mov edx, ecx
// 00534bd9  81e2ad583aff         and edx, 0xff3a58ad
// 00534bdf  c1e207               shl edx, 7
// 00534be2  33ca                 xor ecx, edx
// 00534be4  8bc1                 mov eax, ecx
// 00534be6  258cdfffff           and eax, 0xffffdf8c
// 00534beb  c1e00f               shl eax, 0xf
// 00534bee  33c8                 xor ecx, eax
// 00534bf0  8bc1                 mov eax, ecx
// 00534bf2  c1e812               shr eax, 0x12
// 00534bf5  33c1                 xor eax, ecx
// 00534bf7  c3                   ret 
// library rbx2016-raknet/Rand.cpp (function ?randomMT@@YAIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet Rand.cpp
