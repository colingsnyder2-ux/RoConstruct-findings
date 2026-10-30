// roc 2009-06 008096a0  unit: CXTShadowHook  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008096a0
//
// 008096a0  6aff                 push -1
// 008096a2  68141d8800           push 0x881d14
// 008096a7  64a100000000         mov eax, dword ptr fs:[0]
// 008096ad  50                   push eax
// 008096ae  51                   push ecx
// 008096af  53                   push ebx
// 008096b0  55                   push ebp
// 008096b1  56                   push esi
// 008096b2  57                   push edi
// 008096b3  a1304fa200           mov eax, dword ptr [0xa24f30]
// 008096b8  33c4                 xor eax, esp
// 008096ba  50                   push eax
// 008096bb  8d442418             lea eax, [esp + 0x18]
// 008096bf  64a300000000         mov dword ptr fs:[0], eax
// 008096c5  8be9                 mov ebp, ecx
// 008096c7  837d2800             cmp dword ptr [ebp + 0x28], 0
// 008096cb  753a                 jne 0x809707
// 008096cd  6884000000           push 0x84
// 008096d2  e861f3f0ff           call 0x718a38
// 008096d7  83c404               add esp, 4
// 008096da  89442414             mov dword ptr [esp + 0x14], eax
// 008096de  c744242000000000     mov dword ptr [esp + 0x20], 0
// 008096e6  85c0                 test eax, eax
// 008096e8  7411                 je 0x8096fb
// 008096ea  8bc8                 mov ecx, eax
// 008096ec  e8efedffff           call 0x8084e0
// 008096f1  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 008096f9  eb14                 jmp 0x80970f
// 008096fb  33c0                 xor eax, eax
// 008096fd  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00809705  eb08                 jmp 0x80970f
// 00809707  8d4d1c               lea ecx, [ebp + 0x1c]
// 0080970a  e881f3ffff           call 0x808a90
// 0080970f  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 00809713  8bf0                 mov esi, eax
// 00809715  895e68               mov dword ptr [esi + 0x68], ebx
// 00809718  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0080971c  89466c               mov dword ptr [esi + 0x6c], eax
// 0080971f  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00809723  894e70               mov dword ptr [esi + 0x70], ecx
// 00809726  8b542444             mov edx, dword ptr [esp + 0x44]
// 0080972a  895674               mov dword ptr [esi + 0x74], edx
// 0080972d  8b442448             mov eax, dword ptr [esp + 0x48]
// 00809731  894678               mov dword ptr [esi + 0x78], eax
// 00809734  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00809738  8b542430             mov edx, dword ptr [esp + 0x30]
// 0080973c  83ec10               sub esp, 0x10
// 0080973f  8bc4                 mov eax, esp
// 00809741  8908                 mov dword ptr [eax], ecx
// 00809743  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00809747  895004               mov dword ptr [eax + 4], edx
// 0080974a  8b542448             mov edx, dword ptr [esp + 0x48]
// 0080974e  894808               mov dword ptr [eax + 8], ecx
// 00809751  89500c               mov dword ptr [eax + 0xc], edx
// 00809754  8b442438             mov eax, dword ptr [esp + 0x38]
// 00809758  50                   push eax
// 00809759  8bce                 mov ecx, esi
// 0080975b  e850f8ffff           call 0x808fb0
// 00809760  6a14                 push 0x14
// 00809762  e8d1f2f0ff           call 0x718a38
// 00809767  8bf8                 mov edi, eax
// 00809769  83c404               add esp, 4
// 0080976c  897c244c             mov dword ptr [esp + 0x4c], edi
// 00809770  c744242001000000     mov dword ptr [esp + 0x20], 1
// 00809778  85ff                 test edi, edi
// 0080977a  7414                 je 0x809790
// 0080977c  8bcf                 mov ecx, edi
// 0080977e  e89df40000           call 0x818c20
// 00809783  c70784bc9000         mov dword ptr [edi], 0x90bc84
// 00809789  897710               mov dword ptr [edi + 0x10], esi
// 0080978c  8bcf                 mov ecx, edi
// 0080978e  eb02                 jmp 0x809792
// 00809790  33c9                 xor ecx, ecx
// 00809792  898e80000000         mov dword ptr [esi + 0x80], ecx
// 00809798  8b11                 mov edx, dword ptr [ecx]
// 0080979a  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0080979d  53                   push ebx
// 0080979e  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 008097a6  ffd0                 call eax
// 008097a8  56                   push esi
// 008097a9  8bcd                 mov ecx, ebp
// 008097ab  e8a0f4ffff           call 0x808c50
// 008097b0  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008097b4  8b542440             mov edx, dword ptr [esp + 0x40]
// 008097b8  83ec10               sub esp, 0x10
// 008097bb  8bc4                 mov eax, esp
// 008097bd  8908                 mov dword ptr [eax], ecx
// 008097bf  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008097c3  895004               mov dword ptr [eax + 4], edx
// 008097c6  8b542458             mov edx, dword ptr [esp + 0x58]
// 008097ca  894808               mov dword ptr [eax + 8], ecx
// 008097cd  8bce                 mov ecx, esi
// 008097cf  89500c               mov dword ptr [eax + 0xc], edx
// 008097d2  e8e9f0ffff           call 0x8088c0
// 008097d7  8b4620               mov eax, dword ptr [esi + 0x20]
// 008097da  8b3d34ed8900         mov edi, dword ptr [0x89ed34]
// 008097e0  6a00                 push 0
// 008097e2  6af8                 push -8
// 008097e4  50                   push eax
// 008097e5  ffd7                 call edi
// 008097e7  837e6400             cmp dword ptr [esi + 0x64], 0
// 008097eb  745b                 je 0x809848
// 008097ed  8b0db8ff8900         mov ecx, dword ptr [0x89ffb8]
// 008097f3  6a13                 push 0x13
// 008097f5  6a00                 push 0
// 008097f7  6a00                 push 0
// 008097f9  6a00                 push 0
// 008097fb  6a00                 push 0
// 008097fd  51                   push ecx
// 008097fe  8bce                 mov ecx, esi
// 00809800  e8fff5f0ff           call 0x718e04
// 00809805  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 00809808  85c9                 test ecx, ecx
// 0080980a  7410                 je 0x80981c
// 0080980c  8b11                 mov edx, dword ptr [ecx]
// 0080980e  8b4204               mov eax, dword ptr [edx + 4]
// 00809811  6a01                 push 1
// 00809813  ffd0                 call eax
// 00809815  c7467c00000000       mov dword ptr [esi + 0x7c], 0
// 0080981c  ff15e8ec8900         call dword ptr [0x89ece8]
// 00809822  50                   push eax
// 00809823  e8daf4f0ff           call 0x718d02
// 00809828  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0080982b  6a00                 push 0
// 0080982d  6a00                 push 0
// 0080982f  51                   push ecx
// 00809830  ff157cee8900         call dword ptr [0x89ee7c]
// 00809836  8b5620               mov edx, dword ptr [esi + 0x20]
// 00809839  6a00                 push 0
// 0080983b  6a01                 push 1
// 0080983d  6a01                 push 1
// 0080983f  52                   push edx
// 00809840  ff150cee8900         call dword ptr [0x89ee0c]
// 00809846  eb17                 jmp 0x80985f
// 00809848  a1b8ff8900           mov eax, dword ptr [0x89ffb8]
// 0080984d  6a53                 push 0x53
// 0080984f  6a00                 push 0
// 00809851  6a00                 push 0
// 00809853  6a00                 push 0
// 00809855  6a00                 push 0
// 00809857  50                   push eax
// 00809858  8bce                 mov ecx, esi
// 0080985a  e8a5f5f0ff           call 0x718e04
// 0080985f  e88af9f0ff           call 0x7191ee
// 00809864  85c0                 test eax, eax
// 00809866  740b                 je 0x809873
// 00809868  8b10                 mov edx, dword ptr [eax]
// 0080986a  8bc8                 mov ecx, eax
// 0080986c  8b427c               mov eax, dword ptr [edx + 0x7c]
// 0080986f  ffd0                 call eax
// 00809871  eb02                 jmp 0x809875
// 00809873  33c0                 xor eax, eax
// 00809875  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00809878  8b5620               mov edx, dword ptr [esi + 0x20]
// 0080987b  51                   push ecx
// 0080987c  6af8                 push -8
// 0080987e  52                   push edx
// 0080987f  ffd7                 call edi
// 00809881  8bc6                 mov eax, esi
// 00809883  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00809887  64890d00000000       mov dword ptr fs:[0], ecx
// 0080988e  59                   pop ecx
// 0080988f  5f                   pop edi
// 00809890  5e                   pop esi
// 00809891  5d                   pop ebp
// 00809892  5b                   pop ebx
// 00809893  83c410               add esp, 0x10
// 00809896  c22800               ret 0x28
// copied from an identical function in another client (function ?CreateShadow@CXTShadowsManager@@AAEPAVCXTShadowWnd@@HVCRect@@0PAUHWND__@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp