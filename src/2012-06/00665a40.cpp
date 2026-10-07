// roc 2012-06 00665a40  unit: seg_00660000  size: 322 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00665a40
//
// 00665a40  56                   push esi
// 00665a41  8b742408             mov esi, dword ptr [esp + 8]
// 00665a45  8b4604               mov eax, dword ptr [esi + 4]
// 00665a48  8b08                 mov ecx, dword ptr [eax]
// 00665a4a  57                   push edi
// 00665a4b  6a2c                 push 0x2c
// 00665a4d  6a01                 push 1
// 00665a4f  56                   push esi
// 00665a50  ffd1                 call ecx
// 00665a52  8bf8                 mov edi, eax
// 00665a54  89bea8010000         mov dword ptr [esi + 0x1a8], edi
// 00665a5a  83c40c               add esp, 0xc
// 00665a5d  c70710596600         mov dword ptr [edi], 0x665910
// 00665a63  c7470c305a6600       mov dword ptr [edi + 0xc], 0x665a30
// 00665a6a  c7472000000000       mov dword ptr [edi + 0x20], 0
// 00665a71  c7472800000000       mov dword ptr [edi + 0x28], 0
// 00665a78  837e6403             cmp dword ptr [esi + 0x64], 3
// 00665a7c  7413                 je 0x665a91
// 00665a7e  8b16                 mov edx, dword ptr [esi]
// 00665a80  c742142f000000       mov dword ptr [edx + 0x14], 0x2f
// 00665a87  8b06                 mov eax, dword ptr [esi]
// 00665a89  8b08                 mov ecx, dword ptr [eax]
// 00665a8b  56                   push esi
// 00665a8c  ffd1                 call ecx
// 00665a8e  83c404               add esp, 4
// 00665a91  8b5604               mov edx, dword ptr [esi + 4]
// 00665a94  8b02                 mov eax, dword ptr [edx]
// 00665a96  55                   push ebp
// 00665a97  6880000000           push 0x80
// 00665a9c  6a01                 push 1
// 00665a9e  56                   push esi
// 00665a9f  ffd0                 call eax
// 00665aa1  83c40c               add esp, 0xc
// 00665aa4  894718               mov dword ptr [edi + 0x18], eax
// 00665aa7  33ed                 xor ebp, ebp
// 00665aa9  8da42400000000       lea esp, [esp]
// 00665ab0  8b4e04               mov ecx, dword ptr [esi + 4]
// 00665ab3  8b5104               mov edx, dword ptr [ecx + 4]
// 00665ab6  6800100000           push 0x1000
// 00665abb  6a01                 push 1
// 00665abd  56                   push esi
// 00665abe  ffd2                 call edx
// 00665ac0  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00665ac3  890429               mov dword ptr [ecx + ebp], eax
// 00665ac6  83c504               add ebp, 4
// 00665ac9  83c40c               add esp, 0xc
// 00665acc  81fd80000000         cmp ebp, 0x80
// 00665ad2  7cdc                 jl 0x665ab0
// 00665ad4  c6471c01             mov byte ptr [edi + 0x1c], 1
// 00665ad8  807e5a00             cmp byte ptr [esi + 0x5a], 0
// 00665adc  7461                 je 0x665b3f
// 00665ade  8b6e54               mov ebp, dword ptr [esi + 0x54]
// 00665ae1  83fd08               cmp ebp, 8
// 00665ae4  7d1c                 jge 0x665b02
// 00665ae6  8b16                 mov edx, dword ptr [esi]
// 00665ae8  c7421438000000       mov dword ptr [edx + 0x14], 0x38
// 00665aef  8b06                 mov eax, dword ptr [esi]
// 00665af1  c7401808000000       mov dword ptr [eax + 0x18], 8
// 00665af8  8b0e                 mov ecx, dword ptr [esi]
// 00665afa  8b11                 mov edx, dword ptr [ecx]
// 00665afc  56                   push esi
// 00665afd  ffd2                 call edx
// 00665aff  83c404               add esp, 4
// 00665b02  81fd00010000         cmp ebp, 0x100
// 00665b08  7e1c                 jle 0x665b26
// 00665b0a  8b06                 mov eax, dword ptr [esi]
// 00665b0c  c7401439000000       mov dword ptr [eax + 0x14], 0x39
// 00665b13  8b0e                 mov ecx, dword ptr [esi]
// 00665b15  c7411800010000       mov dword ptr [ecx + 0x18], 0x100
// 00665b1c  8b16                 mov edx, dword ptr [esi]
// 00665b1e  8b02                 mov eax, dword ptr [edx]
// 00665b20  56                   push esi
// 00665b21  ffd0                 call eax
// 00665b23  83c404               add esp, 4
// 00665b26  8b4e04               mov ecx, dword ptr [esi + 4]
// 00665b29  8b5108               mov edx, dword ptr [ecx + 8]
// 00665b2c  6a03                 push 3
// 00665b2e  55                   push ebp
// 00665b2f  6a01                 push 1
// 00665b31  56                   push esi
// 00665b32  ffd2                 call edx
// 00665b34  83c410               add esp, 0x10
// 00665b37  894710               mov dword ptr [edi + 0x10], eax
// 00665b3a  896f14               mov dword ptr [edi + 0x14], ebp
// 00665b3d  eb07                 jmp 0x665b46
// 00665b3f  c7471000000000       mov dword ptr [edi + 0x10], 0
// 00665b46  837e4c00             cmp dword ptr [esi + 0x4c], 0
// 00665b4a  b902000000           mov ecx, 2
// 00665b4f  5d                   pop ebp
// 00665b50  7403                 je 0x665b55
// 00665b52  894e4c               mov dword ptr [esi + 0x4c], ecx
// 00665b55  394e4c               cmp dword ptr [esi + 0x4c], ecx
// 00665b58  7525                 jne 0x665b7f
// 00665b5a  8b465c               mov eax, dword ptr [esi + 0x5c]
// 00665b5d  8b5604               mov edx, dword ptr [esi + 4]
// 00665b60  03c1                 add eax, ecx
// 00665b62  8b4a04               mov ecx, dword ptr [edx + 4]
// 00665b65  8d0440               lea eax, [eax + eax*2]
// 00665b68  03c0                 add eax, eax
// 00665b6a  50                   push eax
// 00665b6b  6a01                 push 1
// 00665b6d  56                   push esi
// 00665b6e  ffd1                 call ecx
// 00665b70  83c40c               add esp, 0xc
// 00665b73  894720               mov dword ptr [edi + 0x20], eax
// 00665b76  5f                   pop edi
// 00665b77  8bc6                 mov eax, esi
// 00665b79  5e                   pop esi
// 00665b7a  e9c1fcffff           jmp 0x665840
// 00665b7f  5f                   pop edi
// 00665b80  5e                   pop esi
// 00665b81  c3                   ret 
// library jpeg-6b/jquant2.c (function _jinit_2pass_quantizer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
