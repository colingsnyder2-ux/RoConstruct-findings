// roc 2009-12 008ac2a0  unit: CXTPDockingPaneAutoHidePanel  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ac2a0
//
// 008ac2a0  53                   push ebx
// 008ac2a1  56                   push esi
// 008ac2a2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008ac2a6  8bd9                 mov ebx, ecx
// 008ac2a8  56                   push esi
// 008ac2a9  8d8b8c000000         lea ecx, [ebx + 0x8c]
// 008ac2af  e8cc780100           call 0x8c3b80
// 008ac2b4  85db                 test ebx, ebx
// 008ac2b6  7405                 je 0x8ac2bd
// 008ac2b8  8d4354               lea eax, [ebx + 0x54]
// 008ac2bb  eb02                 jmp 0x8ac2bf
// 008ac2bd  33c0                 xor eax, eax
// 008ac2bf  8b16                 mov edx, dword ptr [esi]
// 008ac2c1  57                   push edi
// 008ac2c2  50                   push eax
// 008ac2c3  8b4230               mov eax, dword ptr [edx + 0x30]
// 008ac2c6  8bce                 mov ecx, esi
// 008ac2c8  ffd0                 call eax
// 008ac2ca  8b16                 mov edx, dword ptr [esi]
// 008ac2cc  8b4368               mov eax, dword ptr [ebx + 0x68]
// 008ac2cf  8b522c               mov edx, dword ptr [edx + 0x2c]
// 008ac2d2  50                   push eax
// 008ac2d3  8bce                 mov ecx, esi
// 008ac2d5  ffd2                 call edx
// 008ac2d7  8d7b54               lea edi, [ebx + 0x54]
// 008ac2da  6a01                 push 1
// 008ac2dc  57                   push edi
// 008ac2dd  8bcf                 mov ecx, edi
// 008ac2df  e85c450000           call 0x8b0840
// 008ac2e4  8bc8                 mov ecx, eax
// 008ac2e6  e8e5cff8ff           call 0x8392d0
// 008ac2eb  8b06                 mov eax, dword ptr [esi]
// 008ac2ed  8b503c               mov edx, dword ptr [eax + 0x3c]
// 008ac2f0  57                   push edi
// 008ac2f1  8bce                 mov ecx, esi
// 008ac2f3  ffd2                 call edx
// 008ac2f5  837e1801             cmp dword ptr [esi + 0x18], 1
// 008ac2f9  7543                 jne 0x8ac33e
// 008ac2fb  ff15eccb9800         call dword ptr [0x98cbec]
// 008ac301  50                   push eax
// 008ac302  e82378f4ff           call 0x7f3b2a
// 008ac307  8d4eac               lea ecx, [esi - 0x54]
// 008ac30a  85c9                 test ecx, ecx
// 008ac30c  7430                 je 0x8ac33e
// 008ac30e  83792000             cmp dword ptr [ecx + 0x20], 0
// 008ac312  742a                 je 0x8ac33e
// 008ac314  85c0                 test eax, eax
// 008ac316  7426                 je 0x8ac33e
// 008ac318  83782000             cmp dword ptr [eax + 0x20], 0
// 008ac31c  7420                 je 0x8ac33e
// 008ac31e  3bc1                 cmp eax, ecx
// 008ac320  740a                 je 0x8ac32c
// 008ac322  50                   push eax
// 008ac323  e87894faff           call 0x8557a0
// 008ac328  85c0                 test eax, eax
// 008ac32a  7412                 je 0x8ac33e
// 008ac32c  8bcf                 mov ecx, edi
// 008ac32e  e80d450000           call 0x8b0840
// 008ac333  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 008ac339  e8c478f4ff           call 0x7f3c02
// 008ac33e  8b5b20               mov ebx, dword ptr [ebx + 0x20]
// 008ac341  5f                   pop edi
// 008ac342  85db                 test ebx, ebx
// 008ac344  740b                 je 0x8ac351
// 008ac346  6a00                 push 0
// 008ac348  6a00                 push 0
// 008ac34a  53                   push ebx
// 008ac34b  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008ac351  5e                   pop esi
// 008ac352  5b                   pop ebx
// 008ac353  c20400               ret 4
// copied from an identical function in another client (function ?_InsertPane@CXTPDockingPaneAutoHidePanel@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp