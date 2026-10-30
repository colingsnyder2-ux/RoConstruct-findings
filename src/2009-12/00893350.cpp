// roc 2009-12 00893350  unit: CXTPMenuBar::CControlMDIButton  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00893350
//
// 00893350  8b442404             mov eax, dword ptr [esp + 4]
// 00893354  56                   push esi
// 00893355  57                   push edi
// 00893356  50                   push eax
// 00893357  e8ce07f6ff           call 0x7f3b2a
// 0089335c  50                   push eax
// 0089335d  e866320900           call 0x9265c8
// 00893362  50                   push eax
// 00893363  e8d608f6ff           call 0x7f3c3e
// 00893368  8bf0                 mov esi, eax
// 0089336a  83c408               add esp, 8
// 0089336d  85f6                 test esi, esi
// 0089336f  7417                 je 0x893388
// 00893371  8bce                 mov ecx, esi
// 00893373  e89008f6ff           call 0x7f3c08
// 00893378  85c0                 test eax, eax
// 0089337a  740c                 je 0x893388
// 0089337c  8bce                 mov ecx, esi
// 0089337e  e88508f6ff           call 0x7f3c08
// 00893383  8b4054               mov eax, dword ptr [eax + 0x54]
// 00893386  eb02                 jmp 0x89338a
// 00893388  33c0                 xor eax, eax
// 0089338a  50                   push eax
// 0089338b  e8bc350900           call 0x92694c
// 00893390  50                   push eax
// 00893391  e8a808f6ff           call 0x7f3c3e
// 00893396  8bf8                 mov edi, eax
// 00893398  83c408               add esp, 8
// 0089339b  85ff                 test edi, edi
// 0089339d  7434                 je 0x8933d3
// 0089339f  85f6                 test esi, esi
// 008933a1  7430                 je 0x8933d3
// 008933a3  53                   push ebx
// 008933a4  8b1f                 mov ebx, dword ptr [edi]
// 008933a6  8bce                 mov ecx, esi
// 008933a8  e85b08f6ff           call 0x7f3c08
// 008933ad  8b93b8000000         mov edx, dword ptr [ebx + 0xb8]
// 008933b3  50                   push eax
// 008933b4  8bcf                 mov ecx, edi
// 008933b6  ffd2                 call edx
// 008933b8  50                   push eax
// 008933b9  e8f4380900           call 0x926cb2
// 008933be  50                   push eax
// 008933bf  e87a08f6ff           call 0x7f3c3e
// 008933c4  83c408               add esp, 8
// 008933c7  f7d8                 neg eax
// 008933c9  5b                   pop ebx
// 008933ca  1bc0                 sbb eax, eax
// 008933cc  5f                   pop edi
// 008933cd  f7d8                 neg eax
// 008933cf  5e                   pop esi
// 008933d0  c20400               ret 4
// 008933d3  5f                   pop edi
// 008933d4  33c0                 xor eax, eax
// 008933d6  5e                   pop esi
// 008933d7  c20400               ret 4
// copied from an identical function in another client (function ?IsOleDocumentActive@CXTPMenuBar@@ABEHPAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPMenuBar.cpp