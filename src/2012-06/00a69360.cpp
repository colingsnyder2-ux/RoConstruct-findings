// roc 2012-06 00a69360  unit: PAVCXTShadowWnd::?$CList  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a69360
//
// 00a69360  6aff                 push -1
// 00a69362  689485ae00           push 0xae8594
// 00a69367  64a100000000         mov eax, dword ptr fs:[0]
// 00a6936d  50                   push eax
// 00a6936e  51                   push ecx
// 00a6936f  53                   push ebx
// 00a69370  55                   push ebp
// 00a69371  56                   push esi
// 00a69372  57                   push edi
// 00a69373  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a69378  33c4                 xor eax, esp
// 00a6937a  50                   push eax
// 00a6937b  8d442418             lea eax, [esp + 0x18]
// 00a6937f  64a300000000         mov dword ptr fs:[0], eax
// 00a69385  8be9                 mov ebp, ecx
// 00a69387  837d2800             cmp dword ptr [ebp + 0x28], 0
// 00a6938b  753a                 jne 0xa693c7
// 00a6938d  6884000000           push 0x84
// 00a69392  e8838df1ff           call 0x98211a
// 00a69397  83c404               add esp, 4
// 00a6939a  89442414             mov dword ptr [esp + 0x14], eax
// 00a6939e  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00a693a6  85c0                 test eax, eax
// 00a693a8  7411                 je 0xa693bb
// 00a693aa  8bc8                 mov ecx, eax
// 00a693ac  e82feeffff           call 0xa681e0
// 00a693b1  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00a693b9  eb14                 jmp 0xa693cf
// 00a693bb  33c0                 xor eax, eax
// 00a693bd  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00a693c5  eb08                 jmp 0xa693cf
// 00a693c7  8d4d1c               lea ecx, [ebp + 0x1c]
// 00a693ca  e84167ffff           call 0xa5fb10
// 00a693cf  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 00a693d3  8bf0                 mov esi, eax
// 00a693d5  895e68               mov dword ptr [esi + 0x68], ebx
// 00a693d8  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a693dc  89466c               mov dword ptr [esi + 0x6c], eax
// 00a693df  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a693e3  894e70               mov dword ptr [esi + 0x70], ecx
// 00a693e6  8b542444             mov edx, dword ptr [esp + 0x44]
// 00a693ea  895674               mov dword ptr [esi + 0x74], edx
// 00a693ed  8b442448             mov eax, dword ptr [esp + 0x48]
// 00a693f1  894678               mov dword ptr [esi + 0x78], eax
// 00a693f4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a693f8  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a693fc  83ec10               sub esp, 0x10
// 00a693ff  8bc4                 mov eax, esp
// 00a69401  8908                 mov dword ptr [eax], ecx
// 00a69403  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a69407  895004               mov dword ptr [eax + 4], edx
// 00a6940a  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a6940e  894808               mov dword ptr [eax + 8], ecx
// 00a69411  89500c               mov dword ptr [eax + 0xc], edx
// 00a69414  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a69418  50                   push eax
// 00a69419  8bce                 mov ecx, esi
// 00a6941b  e850f8ffff           call 0xa68c70
// 00a69420  6a14                 push 0x14
// 00a69422  e8f38cf1ff           call 0x98211a
// 00a69427  8bf8                 mov edi, eax
// 00a69429  83c404               add esp, 4
// 00a6942c  897c244c             mov dword ptr [esp + 0x4c], edi
// 00a69430  c744242001000000     mov dword ptr [esp + 0x20], 1
// 00a69438  85ff                 test edi, edi
// 00a6943a  7414                 je 0xa69450
// 00a6943c  8bcf                 mov ecx, edi
// 00a6943e  e8bdfe0000           call 0xa79300
// 00a69443  c707ac55c200         mov dword ptr [edi], 0xc255ac
// 00a69449  897710               mov dword ptr [edi + 0x10], esi
// 00a6944c  8bcf                 mov ecx, edi
// 00a6944e  eb02                 jmp 0xa69452
// 00a69450  33c9                 xor ecx, ecx
// 00a69452  898e80000000         mov dword ptr [esi + 0x80], ecx
// 00a69458  8b11                 mov edx, dword ptr [ecx]
// 00a6945a  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00a6945d  53                   push ebx
// 00a6945e  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00a69466  ffd0                 call eax
// 00a69468  56                   push esi
// 00a69469  8bcd                 mov ecx, ebp
// 00a6946b  e8a0f4ffff           call 0xa68910
// 00a69470  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a69474  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a69478  83ec10               sub esp, 0x10
// 00a6947b  8bc4                 mov eax, esp
// 00a6947d  8908                 mov dword ptr [eax], ecx
// 00a6947f  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00a69483  895004               mov dword ptr [eax + 4], edx
// 00a69486  8b542458             mov edx, dword ptr [esp + 0x58]
// 00a6948a  894808               mov dword ptr [eax + 8], ecx
// 00a6948d  8bce                 mov ecx, esi
// 00a6948f  89500c               mov dword ptr [eax + 0xc], edx
// 00a69492  e829f1ffff           call 0xa685c0
// 00a69497  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a6949a  8b3d943ab200         mov edi, dword ptr [0xb23a94]
// 00a694a0  6a00                 push 0
// 00a694a2  6af8                 push -8
// 00a694a4  50                   push eax
// 00a694a5  ffd7                 call edi
// 00a694a7  837e6400             cmp dword ptr [esi + 0x64], 0
// 00a694ab  745b                 je 0xa69508
// 00a694ad  8b0db841b200         mov ecx, dword ptr [0xb241b8]
// 00a694b3  6a13                 push 0x13
// 00a694b5  6a00                 push 0
// 00a694b7  6a00                 push 0
// 00a694b9  6a00                 push 0
// 00a694bb  6a00                 push 0
// 00a694bd  51                   push ecx
// 00a694be  8bce                 mov ecx, esi
// 00a694c0  e80f90f1ff           call 0x9824d4
// 00a694c5  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 00a694c8  85c9                 test ecx, ecx
// 00a694ca  7410                 je 0xa694dc
// 00a694cc  8b11                 mov edx, dword ptr [ecx]
// 00a694ce  8b4204               mov eax, dword ptr [edx + 4]
// 00a694d1  6a01                 push 1
// 00a694d3  ffd0                 call eax
// 00a694d5  c7467c00000000       mov dword ptr [esi + 0x7c], 0
// 00a694dc  ff15f43bb200         call dword ptr [0xb23bf4]
// 00a694e2  50                   push eax
// 00a694e3  e87e91f1ff           call 0x982666
// 00a694e8  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00a694eb  6a00                 push 0
// 00a694ed  6a00                 push 0
// 00a694ef  51                   push ecx
// 00a694f0  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a694f6  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a694f9  6a00                 push 0
// 00a694fb  6a01                 push 1
// 00a694fd  6a01                 push 1
// 00a694ff  52                   push edx
// 00a69500  ff15e03ab200         call dword ptr [0xb23ae0]
// 00a69506  eb17                 jmp 0xa6951f
// 00a69508  a1b841b200           mov eax, dword ptr [0xb241b8]
// 00a6950d  6a53                 push 0x53
// 00a6950f  6a00                 push 0
// 00a69511  6a00                 push 0
// 00a69513  6a00                 push 0
// 00a69515  6a00                 push 0
// 00a69517  50                   push eax
// 00a69518  8bce                 mov ecx, esi
// 00a6951a  e8b58ff1ff           call 0x9824d4
// 00a6951f  e87093f1ff           call 0x982894
// 00a69524  85c0                 test eax, eax
// 00a69526  740b                 je 0xa69533
// 00a69528  8b10                 mov edx, dword ptr [eax]
// 00a6952a  8bc8                 mov ecx, eax
// 00a6952c  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00a6952f  ffd0                 call eax
// 00a69531  eb02                 jmp 0xa69535
// 00a69533  33c0                 xor eax, eax
// 00a69535  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00a69538  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a6953b  51                   push ecx
// 00a6953c  6af8                 push -8
// 00a6953e  52                   push edx
// 00a6953f  ffd7                 call edi
// 00a69541  8bc6                 mov eax, esi
// 00a69543  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a69547  64890d00000000       mov dword ptr fs:[0], ecx
// 00a6954e  59                   pop ecx
// 00a6954f  5f                   pop edi
// 00a69550  5e                   pop esi
// 00a69551  5d                   pop ebp
// 00a69552  5b                   pop ebx
// 00a69553  83c410               add esp, 0x10
// 00a69556  c22800               ret 0x28
// copied from an identical function in another client (function ?CreateShadow@CXTShadowsManager@@AAEPAVCXTShadowWnd@@HVCRect@@0PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp