// from server: 100% by auto
// roc 2008-06 0077c560  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 412 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077c560
//
// 0077c560  56                   push esi
// 0077c561  8bf1                 mov esi, ecx
// 0077c563  57                   push edi
// 0077c564  8b7e5c               mov edi, dword ptr [esi + 0x5c]
// 0077c567  83ff01               cmp edi, 1
// 0077c56a  7d07                 jge 0x77c573
// 0077c56c  5f                   pop edi
// 0077c56d  33c0                 xor eax, eax
// 0077c56f  5e                   pop esi
// 0077c570  c20800               ret 8
// 0077c573  53                   push ebx
// 0077c574  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0077c578  83fb25               cmp ebx, 0x25
// 0077c57b  751b                 jne 0x77c598
// 0077c57d  8b442410             mov eax, dword ptr [esp + 0x10]
// 0077c581  6aec                 push -0x14
// 0077c583  50                   push eax
// 0077c584  ff15bc2d8000         call dword ptr [0x802dbc]
// 0077c58a  a900004000           test eax, 0x400000
// 0077c58f  7425                 je 0x77c5b6
// 0077c591  bb27000000           mov ebx, 0x27
// 0077c596  eb1e                 jmp 0x77c5b6
// 0077c598  83fb27               cmp ebx, 0x27
// 0077c59b  7519                 jne 0x77c5b6
// 0077c59d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0077c5a1  6aec                 push -0x14
// 0077c5a3  51                   push ecx
// 0077c5a4  ff15bc2d8000         call dword ptr [0x802dbc]
// 0077c5aa  a900004000           test eax, 0x400000
// 0077c5af  7405                 je 0x77c5b6
// 0077c5b1  bb25000000           mov ebx, 0x25
// 0077c5b6  8d43dd               lea eax, [ebx - 0x23]
// 0077c5b9  83f805               cmp eax, 5
// 0077c5bc  0f8719010000         ja 0x77c6db
// 0077c5c2  ff2485e4c67700       jmp dword ptr [eax*4 + 0x77c6e4]
// 0077c5c9  8b3e                 mov edi, dword ptr [esi]
// 0077c5cb  6a01                 push 1
// 0077c5cd  6aff                 push -1
// 0077c5cf  8bce                 mov ecx, esi
// 0077c5d1  e83affffff           call 0x77c510
// 0077c5d6  8b5724               mov edx, dword ptr [edi + 0x24]
// 0077c5d9  50                   push eax
// 0077c5da  8bce                 mov ecx, esi
// 0077c5dc  ffd2                 call edx
// 0077c5de  5b                   pop ebx
// 0077c5df  5f                   pop edi
// 0077c5e0  b801000000           mov eax, 1
// 0077c5e5  5e                   pop esi
// 0077c5e6  c20800               ret 8
// 0077c5e9  8b1e                 mov ebx, dword ptr [esi]
// 0077c5eb  6aff                 push -1
// 0077c5ed  57                   push edi
// 0077c5ee  8bce                 mov ecx, esi
// 0077c5f0  e81bffffff           call 0x77c510
// 0077c5f5  50                   push eax
// 0077c5f6  8b4324               mov eax, dword ptr [ebx + 0x24]
// 0077c5f9  8bce                 mov ecx, esi
// 0077c5fb  ffd0                 call eax
// 0077c5fd  5b                   pop ebx
// 0077c5fe  5f                   pop edi
// 0077c5ff  b801000000           mov eax, 1
// 0077c604  5e                   pop esi
// 0077c605  c20800               ret 8
// 0077c608  8bce                 mov ecx, esi
// 0077c60a  e8b14cf8ff           call 0x7012c0
// 0077c60f  85c0                 test eax, eax
// 0077c611  0f84b9000000         je 0x77c6d0
// 0077c617  8b4604               mov eax, dword ptr [esi + 4]
// 0077c61a  85c0                 test eax, eax
// 0077c61c  0f84ae000000         je 0x77c6d0
// 0077c622  8b402c               mov eax, dword ptr [eax + 0x2c]
// 0077c625  85c0                 test eax, eax
// 0077c627  0f8ea3000000         jle 0x77c6d0
// 0077c62d  8b3e                 mov edi, dword ptr [esi]
// 0077c62f  6aff                 push -1
// 0077c631  50                   push eax
// 0077c632  8bce                 mov ecx, esi
// 0077c634  e8d7feffff           call 0x77c510
// 0077c639  8b5724               mov edx, dword ptr [edi + 0x24]
// 0077c63c  50                   push eax
// 0077c63d  8bce                 mov ecx, esi
// 0077c63f  ffd2                 call edx
// 0077c641  5b                   pop ebx
// 0077c642  5f                   pop edi
// 0077c643  b801000000           mov eax, 1
// 0077c648  5e                   pop esi
// 0077c649  c20800               ret 8
// 0077c64c  8bce                 mov ecx, esi
// 0077c64e  e86d4cf8ff           call 0x7012c0
// 0077c653  85c0                 test eax, eax
// 0077c655  7579                 jne 0x77c6d0
// 0077c657  8b4604               mov eax, dword ptr [esi + 4]
// 0077c65a  85c0                 test eax, eax
// 0077c65c  7472                 je 0x77c6d0
// 0077c65e  8b402c               mov eax, dword ptr [eax + 0x2c]
// 0077c661  85c0                 test eax, eax
// 0077c663  7e6b                 jle 0x77c6d0
// 0077c665  6aff                 push -1
// 0077c667  eb55                 jmp 0x77c6be
// 0077c669  8bce                 mov ecx, esi
// 0077c66b  e8504cf8ff           call 0x7012c0
// 0077c670  85c0                 test eax, eax
// 0077c672  7423                 je 0x77c697
// 0077c674  8b4604               mov eax, dword ptr [esi + 4]
// 0077c677  85c0                 test eax, eax
// 0077c679  741c                 je 0x77c697
// 0077c67b  8b402c               mov eax, dword ptr [eax + 0x2c]
// 0077c67e  4f                   dec edi
// 0077c67f  3bc7                 cmp eax, edi
// 0077c681  7d14                 jge 0x77c697
// 0077c683  8b3e                 mov edi, dword ptr [esi]
// 0077c685  6a01                 push 1
// 0077c687  50                   push eax
// 0077c688  8bce                 mov ecx, esi
// 0077c68a  e881feffff           call 0x77c510
// 0077c68f  8b5724               mov edx, dword ptr [edi + 0x24]
// 0077c692  50                   push eax
// 0077c693  8bce                 mov ecx, esi
// 0077c695  ffd2                 call edx
// 0077c697  5b                   pop ebx
// 0077c698  5f                   pop edi
// 0077c699  b801000000           mov eax, 1
// 0077c69e  5e                   pop esi
// 0077c69f  c20800               ret 8
// 0077c6a2  8bce                 mov ecx, esi
// 0077c6a4  e8174cf8ff           call 0x7012c0
// 0077c6a9  85c0                 test eax, eax
// 0077c6ab  7523                 jne 0x77c6d0
// 0077c6ad  8b4604               mov eax, dword ptr [esi + 4]
// 0077c6b0  85c0                 test eax, eax
// 0077c6b2  741c                 je 0x77c6d0
// 0077c6b4  8b402c               mov eax, dword ptr [eax + 0x2c]
// 0077c6b7  4f                   dec edi
// 0077c6b8  3bc7                 cmp eax, edi
// 0077c6ba  7d14                 jge 0x77c6d0
// 0077c6bc  6a01                 push 1
// 0077c6be  8b3e                 mov edi, dword ptr [esi]
// 0077c6c0  50                   push eax
// 0077c6c1  8bce                 mov ecx, esi
// 0077c6c3  e848feffff           call 0x77c510
// 0077c6c8  50                   push eax
// 0077c6c9  8b4724               mov eax, dword ptr [edi + 0x24]
// 0077c6cc  8bce                 mov ecx, esi
// 0077c6ce  ffd0                 call eax
// 0077c6d0  5b                   pop ebx
// 0077c6d1  5f                   pop edi
// 0077c6d2  b801000000           mov eax, 1
// 0077c6d7  5e                   pop esi
// 0077c6d8  c20800               ret 8
// 0077c6db  5b                   pop ebx
// 0077c6dc  5f                   pop edi
// 0077c6dd  33c0                 xor eax, eax
// 0077c6df  5e                   pop esi
// 0077c6e0  c20800               ret 8
// 0077c6e3  90                   nop 
// 0077c6e4  e9c57700c9           jmp 0xc9783eae
// 0077c6e9  c57700               lds esi, ptr [edi]
// 0077c6ec  08c6                 or dh, al
// 0077c6ee  7700                 ja 0x77c6f0
// 0077c6f0  4c                   dec esp
// library xtp-11.2.2-lib-strlen/Source\TabManager\XTPTabManager.cpp (function ?PerformKeyDown@CXTPTabManager@@UAEHPAUHWND__@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabManager.cpp
