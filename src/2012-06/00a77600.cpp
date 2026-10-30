// roc 2012-06 00a77600  unit: CXTPRibbonControlSystemPopupBarListCaption  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a77600
//
// 00a77600  6aff                 push -1
// 00a77602  684591ae00           push 0xae9145
// 00a77607  64a100000000         mov eax, dword ptr fs:[0]
// 00a7760d  50                   push eax
// 00a7760e  83ec3c               sub esp, 0x3c
// 00a77611  53                   push ebx
// 00a77612  55                   push ebp
// 00a77613  56                   push esi
// 00a77614  57                   push edi
// 00a77615  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a7761a  33c4                 xor eax, esp
// 00a7761c  50                   push eax
// 00a7761d  8d442450             lea eax, [esp + 0x50]
// 00a77621  64a300000000         mov dword ptr fs:[0], eax
// 00a77627  8bf1                 mov esi, ecx
// 00a77629  e8c2d3f0ff           call 0x9849f0
// 00a7762e  8b6c2460             mov ebp, dword ptr [esp + 0x60]
// 00a77632  8bf8                 mov edi, eax
// 00a77634  8d87f8000000         lea eax, [edi + 0xf8]
// 00a7763a  50                   push eax
// 00a7763b  55                   push ebp
// 00a7763c  8d4c2448             lea ecx, [esp + 0x48]
// 00a77640  e8ebdef5ff           call 0x9d5530
// 00a77645  8b17                 mov edx, dword ptr [edi]
// 00a77647  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00a7764a  56                   push esi
// 00a7764b  8bcf                 mov ecx, edi
// 00a7764d  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 00a77655  ffd0                 call eax
// 00a77657  8b5500               mov edx, dword ptr [ebp]
// 00a7765a  50                   push eax
// 00a7765b  8b4238               mov eax, dword ptr [edx + 0x38]
// 00a7765e  8bcd                 mov ecx, ebp
// 00a77660  ffd0                 call eax
// 00a77662  6a01                 push 1
// 00a77664  8bcd                 mov ecx, ebp
// 00a77666  e83d1f0200           call 0xa995a8
// 00a7766b  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 00a77671  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 00a77677  8b9ec0000000         mov ebx, dword ptr [esi + 0xc0]
// 00a7767d  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 00a77683  8954243c             mov dword ptr [esp + 0x3c], edx
// 00a77687  83c2fb               add edx, -5
// 00a7768a  89542460             mov dword ptr [esp + 0x60], edx
// 00a7768e  83c004               add eax, 4
// 00a77691  89442424             mov dword ptr [esp + 0x24], eax
// 00a77695  8b442460             mov eax, dword ptr [esp + 0x60]
// 00a77699  8d5307               lea edx, [ebx + 7]
// 00a7769c  89542420             mov dword ptr [esp + 0x20], edx
// 00a776a0  8b16                 mov edx, dword ptr [esi]
// 00a776a2  8b5258               mov edx, dword ptr [edx + 0x58]
// 00a776a5  8944242c             mov dword ptr [esp + 0x2c], eax
// 00a776a9  8d442418             lea eax, [esp + 0x18]
// 00a776ad  894c2438             mov dword ptr [esp + 0x38], ecx
// 00a776b1  894c2428             mov dword ptr [esp + 0x28], ecx
// 00a776b5  50                   push eax
// 00a776b6  8bce                 mov ecx, esi
// 00a776b8  ffd2                 call edx
// 00a776ba  8bf0                 mov esi, eax
// 00a776bc  8b4500               mov eax, dword ptr [ebp]
// 00a776bf  6a20                 push 0x20
// 00a776c1  8d4c2424             lea ecx, [esp + 0x24]
// 00a776c5  51                   push ecx
// 00a776c6  8bce                 mov ecx, esi
// 00a776c8  c644246001           mov byte ptr [esp + 0x60], 1
// 00a776cd  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a776d1  ff155846b200         call dword ptr [0xb24658]
// 00a776d7  50                   push eax
// 00a776d8  8bce                 mov ecx, esi
// 00a776da  ff159847b200         call dword ptr [0xb24798]
// 00a776e0  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a776e4  50                   push eax
// 00a776e5  8b4270               mov eax, dword ptr [edx + 0x70]
// 00a776e8  8bcd                 mov ecx, ebp
// 00a776ea  ffd0                 call eax
// 00a776ec  8d4c2418             lea ecx, [esp + 0x18]
// 00a776f0  c644245800           mov byte ptr [esp + 0x58], 0
// 00a776f5  ff15d047b200         call dword ptr [0xb247d0]
// 00a776fb  51                   push ecx
// 00a776fc  8bcc                 mov ecx, esp
// 00a776fe  89642418             mov dword ptr [esp + 0x18], esp
// 00a77702  68008dc200           push 0xc28d00
// 00a77707  ff15c847b200         call dword ptr [0xb247c8]
// 00a7770d  51                   push ecx
// 00a7770e  8bcc                 mov ecx, esp
// 00a77710  89642424             mov dword ptr [esp + 0x24], esp
// 00a77714  681cb9c100           push 0xc1b91c
// 00a77719  c644246402           mov byte ptr [esp + 0x64], 2
// 00a7771e  ff15c847b200         call dword ptr [0xb247c8]
// 00a77724  8bcf                 mov ecx, edi
// 00a77726  c644246003           mov byte ptr [esp + 0x60], 3
// 00a7772b  e83001f9ff           call 0xa07860
// 00a77730  8bc8                 mov ecx, eax
// 00a77732  c644246000           mov byte ptr [esp + 0x60], 0
// 00a77737  e8f4ebfeff           call 0xa66330
// 00a7773c  8b742438             mov esi, dword ptr [esp + 0x38]
// 00a77740  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a77744  50                   push eax
// 00a77745  56                   push esi
// 00a77746  83c1fa               add ecx, -6
// 00a77749  51                   push ecx
// 00a7774a  53                   push ebx
// 00a7774b  55                   push ebp
// 00a7774c  8bcf                 mov ecx, edi
// 00a7774e  e86d03f1ff           call 0x987ac0
// 00a77753  51                   push ecx
// 00a77754  8bcc                 mov ecx, esp
// 00a77756  89642420             mov dword ptr [esp + 0x20], esp
// 00a7775a  68e48cc200           push 0xc28ce4
// 00a7775f  ff15c847b200         call dword ptr [0xb247c8]
// 00a77765  51                   push ecx
// 00a77766  8bcc                 mov ecx, esp
// 00a77768  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a7776c  681cb9c100           push 0xc1b91c
// 00a77771  c644246404           mov byte ptr [esp + 0x64], 4
// 00a77776  ff15c847b200         call dword ptr [0xb247c8]
// 00a7777c  8bcf                 mov ecx, edi
// 00a7777e  c644246005           mov byte ptr [esp + 0x60], 5
// 00a77783  e8d800f9ff           call 0xa07860
// 00a77788  8bc8                 mov ecx, eax
// 00a7778a  c644246000           mov byte ptr [esp + 0x60], 0
// 00a7778f  e89cebfeff           call 0xa66330
// 00a77794  8b542460             mov edx, dword ptr [esp + 0x60]
// 00a77798  50                   push eax
// 00a77799  56                   push esi
// 00a7779a  52                   push edx
// 00a7779b  53                   push ebx
// 00a7779c  55                   push ebp
// 00a7779d  8bcf                 mov ecx, edi
// 00a7779f  e81c03f1ff           call 0x987ac0
// 00a777a4  8d4c2440             lea ecx, [esp + 0x40]
// 00a777a8  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 00a777b0  e8fbddf5ff           call 0x9d55b0
// 00a777b5  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00a777b9  64890d00000000       mov dword ptr fs:[0], ecx
// 00a777c0  59                   pop ecx
// 00a777c1  5f                   pop edi
// 00a777c2  5e                   pop esi
// 00a777c3  5d                   pop ebp
// 00a777c4  5b                   pop ebx
// 00a777c5  83c448               add esp, 0x48
// 00a777c8  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CXTPRibbonControlSystemPopupBarListCaption@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Ribbon\XTPRibbonSystemButton.cpp