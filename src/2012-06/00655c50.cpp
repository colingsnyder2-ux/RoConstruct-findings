// roc 2012-06 00655c50  unit: seg_00650000  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00655c50
//
// 00655c50  51                   push ecx
// 00655c51  53                   push ebx
// 00655c52  56                   push esi
// 00655c53  8b742410             mov esi, dword ptr [esp + 0x10]
// 00655c57  8b4644               mov eax, dword ptr [esi + 0x44]
// 00655c5a  33db                 xor ebx, ebx
// 00655c5c  57                   push edi
// 00655c5d  33ff                 xor edi, edi
// 00655c5f  395e3c               cmp dword ptr [esi + 0x3c], ebx
// 00655c62  895c240c             mov dword ptr [esp + 0xc], ebx
// 00655c66  7e26                 jle 0x655c8e
// 00655c68  55                   push ebp
// 00655c69  8d6810               lea ebp, [eax + 0x10]
// 00655c6c  8d642400             lea esp, [esp]
// 00655c70  8b4500               mov eax, dword ptr [ebp]
// 00655c73  50                   push eax
// 00655c74  8bc6                 mov eax, esi
// 00655c76  e825f5ffff           call 0x6551a0
// 00655c7b  47                   inc edi
// 00655c7c  83c404               add esp, 4
// 00655c7f  03d8                 add ebx, eax
// 00655c81  83c554               add ebp, 0x54
// 00655c84  3b7e3c               cmp edi, dword ptr [esi + 0x3c]
// 00655c87  7ce7                 jl 0x655c70
// 00655c89  895c2410             mov dword ptr [esp + 0x10], ebx
// 00655c8d  5d                   pop ebp
// 00655c8e  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 00655c95  7558                 jne 0x655cef
// 00655c97  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 00655c9e  754f                 jne 0x655cef
// 00655ca0  837e3808             cmp dword ptr [esi + 0x38], 8
// 00655ca4  7549                 jne 0x655cef
// 00655ca6  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00655ca9  8b4644               mov eax, dword ptr [esi + 0x44]
// 00655cac  b301                 mov bl, 1
// 00655cae  85c9                 test ecx, ecx
// 00655cb0  7e18                 jle 0x655cca
// 00655cb2  83c018               add eax, 0x18
// 00655cb5  8378fc01             cmp dword ptr [eax - 4], 1
// 00655cb9  7f05                 jg 0x655cc0
// 00655cbb  833801               cmp dword ptr [eax], 1
// 00655cbe  7e02                 jle 0x655cc2
// 00655cc0  32db                 xor bl, bl
// 00655cc2  83c054               add eax, 0x54
// 00655cc5  83e901               sub ecx, 1
// 00655cc8  75eb                 jne 0x655cb5
// 00655cca  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00655ccf  7420                 je 0x655cf1
// 00655cd1  84db                 test bl, bl
// 00655cd3  741c                 je 0x655cf1
// 00655cd5  8b0e                 mov ecx, dword ptr [esi]
// 00655cd7  c741144b000000       mov dword ptr [ecx + 0x14], 0x4b
// 00655cde  8b16                 mov edx, dword ptr [esi]
// 00655ce0  8b4204               mov eax, dword ptr [edx + 4]
// 00655ce3  6a00                 push 0
// 00655ce5  56                   push esi
// 00655ce6  32db                 xor bl, bl
// 00655ce8  ffd0                 call eax
// 00655cea  83c408               add esp, 8
// 00655ced  eb02                 jmp 0x655cf1
// 00655cef  32db                 xor bl, bl
// 00655cf1  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 00655cf8  8bce                 mov ecx, esi
// 00655cfa  5f                   pop edi
// 00655cfb  740f                 je 0x655d0c
// 00655cfd  5e                   pop esi
// 00655cfe  b8c9000000           mov eax, 0xc9
// 00655d03  5b                   pop ebx
// 00655d04  83c404               add esp, 4
// 00655d07  e9e4f7ffff           jmp 0x6554f0
// 00655d0c  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 00655d13  5e                   pop esi
// 00655d14  740e                 je 0x655d24
// 00655d16  b8c2000000           mov eax, 0xc2
// 00655d1b  5b                   pop ebx
// 00655d1c  83c404               add esp, 4
// 00655d1f  e9ccf7ffff           jmp 0x6554f0
// 00655d24  84db                 test bl, bl
// 00655d26  5b                   pop ebx
// 00655d27  740d                 je 0x655d36
// 00655d29  b8c0000000           mov eax, 0xc0
// 00655d2e  83c404               add esp, 4
// 00655d31  e9baf7ffff           jmp 0x6554f0
// 00655d36  b8c1000000           mov eax, 0xc1
// 00655d3b  83c404               add esp, 4
// 00655d3e  e9adf7ffff           jmp 0x6554f0
// library jpeg-6b/jcmarker.c (function _write_frame_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
