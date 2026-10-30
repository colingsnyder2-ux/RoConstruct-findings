// roc 2012-06 00a3a630  unit: CXTPDockingPaneAutoHidePanel  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3a630
//
// 00a3a630  6aff                 push -1
// 00a3a632  68735cae00           push 0xae5c73
// 00a3a637  64a100000000         mov eax, dword ptr fs:[0]
// 00a3a63d  50                   push eax
// 00a3a63e  81ecac000000         sub esp, 0xac
// 00a3a644  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a3a649  33c4                 xor eax, esp
// 00a3a64b  898424a8000000       mov dword ptr [esp + 0xa8], eax
// 00a3a652  53                   push ebx
// 00a3a653  55                   push ebp
// 00a3a654  56                   push esi
// 00a3a655  57                   push edi
// 00a3a656  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a3a65b  33c4                 xor eax, esp
// 00a3a65d  50                   push eax
// 00a3a65e  8d8424c0000000       lea eax, [esp + 0xc0]
// 00a3a665  64a300000000         mov dword ptr fs:[0], eax
// 00a3a66b  8bf1                 mov esi, ecx
// 00a3a66d  56                   push esi
// 00a3a66e  8d4c246c             lea ecx, [esp + 0x6c]
// 00a3a672  e8f783f4ff           call 0x982a6e
// 00a3a677  56                   push esi
// 00a3a678  8d4c241c             lea ecx, [esp + 0x1c]
// 00a3a67c  c78424cc00000000000000 mov dword ptr [esp + 0xcc], 0
// 00a3a687  e814abf9ff           call 0x9d51a0
// 00a3a68c  8d442468             lea eax, [esp + 0x68]
// 00a3a690  50                   push eax
// 00a3a691  8d4c243c             lea ecx, [esp + 0x3c]
// 00a3a695  e836acf9ff           call 0x9d52d0
// 00a3a69a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a3a69e  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00a3a6a2  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00a3a6a6  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00a3a6aa  894c2434             mov dword ptr [esp + 0x34], ecx
// 00a3a6ae  8d4e54               lea ecx, [esi + 0x54]
// 00a3a6b1  c68424c800000001     mov byte ptr [esp + 0xc8], 1
// 00a3a6b9  e8c2faffff           call 0xa3a180
// 00a3a6be  83ec10               sub esp, 0x10
// 00a3a6c1  8bd4                 mov edx, esp
// 00a3a6c3  893a                 mov dword ptr [edx], edi
// 00a3a6c5  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00a3a6c9  896a04               mov dword ptr [edx + 4], ebp
// 00a3a6cc  895a08               mov dword ptr [edx + 8], ebx
// 00a3a6cf  8bc8                 mov ecx, eax
// 00a3a6d1  8b00                 mov eax, dword ptr [eax]
// 00a3a6d3  8b4058               mov eax, dword ptr [eax + 0x58]
// 00a3a6d6  897a0c               mov dword ptr [edx + 0xc], edi
// 00a3a6d9  56                   push esi
// 00a3a6da  8d54244c             lea edx, [esp + 0x4c]
// 00a3a6de  52                   push edx
// 00a3a6df  ffd0                 call eax
// 00a3a6e1  8d4c2438             lea ecx, [esp + 0x38]
// 00a3a6e5  c68424c800000000     mov byte ptr [esp + 0xc8], 0
// 00a3a6ed  e81eadf9ff           call 0x9d5410
// 00a3a6f2  8d4c2468             lea ecx, [esp + 0x68]
// 00a3a6f6  c78424c8000000ffffffff mov dword ptr [esp + 0xc8], 0xffffffff
// 00a3a701  e86283f4ff           call 0x982a68
// 00a3a706  8b8c24c0000000       mov ecx, dword ptr [esp + 0xc0]
// 00a3a70d  64890d00000000       mov dword ptr fs:[0], ecx
// 00a3a714  59                   pop ecx
// 00a3a715  5f                   pop edi
// 00a3a716  5e                   pop esi
// 00a3a717  5d                   pop ebp
// 00a3a718  5b                   pop ebx
// 00a3a719  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 00a3a720  33cc                 xor ecx, esp
// 00a3a722  e81093f4ff           call 0x983a37
// 00a3a727  81c4b8000000         add esp, 0xb8
// 00a3a72d  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPDockingPaneTabbedContainer@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneTabbedContainer.cpp