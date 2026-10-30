// roc 2009-12 00812320  unit: CXTPToolBar  size: 313 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00812320
//
// 00812320  83ec18               sub esp, 0x18
// 00812323  56                   push esi
// 00812324  8bf1                 mov esi, ecx
// 00812326  8b4620               mov eax, dword ptr [esi + 0x20]
// 00812329  57                   push edi
// 0081232a  50                   push eax
// 0081232b  ff1584cc9800         call dword ptr [0x98cc84]
// 00812331  85c0                 test eax, eax
// 00812333  0f85bb000000         jne 0x8123f4
// 00812339  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0081233d  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 00812343  f7df                 neg edi
// 00812345  1bff                 sbb edi, edi
// 00812347  81e700000040         and edi, 0x40000000
// 0081234d  81c700000040         add edi, 0x40000000
// 00812353  81cf00010006         or edi, 0x6000100
// 00812359  85c0                 test eax, eax
// 0081235b  7405                 je 0x812362
// 0081235d  83c028               add eax, 0x28
// 00812360  eb11                 jmp 0x812373
// 00812362  b864000000           mov eax, 0x64
// 00812367  89442408             mov dword ptr [esp + 8], eax
// 0081236b  8944240c             mov dword ptr [esp + 0xc], eax
// 0081236f  8d442408             lea eax, [esp + 8]
// 00812373  53                   push ebx
// 00812374  8b18                 mov ebx, dword ptr [eax]
// 00812376  55                   push ebp
// 00812377  8b6804               mov ebp, dword ptr [eax + 4]
// 0081237a  8bce                 mov ecx, esi
// 0081237c  e84f21ffff           call 0x8044d0
// 00812381  85c0                 test eax, eax
// 00812383  7413                 je 0x812398
// 00812385  8bc8                 mov ecx, eax
// 00812387  e814200000           call 0x8143a0
// 0081238c  c744241000004000     mov dword ptr [esp + 0x10], 0x400000
// 00812394  85c0                 test eax, eax
// 00812396  7508                 jne 0x8123a0
// 00812398  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008123a0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008123a4  6a00                 push 0
// 008123a6  6a00                 push 0
// 008123a8  51                   push ecx
// 008123a9  8d542424             lea edx, [esp + 0x24]
// 008123ad  52                   push edx
// 008123ae  57                   push edi
// 008123af  8d8ef4000000         lea ecx, [esi + 0xf4]
// 008123b5  895c242c             mov dword ptr [esp + 0x2c], ebx
// 008123b9  895c2434             mov dword ptr [esp + 0x34], ebx
// 008123bd  896c2430             mov dword ptr [esp + 0x30], ebp
// 008123c1  896c2438             mov dword ptr [esp + 0x38], ebp
// 008123c5  ff1580de9800         call dword ptr [0x98de80]
// 008123cb  50                   push eax
// 008123cc  8b442428             mov eax, dword ptr [esp + 0x28]
// 008123d0  68fc379f00           push 0x9f37fc
// 008123d5  50                   push eax
// 008123d6  8bce                 mov ecx, esi
// 008123d8  e8f514feff           call 0x7f38d2
// 008123dd  5d                   pop ebp
// 008123de  5b                   pop ebx
// 008123df  85c0                 test eax, eax
// 008123e1  7508                 jne 0x8123eb
// 008123e3  5f                   pop edi
// 008123e4  5e                   pop esi
// 008123e5  83c418               add esp, 0x18
// 008123e8  c20800               ret 8
// 008123eb  6a08                 push 8
// 008123ed  8bce                 mov ecx, esi
// 008123ef  e85417feff           call 0x7f3b48
// 008123f4  837c242800           cmp dword ptr [esp + 0x28], 0
// 008123f9  6a00                 push 0
// 008123fb  751e                 jne 0x81241b
// 008123fd  6800000040           push 0x40000000
// 00812402  6800000080           push 0x80000000
// 00812407  8bce                 mov ecx, esi
// 00812409  e8cc1bfeff           call 0x7f3fda
// 0081240e  5f                   pop edi
// 0081240f  b801000000           mov eax, 1
// 00812414  5e                   pop esi
// 00812415  83c418               add esp, 0x18
// 00812418  c20800               ret 8
// 0081241b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0081241e  8b3dc0c99800         mov edi, dword ptr [0x98c9c0]
// 00812424  6af8                 push -8
// 00812426  51                   push ecx
// 00812427  ffd7                 call edi
// 00812429  6a00                 push 0
// 0081242b  6800010080           push 0x80000100
// 00812430  6800000040           push 0x40000000
// 00812435  8bce                 mov ecx, esi
// 00812437  e89e1bfeff           call 0x7f3fda
// 0081243c  8b542424             mov edx, dword ptr [esp + 0x24]
// 00812440  8b4220               mov eax, dword ptr [edx + 0x20]
// 00812443  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00812446  50                   push eax
// 00812447  6af8                 push -8
// 00812449  51                   push ecx
// 0081244a  ffd7                 call edi
// 0081244c  5f                   pop edi
// 0081244d  b801000000           mov eax, 1
// 00812452  5e                   pop esi
// 00812453  83c418               add esp, 0x18
// 00812456  c20800               ret 8
// copied from an identical function in another client (function ?Create@CXTPToolBar@@MAEHPAVCWnd@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPToolBar.cpp