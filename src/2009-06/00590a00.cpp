// from server: 100% by auto
// roc 2009-06 00590a00  unit: seg_00590000  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00590a00
//
// 00590a00  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00590a04  57                   push edi
// 00590a05  33ff                 xor edi, edi
// 00590a07  3bc7                 cmp eax, edi
// 00590a09  0f84b3000000         je 0x590ac2
// 00590a0f  803831               cmp byte ptr [eax], 0x31
// 00590a12  0f85aa000000         jne 0x590ac2
// 00590a18  837c241438           cmp dword ptr [esp + 0x14], 0x38
// 00590a1d  0f859f000000         jne 0x590ac2
// 00590a23  56                   push esi
// 00590a24  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00590a28  3bf7                 cmp esi, edi
// 00590a2a  0f848a000000         je 0x590aba
// 00590a30  897e18               mov dword ptr [esi + 0x18], edi
// 00590a33  397e20               cmp dword ptr [esi + 0x20], edi
// 00590a36  750a                 jne 0x590a42
// 00590a38  c74620f0a05900       mov dword ptr [esi + 0x20], 0x59a0f0
// 00590a3f  897e28               mov dword ptr [esi + 0x28], edi
// 00590a42  397e24               cmp dword ptr [esi + 0x24], edi
// 00590a45  7507                 jne 0x590a4e
// 00590a47  c7462450aa5900       mov dword ptr [esi + 0x24], 0x59aa50
// 00590a4e  8b4628               mov eax, dword ptr [esi + 0x28]
// 00590a51  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00590a54  6830250000           push 0x2530
// 00590a59  6a01                 push 1
// 00590a5b  50                   push eax
// 00590a5c  ffd1                 call ecx
// 00590a5e  83c40c               add esp, 0xc
// 00590a61  3bc7                 cmp eax, edi
// 00590a63  7508                 jne 0x590a6d
// 00590a65  5e                   pop esi
// 00590a66  b8fcffffff           mov eax, 0xfffffffc
// 00590a6b  5f                   pop edi
// 00590a6c  c3                   ret 
// 00590a6d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00590a71  3bcf                 cmp ecx, edi
// 00590a73  89461c               mov dword ptr [esi + 0x1c], eax
// 00590a76  7d07                 jge 0x590a7f
// 00590a78  897808               mov dword ptr [eax + 8], edi
// 00590a7b  f7d9                 neg ecx
// 00590a7d  eb11                 jmp 0x590a90
// 00590a7f  8bd1                 mov edx, ecx
// 00590a81  c1fa04               sar edx, 4
// 00590a84  42                   inc edx
// 00590a85  83f930               cmp ecx, 0x30
// 00590a88  895008               mov dword ptr [eax + 8], edx
// 00590a8b  7d03                 jge 0x590a90
// 00590a8d  83e10f               and ecx, 0xf
// 00590a90  8d51f8               lea edx, [ecx - 8]
// 00590a93  83fa07               cmp edx, 7
// 00590a96  7712                 ja 0x590aaa
// 00590a98  56                   push esi
// 00590a99  894824               mov dword ptr [eax + 0x24], ecx
// 00590a9c  897834               mov dword ptr [eax + 0x34], edi
// 00590a9f  e8fcfeffff           call 0x5909a0
// 00590aa4  83c404               add esp, 4
// 00590aa7  5e                   pop esi
// 00590aa8  5f                   pop edi
// 00590aa9  c3                   ret 
// 00590aaa  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00590aad  50                   push eax
// 00590aae  8b4628               mov eax, dword ptr [esi + 0x28]
// 00590ab1  50                   push eax
// 00590ab2  ffd1                 call ecx
// 00590ab4  83c408               add esp, 8
// 00590ab7  897e1c               mov dword ptr [esi + 0x1c], edi
// 00590aba  5e                   pop esi
// 00590abb  b8feffffff           mov eax, 0xfffffffe
// 00590ac0  5f                   pop edi
// 00590ac1  c3                   ret 
// 00590ac2  b8faffffff           mov eax, 0xfffffffa
// 00590ac7  5f                   pop edi
// 00590ac8  c3                   ret 
// library zlib-1.2.3/inflate.c (function _inflateInit2_)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 inflate.c
