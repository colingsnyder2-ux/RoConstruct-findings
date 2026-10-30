// roc 2009-12 0083a600  unit: CXTPDockingPaneManager  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083a600
//
// 0083a600  6aff                 push -1
// 0083a602  68e82f9600           push 0x962fe8
// 0083a607  64a100000000         mov eax, dword ptr fs:[0]
// 0083a60d  50                   push eax
// 0083a60e  83ec1c               sub esp, 0x1c
// 0083a611  56                   push esi
// 0083a612  57                   push edi
// 0083a613  a10052b600           mov eax, dword ptr [0xb65200]
// 0083a618  33c4                 xor eax, esp
// 0083a61a  50                   push eax
// 0083a61b  8d442428             lea eax, [esp + 0x28]
// 0083a61f  64a300000000         mov dword ptr fs:[0], eax
// 0083a625  8bf9                 mov edi, ecx
// 0083a627  8b742438             mov esi, dword ptr [esp + 0x38]
// 0083a62b  8b4618               mov eax, dword ptr [esi + 0x18]
// 0083a62e  83f802               cmp eax, 2
// 0083a631  7552                 jne 0x83a685
// 0083a633  6a0a                 push 0xa
// 0083a635  8d4c2410             lea ecx, [esp + 0x10]
// 0083a639  e882f0ffff           call 0x8396c0
// 0083a63e  8b06                 mov eax, dword ptr [esi]
// 0083a640  8b500c               mov edx, dword ptr [eax + 0xc]
// 0083a643  8d4c240c             lea ecx, [esp + 0xc]
// 0083a647  51                   push ecx
// 0083a648  6a01                 push 1
// 0083a64a  8bce                 mov ecx, esi
// 0083a64c  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0083a654  ffd2                 call edx
// 0083a656  837c241801           cmp dword ptr [esp + 0x18], 1
// 0083a65b  7517                 jne 0x83a674
// 0083a65d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0083a661  33c0                 xor eax, eax
// 0083a663  85c9                 test ecx, ecx
// 0083a665  0f95c0               setne al
// 0083a668  85c0                 test eax, eax
// 0083a66a  7505                 jne 0x83a671
// 0083a66c  e89b94fbff           call 0x7f3b0c
// 0083a671  8b7108               mov esi, dword ptr [ecx + 8]
// 0083a674  8d4c240c             lea ecx, [esp + 0xc]
// 0083a678  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0083a680  e86bf0ffff           call 0x8396f0
// 0083a685  837e1800             cmp dword ptr [esi + 0x18], 0
// 0083a689  56                   push esi
// 0083a68a  8bcf                 mov ecx, edi
// 0083a68c  7507                 jne 0x83a695
// 0083a68e  e8eddeffff           call 0x838580
// 0083a693  eb07                 jmp 0x83a69c
// 0083a695  e866deffff           call 0x838500
// 0083a69a  8bf0                 mov esi, eax
// 0083a69c  8b442440             mov eax, dword ptr [esp + 0x40]
// 0083a6a0  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0083a6a4  50                   push eax
// 0083a6a5  51                   push ecx
// 0083a6a6  56                   push esi
// 0083a6a7  8bcf                 mov ecx, edi
// 0083a6a9  e8c2f2ffff           call 0x839970
// 0083a6ae  8b8fd0000000         mov ecx, dword ptr [edi + 0xd0]
// 0083a6b4  e887e20600           call 0x8a8940
// 0083a6b9  c7873801000000000000 mov dword ptr [edi + 0x138], 0
// 0083a6c3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0083a6c7  64890d00000000       mov dword ptr fs:[0], ecx
// 0083a6ce  59                   pop ecx
// 0083a6cf  5f                   pop edi
// 0083a6d0  5e                   pop esi
// 0083a6d1  83c428               add esp, 0x28
// 0083a6d4  c20c00               ret 0xc
// copied from an identical function in another client (function ?DockPane@CXTPDockingPaneManager@@QAEXPAVCXTPDockingPaneBase@@W4XTPDockingPaneDirection@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneManager.cpp