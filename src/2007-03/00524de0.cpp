// roc 2007-03 00524de0  unit: seg_00520000  size: 322 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00524de0
//
// 00524de0  56                   push esi
// 00524de1  8b742408             mov esi, dword ptr [esp + 8]
// 00524de5  8b4604               mov eax, dword ptr [esi + 4]
// 00524de8  8b08                 mov ecx, dword ptr [eax]
// 00524dea  57                   push edi
// 00524deb  6a2c                 push 0x2c
// 00524ded  6a01                 push 1
// 00524def  56                   push esi
// 00524df0  ffd1                 call ecx
// 00524df2  8bf8                 mov edi, eax
// 00524df4  89bea8010000         mov dword ptr [esi + 0x1a8], edi
// 00524dfa  83c40c               add esp, 0xc
// 00524dfd  c707b04c5200         mov dword ptr [edi], 0x524cb0
// 00524e03  c7470cd04d5200       mov dword ptr [edi + 0xc], 0x524dd0
// 00524e0a  c7472000000000       mov dword ptr [edi + 0x20], 0
// 00524e11  c7472800000000       mov dword ptr [edi + 0x28], 0
// 00524e18  837e6403             cmp dword ptr [esi + 0x64], 3
// 00524e1c  7413                 je 0x524e31
// 00524e1e  8b16                 mov edx, dword ptr [esi]
// 00524e20  c742142f000000       mov dword ptr [edx + 0x14], 0x2f
// 00524e27  8b06                 mov eax, dword ptr [esi]
// 00524e29  8b08                 mov ecx, dword ptr [eax]
// 00524e2b  56                   push esi
// 00524e2c  ffd1                 call ecx
// 00524e2e  83c404               add esp, 4
// 00524e31  8b5604               mov edx, dword ptr [esi + 4]
// 00524e34  8b02                 mov eax, dword ptr [edx]
// 00524e36  55                   push ebp
// 00524e37  6880000000           push 0x80
// 00524e3c  6a01                 push 1
// 00524e3e  56                   push esi
// 00524e3f  ffd0                 call eax
// 00524e41  83c40c               add esp, 0xc
// 00524e44  894718               mov dword ptr [edi + 0x18], eax
// 00524e47  33ed                 xor ebp, ebp
// 00524e49  8da42400000000       lea esp, [esp]
// 00524e50  8b4e04               mov ecx, dword ptr [esi + 4]
// 00524e53  8b5104               mov edx, dword ptr [ecx + 4]
// 00524e56  6800100000           push 0x1000
// 00524e5b  6a01                 push 1
// 00524e5d  56                   push esi
// 00524e5e  ffd2                 call edx
// 00524e60  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00524e63  890429               mov dword ptr [ecx + ebp], eax
// 00524e66  83c504               add ebp, 4
// 00524e69  83c40c               add esp, 0xc
// 00524e6c  81fd80000000         cmp ebp, 0x80
// 00524e72  7cdc                 jl 0x524e50
// 00524e74  c6471c01             mov byte ptr [edi + 0x1c], 1
// 00524e78  807e5a00             cmp byte ptr [esi + 0x5a], 0
// 00524e7c  7461                 je 0x524edf
// 00524e7e  8b6e54               mov ebp, dword ptr [esi + 0x54]
// 00524e81  83fd08               cmp ebp, 8
// 00524e84  7d1c                 jge 0x524ea2
// 00524e86  8b16                 mov edx, dword ptr [esi]
// 00524e88  c7421438000000       mov dword ptr [edx + 0x14], 0x38
// 00524e8f  8b06                 mov eax, dword ptr [esi]
// 00524e91  c7401808000000       mov dword ptr [eax + 0x18], 8
// 00524e98  8b0e                 mov ecx, dword ptr [esi]
// 00524e9a  8b11                 mov edx, dword ptr [ecx]
// 00524e9c  56                   push esi
// 00524e9d  ffd2                 call edx
// 00524e9f  83c404               add esp, 4
// 00524ea2  81fd00010000         cmp ebp, 0x100
// 00524ea8  7e1c                 jle 0x524ec6
// 00524eaa  8b06                 mov eax, dword ptr [esi]
// 00524eac  c7401439000000       mov dword ptr [eax + 0x14], 0x39
// 00524eb3  8b0e                 mov ecx, dword ptr [esi]
// 00524eb5  c7411800010000       mov dword ptr [ecx + 0x18], 0x100
// 00524ebc  8b16                 mov edx, dword ptr [esi]
// 00524ebe  8b02                 mov eax, dword ptr [edx]
// 00524ec0  56                   push esi
// 00524ec1  ffd0                 call eax
// 00524ec3  83c404               add esp, 4
// 00524ec6  8b4e04               mov ecx, dword ptr [esi + 4]
// 00524ec9  8b5108               mov edx, dword ptr [ecx + 8]
// 00524ecc  6a03                 push 3
// 00524ece  55                   push ebp
// 00524ecf  6a01                 push 1
// 00524ed1  56                   push esi
// 00524ed2  ffd2                 call edx
// 00524ed4  83c410               add esp, 0x10
// 00524ed7  894710               mov dword ptr [edi + 0x10], eax
// 00524eda  896f14               mov dword ptr [edi + 0x14], ebp
// 00524edd  eb07                 jmp 0x524ee6
// 00524edf  c7471000000000       mov dword ptr [edi + 0x10], 0
// 00524ee6  837e4c00             cmp dword ptr [esi + 0x4c], 0
// 00524eea  b902000000           mov ecx, 2
// 00524eef  5d                   pop ebp
// 00524ef0  7403                 je 0x524ef5
// 00524ef2  894e4c               mov dword ptr [esi + 0x4c], ecx
// 00524ef5  394e4c               cmp dword ptr [esi + 0x4c], ecx
// 00524ef8  7525                 jne 0x524f1f
// 00524efa  8b465c               mov eax, dword ptr [esi + 0x5c]
// 00524efd  8b5604               mov edx, dword ptr [esi + 4]
// 00524f00  03c1                 add eax, ecx
// 00524f02  8b4a04               mov ecx, dword ptr [edx + 4]
// 00524f05  8d0440               lea eax, [eax + eax*2]
// 00524f08  03c0                 add eax, eax
// 00524f0a  50                   push eax
// 00524f0b  6a01                 push 1
// 00524f0d  56                   push esi
// 00524f0e  ffd1                 call ecx
// 00524f10  83c40c               add esp, 0xc
// 00524f13  894720               mov dword ptr [edi + 0x20], eax
// 00524f16  5f                   pop edi
// 00524f17  8bc6                 mov eax, esi
// 00524f19  5e                   pop esi
// 00524f1a  e9b1fcffff           jmp 0x524bd0
// 00524f1f  5f                   pop edi
// 00524f20  5e                   pop esi
// 00524f21  c3                   ret 
// library jpeg-6b/jquant2.c (function _jinit_2pass_quantizer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
