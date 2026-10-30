// from server: 100% by auto
// roc 2007-08 0052a110  unit: seg_00520000  size: 322 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052a110
//
// 0052a110  56                   push esi
// 0052a111  8b742408             mov esi, dword ptr [esp + 8]
// 0052a115  8b4604               mov eax, dword ptr [esi + 4]
// 0052a118  8b08                 mov ecx, dword ptr [eax]
// 0052a11a  57                   push edi
// 0052a11b  6a2c                 push 0x2c
// 0052a11d  6a01                 push 1
// 0052a11f  56                   push esi
// 0052a120  ffd1                 call ecx
// 0052a122  8bf8                 mov edi, eax
// 0052a124  89bea8010000         mov dword ptr [esi + 0x1a8], edi
// 0052a12a  83c40c               add esp, 0xc
// 0052a12d  c707e09f5200         mov dword ptr [edi], 0x529fe0
// 0052a133  c7470c00a15200       mov dword ptr [edi + 0xc], 0x52a100
// 0052a13a  c7472000000000       mov dword ptr [edi + 0x20], 0
// 0052a141  c7472800000000       mov dword ptr [edi + 0x28], 0
// 0052a148  837e6403             cmp dword ptr [esi + 0x64], 3
// 0052a14c  7413                 je 0x52a161
// 0052a14e  8b16                 mov edx, dword ptr [esi]
// 0052a150  c742142f000000       mov dword ptr [edx + 0x14], 0x2f
// 0052a157  8b06                 mov eax, dword ptr [esi]
// 0052a159  8b08                 mov ecx, dword ptr [eax]
// 0052a15b  56                   push esi
// 0052a15c  ffd1                 call ecx
// 0052a15e  83c404               add esp, 4
// 0052a161  8b5604               mov edx, dword ptr [esi + 4]
// 0052a164  8b02                 mov eax, dword ptr [edx]
// 0052a166  55                   push ebp
// 0052a167  6880000000           push 0x80
// 0052a16c  6a01                 push 1
// 0052a16e  56                   push esi
// 0052a16f  ffd0                 call eax
// 0052a171  83c40c               add esp, 0xc
// 0052a174  894718               mov dword ptr [edi + 0x18], eax
// 0052a177  33ed                 xor ebp, ebp
// 0052a179  8da42400000000       lea esp, [esp]
// 0052a180  8b4e04               mov ecx, dword ptr [esi + 4]
// 0052a183  8b5104               mov edx, dword ptr [ecx + 4]
// 0052a186  6800100000           push 0x1000
// 0052a18b  6a01                 push 1
// 0052a18d  56                   push esi
// 0052a18e  ffd2                 call edx
// 0052a190  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 0052a193  890429               mov dword ptr [ecx + ebp], eax
// 0052a196  83c504               add ebp, 4
// 0052a199  83c40c               add esp, 0xc
// 0052a19c  81fd80000000         cmp ebp, 0x80
// 0052a1a2  7cdc                 jl 0x52a180
// 0052a1a4  c6471c01             mov byte ptr [edi + 0x1c], 1
// 0052a1a8  807e5a00             cmp byte ptr [esi + 0x5a], 0
// 0052a1ac  7461                 je 0x52a20f
// 0052a1ae  8b6e54               mov ebp, dword ptr [esi + 0x54]
// 0052a1b1  83fd08               cmp ebp, 8
// 0052a1b4  7d1c                 jge 0x52a1d2
// 0052a1b6  8b16                 mov edx, dword ptr [esi]
// 0052a1b8  c7421438000000       mov dword ptr [edx + 0x14], 0x38
// 0052a1bf  8b06                 mov eax, dword ptr [esi]
// 0052a1c1  c7401808000000       mov dword ptr [eax + 0x18], 8
// 0052a1c8  8b0e                 mov ecx, dword ptr [esi]
// 0052a1ca  8b11                 mov edx, dword ptr [ecx]
// 0052a1cc  56                   push esi
// 0052a1cd  ffd2                 call edx
// 0052a1cf  83c404               add esp, 4
// 0052a1d2  81fd00010000         cmp ebp, 0x100
// 0052a1d8  7e1c                 jle 0x52a1f6
// 0052a1da  8b06                 mov eax, dword ptr [esi]
// 0052a1dc  c7401439000000       mov dword ptr [eax + 0x14], 0x39
// 0052a1e3  8b0e                 mov ecx, dword ptr [esi]
// 0052a1e5  c7411800010000       mov dword ptr [ecx + 0x18], 0x100
// 0052a1ec  8b16                 mov edx, dword ptr [esi]
// 0052a1ee  8b02                 mov eax, dword ptr [edx]
// 0052a1f0  56                   push esi
// 0052a1f1  ffd0                 call eax
// 0052a1f3  83c404               add esp, 4
// 0052a1f6  8b4e04               mov ecx, dword ptr [esi + 4]
// 0052a1f9  8b5108               mov edx, dword ptr [ecx + 8]
// 0052a1fc  6a03                 push 3
// 0052a1fe  55                   push ebp
// 0052a1ff  6a01                 push 1
// 0052a201  56                   push esi
// 0052a202  ffd2                 call edx
// 0052a204  83c410               add esp, 0x10
// 0052a207  894710               mov dword ptr [edi + 0x10], eax
// 0052a20a  896f14               mov dword ptr [edi + 0x14], ebp
// 0052a20d  eb07                 jmp 0x52a216
// 0052a20f  c7471000000000       mov dword ptr [edi + 0x10], 0
// 0052a216  837e4c00             cmp dword ptr [esi + 0x4c], 0
// 0052a21a  b902000000           mov ecx, 2
// 0052a21f  5d                   pop ebp
// 0052a220  7403                 je 0x52a225
// 0052a222  894e4c               mov dword ptr [esi + 0x4c], ecx
// 0052a225  394e4c               cmp dword ptr [esi + 0x4c], ecx
// 0052a228  7525                 jne 0x52a24f
// 0052a22a  8b465c               mov eax, dword ptr [esi + 0x5c]
// 0052a22d  8b5604               mov edx, dword ptr [esi + 4]
// 0052a230  03c1                 add eax, ecx
// 0052a232  8b4a04               mov ecx, dword ptr [edx + 4]
// 0052a235  8d0440               lea eax, [eax + eax*2]
// 0052a238  03c0                 add eax, eax
// 0052a23a  50                   push eax
// 0052a23b  6a01                 push 1
// 0052a23d  56                   push esi
// 0052a23e  ffd1                 call ecx
// 0052a240  83c40c               add esp, 0xc
// 0052a243  894720               mov dword ptr [edi + 0x20], eax
// 0052a246  5f                   pop edi
// 0052a247  8bc6                 mov eax, esi
// 0052a249  5e                   pop esi
// 0052a24a  e9b1fcffff           jmp 0x529f00
// 0052a24f  5f                   pop edi
// 0052a250  5e                   pop esi
// 0052a251  c3                   ret 
// library jpeg-6b/jquant2.c (function _jinit_2pass_quantizer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
