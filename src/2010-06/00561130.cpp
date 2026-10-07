// roc 2010-06 00561130  unit: G3D::_internal::DialogTemplate  size: 760 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00561130
//
// 00561130  83ec18               sub esp, 0x18
// 00561133  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00561139  80780d00             cmp byte ptr [eax + 0xd], 0
// 0056113d  53                   push ebx
// 0056113e  55                   push ebp
// 0056113f  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 00561142  8b5d00               mov ebx, dword ptr [ebp]
// 00561145  57                   push edi
// 00561146  8b7d04               mov edi, dword ptr [ebp + 4]
// 00561149  896c2420             mov dword ptr [esp + 0x20], ebp
// 0056114d  7513                 jne 0x561162
// 0056114f  8b0e                 mov ecx, dword ptr [esi]
// 00561151  c741143e000000       mov dword ptr [ecx + 0x14], 0x3e
// 00561158  8b16                 mov edx, dword ptr [esi]
// 0056115a  8b02                 mov eax, dword ptr [edx]
// 0056115c  56                   push esi
// 0056115d  ffd0                 call eax
// 0056115f  83c404               add esp, 4
// 00561162  85ff                 test edi, edi
// 00561164  751e                 jne 0x561184
// 00561166  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00561169  56                   push esi
// 0056116a  ffd1                 call ecx
// 0056116c  83c404               add esp, 4
// 0056116f  84c0                 test al, al
// 00561171  7509                 jne 0x56117c
// 00561173  5f                   pop edi
// 00561174  5d                   pop ebp
// 00561175  32c0                 xor al, al
// 00561177  5b                   pop ebx
// 00561178  83c418               add esp, 0x18
// 0056117b  c3                   ret 
// 0056117c  8b5504               mov edx, dword ptr [ebp + 4]
// 0056117f  8b5d00               mov ebx, dword ptr [ebp]
// 00561182  8bfa                 mov edi, edx
// 00561184  0fb603               movzx eax, byte ptr [ebx]
// 00561187  4f                   dec edi
// 00561188  c1e008               shl eax, 8
// 0056118b  43                   inc ebx
// 0056118c  89442410             mov dword ptr [esp + 0x10], eax
// 00561190  85ff                 test edi, edi
// 00561192  7519                 jne 0x5611ad
// 00561194  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00561197  56                   push esi
// 00561198  ffd0                 call eax
// 0056119a  83c404               add esp, 4
// 0056119d  84c0                 test al, al
// 0056119f  74d2                 je 0x561173
// 005611a1  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005611a4  8b5d00               mov ebx, dword ptr [ebp]
// 005611a7  8b442410             mov eax, dword ptr [esp + 0x10]
// 005611ab  8bf9                 mov edi, ecx
// 005611ad  0fb613               movzx edx, byte ptr [ebx]
// 005611b0  4f                   dec edi
// 005611b1  03c2                 add eax, edx
// 005611b3  43                   inc ebx
// 005611b4  89442410             mov dword ptr [esp + 0x10], eax
// 005611b8  85ff                 test edi, edi
// 005611ba  7515                 jne 0x5611d1
// 005611bc  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005611bf  56                   push esi
// 005611c0  ffd0                 call eax
// 005611c2  83c404               add esp, 4
// 005611c5  84c0                 test al, al
// 005611c7  74aa                 je 0x561173
// 005611c9  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005611cc  8b5d00               mov ebx, dword ptr [ebp]
// 005611cf  8bf9                 mov edi, ecx
// 005611d1  0fb603               movzx eax, byte ptr [ebx]
// 005611d4  8b16                 mov edx, dword ptr [esi]
// 005611d6  c7421467000000       mov dword ptr [edx + 0x14], 0x67
// 005611dd  8b0e                 mov ecx, dword ptr [esi]
// 005611df  894118               mov dword ptr [ecx + 0x18], eax
// 005611e2  8b16                 mov edx, dword ptr [esi]
// 005611e4  89442418             mov dword ptr [esp + 0x18], eax
// 005611e8  8b4204               mov eax, dword ptr [edx + 4]
// 005611eb  6a01                 push 1
// 005611ed  56                   push esi
// 005611ee  4f                   dec edi
// 005611ef  43                   inc ebx
// 005611f0  ffd0                 call eax
// 005611f2  8b442420             mov eax, dword ptr [esp + 0x20]
// 005611f6  8d4c0006             lea ecx, [eax + eax + 6]
// 005611fa  83c408               add esp, 8
// 005611fd  394c2410             cmp dword ptr [esp + 0x10], ecx
// 00561201  750a                 jne 0x56120d
// 00561203  83f801               cmp eax, 1
// 00561206  7c05                 jl 0x56120d
// 00561208  83f804               cmp eax, 4
// 0056120b  7e17                 jle 0x561224
// 0056120d  8b16                 mov edx, dword ptr [esi]
// 0056120f  c742140b000000       mov dword ptr [edx + 0x14], 0xb
// 00561216  8b06                 mov eax, dword ptr [esi]
// 00561218  8b08                 mov ecx, dword ptr [eax]
// 0056121a  56                   push esi
// 0056121b  ffd1                 call ecx
// 0056121d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00561221  83c404               add esp, 4
// 00561224  898624010000         mov dword ptr [esi + 0x124], eax
// 0056122a  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00561232  85c0                 test eax, eax
// 00561234  0f8efc000000         jle 0x561336
// 0056123a  8d9628010000         lea edx, [esi + 0x128]
// 00561240  89542414             mov dword ptr [esp + 0x14], edx
// 00561244  85ff                 test edi, edi
// 00561246  751d                 jne 0x561265
// 00561248  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0056124b  56                   push esi
// 0056124c  ffd0                 call eax
// 0056124e  83c404               add esp, 4
// 00561251  84c0                 test al, al
// 00561253  0f841affffff         je 0x561173
// 00561259  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0056125c  8b5d00               mov ebx, dword ptr [ebp]
// 0056125f  894c240c             mov dword ptr [esp + 0xc], ecx
// 00561263  8bf9                 mov edi, ecx
// 00561265  0fb613               movzx edx, byte ptr [ebx]
// 00561268  4f                   dec edi
// 00561269  43                   inc ebx
// 0056126a  89542410             mov dword ptr [esp + 0x10], edx
// 0056126e  85ff                 test edi, edi
// 00561270  751d                 jne 0x56128f
// 00561272  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00561275  56                   push esi
// 00561276  ffd0                 call eax
// 00561278  83c404               add esp, 4
// 0056127b  84c0                 test al, al
// 0056127d  0f84f0feffff         je 0x561173
// 00561283  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00561286  8b5d00               mov ebx, dword ptr [ebp]
// 00561289  894c240c             mov dword ptr [esp + 0xc], ecx
// 0056128d  8bf9                 mov edi, ecx
// 0056128f  0fb62b               movzx ebp, byte ptr [ebx]
// 00561292  4f                   dec edi
// 00561293  33c0                 xor eax, eax
// 00561295  43                   inc ebx
// 00561296  394624               cmp dword ptr [esi + 0x24], eax
// 00561299  897c240c             mov dword ptr [esp + 0xc], edi
// 0056129d  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 005612a3  7e11                 jle 0x5612b6
// 005612a5  8b542410             mov edx, dword ptr [esp + 0x10]
// 005612a9  3b17                 cmp edx, dword ptr [edi]
// 005612ab  7425                 je 0x5612d2
// 005612ad  40                   inc eax
// 005612ae  83c754               add edi, 0x54
// 005612b1  3b4624               cmp eax, dword ptr [esi + 0x24]
// 005612b4  7cef                 jl 0x5612a5
// 005612b6  8b06                 mov eax, dword ptr [esi]
// 005612b8  8b542410             mov edx, dword ptr [esp + 0x10]
// 005612bc  c7401405000000       mov dword ptr [eax + 0x14], 5
// 005612c3  8b0e                 mov ecx, dword ptr [esi]
// 005612c5  895118               mov dword ptr [ecx + 0x18], edx
// 005612c8  8b06                 mov eax, dword ptr [esi]
// 005612ca  8b08                 mov ecx, dword ptr [eax]
// 005612cc  56                   push esi
// 005612cd  ffd1                 call ecx
// 005612cf  83c404               add esp, 4
// 005612d2  8b542414             mov edx, dword ptr [esp + 0x14]
// 005612d6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005612da  893a                 mov dword ptr [edx], edi
// 005612dc  8bc5                 mov eax, ebp
// 005612de  c1f804               sar eax, 4
// 005612e1  83e00f               and eax, 0xf
// 005612e4  894714               mov dword ptr [edi + 0x14], eax
// 005612e7  83e50f               and ebp, 0xf
// 005612ea  896f18               mov dword ptr [edi + 0x18], ebp
// 005612ed  8b06                 mov eax, dword ptr [esi]
// 005612ef  83c018               add eax, 0x18
// 005612f2  8908                 mov dword ptr [eax], ecx
// 005612f4  8b5714               mov edx, dword ptr [edi + 0x14]
// 005612f7  895004               mov dword ptr [eax + 4], edx
// 005612fa  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 005612fd  894808               mov dword ptr [eax + 8], ecx
// 00561300  8b16                 mov edx, dword ptr [esi]
// 00561302  c7421468000000       mov dword ptr [edx + 0x14], 0x68
// 00561309  8b06                 mov eax, dword ptr [esi]
// 0056130b  8b4804               mov ecx, dword ptr [eax + 4]
// 0056130e  6a01                 push 1
// 00561310  56                   push esi
// 00561311  ffd1                 call ecx
// 00561313  8b442424             mov eax, dword ptr [esp + 0x24]
// 00561317  8344241c04           add dword ptr [esp + 0x1c], 4
// 0056131c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00561320  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00561324  40                   inc eax
// 00561325  83c408               add esp, 8
// 00561328  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0056132c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00561330  0f8c0effffff         jl 0x561244
// 00561336  85ff                 test edi, edi
// 00561338  751d                 jne 0x561357
// 0056133a  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0056133d  56                   push esi
// 0056133e  ffd2                 call edx
// 00561340  83c404               add esp, 4
// 00561343  84c0                 test al, al
// 00561345  0f8428feffff         je 0x561173
// 0056134b  8b4504               mov eax, dword ptr [ebp + 4]
// 0056134e  8b5d00               mov ebx, dword ptr [ebp]
// 00561351  8944240c             mov dword ptr [esp + 0xc], eax
// 00561355  8bf8                 mov edi, eax
// 00561357  0fb603               movzx eax, byte ptr [ebx]
// 0056135a  4f                   dec edi
// 0056135b  43                   inc ebx
// 0056135c  89866c010000         mov dword ptr [esi + 0x16c], eax
// 00561362  85ff                 test edi, edi
// 00561364  751d                 jne 0x561383
// 00561366  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00561369  56                   push esi
// 0056136a  ffd1                 call ecx
// 0056136c  83c404               add esp, 4
// 0056136f  84c0                 test al, al
// 00561371  0f84fcfdffff         je 0x561173
// 00561377  8b5504               mov edx, dword ptr [ebp + 4]
// 0056137a  8b5d00               mov ebx, dword ptr [ebp]
// 0056137d  8954240c             mov dword ptr [esp + 0xc], edx
// 00561381  8bfa                 mov edi, edx
// 00561383  0fb603               movzx eax, byte ptr [ebx]
// 00561386  4f                   dec edi
// 00561387  43                   inc ebx
// 00561388  898670010000         mov dword ptr [esi + 0x170], eax
// 0056138e  85ff                 test edi, edi
// 00561390  751d                 jne 0x5613af
// 00561392  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00561395  56                   push esi
// 00561396  ffd0                 call eax
// 00561398  83c404               add esp, 4
// 0056139b  84c0                 test al, al
// 0056139d  0f84d0fdffff         je 0x561173
// 005613a3  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005613a6  8b5d00               mov ebx, dword ptr [ebp]
// 005613a9  894c240c             mov dword ptr [esp + 0xc], ecx
// 005613ad  8bf9                 mov edi, ecx
// 005613af  0fb603               movzx eax, byte ptr [ebx]
// 005613b2  8b8e6c010000         mov ecx, dword ptr [esi + 0x16c]
// 005613b8  8bd0                 mov edx, eax
// 005613ba  83e00f               and eax, 0xf
// 005613bd  898678010000         mov dword ptr [esi + 0x178], eax
// 005613c3  8b06                 mov eax, dword ptr [esi]
// 005613c5  c1fa04               sar edx, 4
// 005613c8  83e20f               and edx, 0xf
// 005613cb  899674010000         mov dword ptr [esi + 0x174], edx
// 005613d1  83c018               add eax, 0x18
// 005613d4  8908                 mov dword ptr [eax], ecx
// 005613d6  8b9670010000         mov edx, dword ptr [esi + 0x170]
// 005613dc  895004               mov dword ptr [eax + 4], edx
// 005613df  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 005613e5  894808               mov dword ptr [eax + 8], ecx
// 005613e8  8b9678010000         mov edx, dword ptr [esi + 0x178]
// 005613ee  89500c               mov dword ptr [eax + 0xc], edx
// 005613f1  8b06                 mov eax, dword ptr [esi]
// 005613f3  c7401469000000       mov dword ptr [eax + 0x14], 0x69
// 005613fa  8b0e                 mov ecx, dword ptr [esi]
// 005613fc  8b5104               mov edx, dword ptr [ecx + 4]
// 005613ff  6a01                 push 1
// 00561401  56                   push esi
// 00561402  ffd2                 call edx
// 00561404  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0056140a  c7401000000000       mov dword ptr [eax + 0x10], 0
// 00561411  ff467c               inc dword ptr [esi + 0x7c]
// 00561414  83c408               add esp, 8
// 00561417  43                   inc ebx
// 00561418  4f                   dec edi
// 00561419  897d04               mov dword ptr [ebp + 4], edi
// 0056141c  5f                   pop edi
// 0056141d  895d00               mov dword ptr [ebp], ebx
// 00561420  5d                   pop ebp
// 00561421  b001                 mov al, 1
// 00561423  5b                   pop ebx
// 00561424  83c418               add esp, 0x18
// 00561427  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_sos)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
