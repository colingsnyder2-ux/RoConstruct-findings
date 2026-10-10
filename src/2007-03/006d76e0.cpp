// from server: 100% by tester
// roc 2008-06 0076bb30  unit: CXTPDockingPaneContext  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076bb30
//
// 0076bb30  83ec0c               sub esp, 0xc
// 0076bb33  56                   push esi
// 0076bb34  57                   push edi
// 0076bb35  8bf1                 mov esi, ecx
// 0076bb37  ff15b42d8000         call dword ptr [0x802db4]
// 0076bb3d  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0076bb44  7478                 je 0x76bbbe
// 0076bb46  8b4604               mov eax, dword ptr [esi + 4]
// 0076bb49  8b5068               mov edx, dword ptr [eax + 0x68]
// 0076bb4c  8d4e04               lea ecx, [esi + 4]
// 0076bb4f  ffd2                 call edx
// 0076bb51  8b4658               mov eax, dword ptr [esi + 0x58]
// 0076bb54  8b5068               mov edx, dword ptr [eax + 0x68]
// 0076bb57  8d4e58               lea ecx, [esi + 0x58]
// 0076bb5a  ffd2                 call edx
// 0076bb5c  8bce                 mov ecx, esi
// 0076bb5e  e81dffffff           call 0x76ba80
// 0076bb63  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 0076bb69  f7d8                 neg eax
// 0076bb6b  1bc0                 sbb eax, eax
// 0076bb6d  89442408             mov dword ptr [esp + 8], eax
// 0076bb71  743b                 je 0x76bbae
// 0076bb73  8dbe6c010000         lea edi, [esi + 0x16c]
// 0076bb79  8da42400000000       lea esp, [esp]
// 0076bb80  8d44240c             lea eax, [esp + 0xc]
// 0076bb84  50                   push eax
// 0076bb85  8d4c2414             lea ecx, [esp + 0x14]
// 0076bb89  51                   push ecx
// 0076bb8a  8d542410             lea edx, [esp + 0x10]
// 0076bb8e  52                   push edx
// 0076bb8f  8bcf                 mov ecx, edi
// 0076bb91  e8bad2ffff           call 0x768e50
// 0076bb96  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0076bb9a  85c9                 test ecx, ecx
// 0076bb9c  7409                 je 0x76bba7
// 0076bb9e  8b01                 mov eax, dword ptr [ecx]
// 0076bba0  8b5004               mov edx, dword ptr [eax + 4]
// 0076bba3  6a01                 push 1
// 0076bba5  ffd2                 call edx
// 0076bba7  837c240800           cmp dword ptr [esp + 8], 0
// 0076bbac  75d2                 jne 0x76bb80
// 0076bbae  5f                   pop edi
// 0076bbaf  8d8e6c010000         lea ecx, [esi + 0x16c]
// 0076bbb5  5e                   pop esi
// 0076bbb6  83c40c               add esp, 0xc
// 0076bbb9  e97275f3ff           jmp 0x6a3130
// 0076bbbe  8b06                 mov eax, dword ptr [esi]
// 0076bbc0  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0076bbc3  6a01                 push 1
// 0076bbc5  8bce                 mov ecx, esi
// 0076bbc7  ffd2                 call edx
// 0076bbc9  ff154c2b8000         call dword ptr [0x802b4c]
// 0076bbcf  50                   push eax
// 0076bbd0  e80950f3ff           call 0x6a0bde
// 0076bbd5  6a00                 push 0
// 0076bbd7  8bf8                 mov edi, eax
// 0076bbd9  ff15482b8000         call dword ptr [0x802b48]
// 0076bbdf  8b868c010000         mov eax, dword ptr [esi + 0x18c]
// 0076bbe5  85c0                 test eax, eax
// 0076bbe7  7418                 je 0x76bc01
// 0076bbe9  8b4004               mov eax, dword ptr [eax + 4]
// 0076bbec  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0076bbef  50                   push eax
// 0076bbf0  51                   push ecx
// 0076bbf1  ff15c02c8000         call dword ptr [0x802cc0]
// 0076bbf7  c7868c01000000000000 mov dword ptr [esi + 0x18c], 0
// 0076bc01  5f                   pop edi
// 0076bc02  5e                   pop esi
// 0076bc03  83c40c               add esp, 0xc
// 0076bc06  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneContext.cpp (function ?CancelLoop@CXTPDockingPaneContext@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneContext.cpp
