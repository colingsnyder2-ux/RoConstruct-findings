// roc 2009-06 00598220  unit: seg_00590000  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00598220
//
// 00598220  53                   push ebx
// 00598221  56                   push esi
// 00598222  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00598226  57                   push edi
// 00598227  68d8000000           push 0xd8
// 0059822c  e85ff2ffff           call 0x597490
// 00598231  83c404               add esp, 4
// 00598234  33ff                 xor edi, edi
// 00598236  8d5e48               lea ebx, [esi + 0x48]
// 00598239  8da42400000000       lea esp, [esp]
// 00598240  833b00               cmp dword ptr [ebx], 0
// 00598243  740b                 je 0x598250
// 00598245  57                   push edi
// 00598246  8bc6                 mov eax, esi
// 00598248  e823f3ffff           call 0x597570
// 0059824d  83c404               add esp, 4
// 00598250  47                   inc edi
// 00598251  83c304               add ebx, 4
// 00598254  83ff04               cmp edi, 4
// 00598257  7ce7                 jl 0x598240
// 00598259  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 00598260  7533                 jne 0x598295
// 00598262  33ff                 xor edi, edi
// 00598264  8d5e68               lea ebx, [esi + 0x68]
// 00598267  837bf000             cmp dword ptr [ebx - 0x10], 0
// 0059826b  740d                 je 0x59827a
// 0059826d  6a00                 push 0
// 0059826f  57                   push edi
// 00598270  8bc6                 mov eax, esi
// 00598272  e8d9f4ffff           call 0x597750
// 00598277  83c408               add esp, 8
// 0059827a  833b00               cmp dword ptr [ebx], 0
// 0059827d  740d                 je 0x59828c
// 0059827f  6a01                 push 1
// 00598281  57                   push edi
// 00598282  8bc6                 mov eax, esi
// 00598284  e8c7f4ffff           call 0x597750
// 00598289  83c408               add esp, 8
// 0059828c  47                   inc edi
// 0059828d  83c304               add ebx, 4
// 00598290  83ff04               cmp edi, 4
// 00598293  7cd2                 jl 0x598267
// 00598295  8b4618               mov eax, dword ptr [esi + 0x18]
// 00598298  8b08                 mov ecx, dword ptr [eax]
// 0059829a  c601ff               mov byte ptr [ecx], 0xff
// 0059829d  ff00                 inc dword ptr [eax]
// 0059829f  83cfff               or edi, 0xffffffff
// 005982a2  017804               add dword ptr [eax + 4], edi
// 005982a5  8d5f19               lea ebx, [edi + 0x19]
// 005982a8  751c                 jne 0x5982c6
// 005982aa  8b500c               mov edx, dword ptr [eax + 0xc]
// 005982ad  56                   push esi
// 005982ae  ffd2                 call edx
// 005982b0  83c404               add esp, 4
// 005982b3  84c0                 test al, al
// 005982b5  750f                 jne 0x5982c6
// 005982b7  8b06                 mov eax, dword ptr [esi]
// 005982b9  895814               mov dword ptr [eax + 0x14], ebx
// 005982bc  8b0e                 mov ecx, dword ptr [esi]
// 005982be  8b11                 mov edx, dword ptr [ecx]
// 005982c0  56                   push esi
// 005982c1  ffd2                 call edx
// 005982c3  83c404               add esp, 4
// 005982c6  8b4618               mov eax, dword ptr [esi + 0x18]
// 005982c9  8b08                 mov ecx, dword ptr [eax]
// 005982cb  c601d9               mov byte ptr [ecx], 0xd9
// 005982ce  ff00                 inc dword ptr [eax]
// 005982d0  017804               add dword ptr [eax + 4], edi
// 005982d3  751c                 jne 0x5982f1
// 005982d5  8b500c               mov edx, dword ptr [eax + 0xc]
// 005982d8  56                   push esi
// 005982d9  ffd2                 call edx
// 005982db  83c404               add esp, 4
// 005982de  84c0                 test al, al
// 005982e0  750f                 jne 0x5982f1
// 005982e2  8b06                 mov eax, dword ptr [esi]
// 005982e4  895814               mov dword ptr [eax + 0x14], ebx
// 005982e7  8b0e                 mov ecx, dword ptr [esi]
// 005982e9  8b11                 mov edx, dword ptr [ecx]
// 005982eb  56                   push esi
// 005982ec  ffd2                 call edx
// 005982ee  83c404               add esp, 4
// 005982f1  5f                   pop edi
// 005982f2  5e                   pop esi
// 005982f3  5b                   pop ebx
// 005982f4  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_tables_only)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
