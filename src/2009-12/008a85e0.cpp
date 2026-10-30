// roc 2009-12 008a85e0  unit: PAVCXTPDockingPaneBase::?$CMap  size: 292 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a85e0
//
// 008a85e0  6aff                 push -1
// 008a85e2  6898c59500           push 0x95c598
// 008a85e7  64a100000000         mov eax, dword ptr fs:[0]
// 008a85ed  50                   push eax
// 008a85ee  83ec1c               sub esp, 0x1c
// 008a85f1  53                   push ebx
// 008a85f2  55                   push ebp
// 008a85f3  56                   push esi
// 008a85f4  57                   push edi
// 008a85f5  a10052b600           mov eax, dword ptr [0xb65200]
// 008a85fa  33c4                 xor eax, esp
// 008a85fc  50                   push eax
// 008a85fd  8d442430             lea eax, [esp + 0x30]
// 008a8601  64a300000000         mov dword ptr fs:[0], eax
// 008a8607  8be9                 mov ebp, ecx
// 008a8609  6a0a                 push 0xa
// 008a860b  8d4c2418             lea ecx, [esp + 0x18]
// 008a860f  e8ac10f9ff           call 0x8396c0
// 008a8614  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008a8618  8b01                 mov eax, dword ptr [ecx]
// 008a861a  8b400c               mov eax, dword ptr [eax + 0xc]
// 008a861d  8d542414             lea edx, [esp + 0x14]
// 008a8621  52                   push edx
// 008a8622  6a00                 push 0
// 008a8624  c744244000000000     mov dword ptr [esp + 0x40], 0
// 008a862c  ffd0                 call eax
// 008a862e  837c242000           cmp dword ptr [esp + 0x20], 0
// 008a8633  747f                 je 0x8a86b4
// 008a8635  8b442418             mov eax, dword ptr [esp + 0x18]
// 008a8639  33c9                 xor ecx, ecx
// 008a863b  85c0                 test eax, eax
// 008a863d  0f95c1               setne cl
// 008a8640  85c9                 test ecx, ecx
// 008a8642  7505                 jne 0x8a8649
// 008a8644  e8c3b4f4ff           call 0x7f3b0c
// 008a8649  8b4008               mov eax, dword ptr [eax + 8]
// 008a864c  85c0                 test eax, eax
// 008a864e  7405                 je 0x8a8655
// 008a8650  83c0e0               add eax, -0x20
// 008a8653  eb02                 jmp 0x8a8657
// 008a8655  33c0                 xor eax, eax
// 008a8657  50                   push eax
// 008a8658  8bcd                 mov ecx, ebp
// 008a865a  e861f9ffff           call 0x8a7fc0
// 008a865f  8bd8                 mov ebx, eax
// 008a8661  85db                 test ebx, ebx
// 008a8663  744f                 je 0x8a86b4
// 008a8665  837b0800             cmp dword ptr [ebx + 8], 0
// 008a8669  7449                 je 0x8a86b4
// 008a866b  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008a866f  8bb190000000         mov esi, dword ptr [ecx + 0x90]
// 008a8675  85f6                 test esi, esi
// 008a8677  743b                 je 0x8a86b4
// 008a8679  8bc6                 mov eax, esi
// 008a867b  8b4008               mov eax, dword ptr [eax + 8]
// 008a867e  8b36                 mov esi, dword ptr [esi]
// 008a8680  85c0                 test eax, eax
// 008a8682  7405                 je 0x8a8689
// 008a8684  8d78ac               lea edi, [eax - 0x54]
// 008a8687  eb02                 jmp 0x8a868b
// 008a8689  33ff                 xor edi, edi
// 008a868b  8d4f54               lea ecx, [edi + 0x54]
// 008a868e  e88da80400           call 0x8f2f20
// 008a8693  85c0                 test eax, eax
// 008a8695  7419                 je 0x8a86b0
// 008a8697  83c0e0               add eax, -0x20
// 008a869a  7414                 je 0x8a86b0
// 008a869c  50                   push eax
// 008a869d  8bcd                 mov ecx, ebp
// 008a869f  e81cf9ffff           call 0x8a7fc0
// 008a86a4  85c0                 test eax, eax
// 008a86a6  7408                 je 0x8a86b0
// 008a86a8  8b5008               mov edx, dword ptr [eax + 8]
// 008a86ab  3b5308               cmp edx, dword ptr [ebx + 8]
// 008a86ae  742d                 je 0x8a86dd
// 008a86b0  85f6                 test esi, esi
// 008a86b2  75c5                 jne 0x8a8679
// 008a86b4  8d4c2414             lea ecx, [esp + 0x14]
// 008a86b8  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 008a86c0  e82b10f9ff           call 0x8396f0
// 008a86c5  33c0                 xor eax, eax
// 008a86c7  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008a86cb  64890d00000000       mov dword ptr fs:[0], ecx
// 008a86d2  59                   pop ecx
// 008a86d3  5f                   pop edi
// 008a86d4  5e                   pop esi
// 008a86d5  5d                   pop ebp
// 008a86d6  5b                   pop ebx
// 008a86d7  83c428               add esp, 0x28
// 008a86da  c20800               ret 8
// 008a86dd  6a02                 push 2
// 008a86df  8d442418             lea eax, [esp + 0x18]
// 008a86e3  50                   push eax
// 008a86e4  57                   push edi
// 008a86e5  8bcd                 mov ecx, ebp
// 008a86e7  e804f9ffff           call 0x8a7ff0
// 008a86ec  8d4c2414             lea ecx, [esp + 0x14]
// 008a86f0  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 008a86f8  e8f30ff9ff           call 0x8396f0
// 008a86fd  b801000000           mov eax, 1
// 008a8702  ebc3                 jmp 0x8a86c7
// copied from an identical function in another client (function ?_FindTabbedPaneToHide@CXTPDockingPaneLayout@@AAEHPAVCXTPDockingPaneAutoHidePanel@@PAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneLayout.cpp