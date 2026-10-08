// roc 2011-06 008bc160  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 329 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bc160
//
// 008bc160  83ec30               sub esp, 0x30
// 008bc163  55                   push ebp
// 008bc164  8be9                 mov ebp, ecx
// 008bc166  56                   push esi
// 008bc167  55                   push ebp
// 008bc168  8d4c241c             lea ecx, [esp + 0x1c]
// 008bc16c  e81f0cfaff           call 0x85cd90
// 008bc171  8d4d54               lea ecx, [ebp + 0x54]
// 008bc174  e8f75b0000           call 0x8c1d70
// 008bc179  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 008bc17f  8bb0e4000000         mov esi, dword ptr [eax + 0xe4]
// 008bc185  8b463c               mov eax, dword ptr [esi + 0x3c]
// 008bc188  83c624               add esi, 0x24
// 008bc18b  83f8ff               cmp eax, -1
// 008bc18e  7503                 jne 0x8bc193
// 008bc190  8b4614               mov eax, dword ptr [esi + 0x14]
// 008bc193  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008bc196  83f9ff               cmp ecx, -1
// 008bc199  7503                 jne 0x8bc19e
// 008bc19b  8b4e08               mov ecx, dword ptr [esi + 8]
// 008bc19e  3bc1                 cmp eax, ecx
// 008bc1a0  7530                 jne 0x8bc1d2
// 008bc1a2  8b4618               mov eax, dword ptr [esi + 0x18]
// 008bc1a5  83f8ff               cmp eax, -1
// 008bc1a8  7503                 jne 0x8bc1ad
// 008bc1aa  8b4614               mov eax, dword ptr [esi + 0x14]
// 008bc1ad  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 008bc1b1  50                   push eax
// 008bc1b2  8d4c241c             lea ecx, [esp + 0x1c]
// 008bc1b6  51                   push ecx
// 008bc1b7  8bce                 mov ecx, esi
// 008bc1b9  e862ecf4ff           call 0x80ae20
// 008bc1be  8b8db0000000         mov ecx, dword ptr [ebp + 0xb0]
// 008bc1c4  56                   push esi
// 008bc1c5  e8e6feffff           call 0x8bc0b0
// 008bc1ca  5e                   pop esi
// 008bc1cb  5d                   pop ebp
// 008bc1cc  83c430               add esp, 0x30
// 008bc1cf  c20400               ret 4
// 008bc1d2  83bdac00000001       cmp dword ptr [ebp + 0xac], 1
// 008bc1d9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008bc1dd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008bc1e1  8b442424             mov eax, dword ptr [esp + 0x24]
// 008bc1e5  8954240c             mov dword ptr [esp + 0xc], edx
// 008bc1e9  8b542420             mov edx, dword ptr [esp + 0x20]
// 008bc1ed  894c2408             mov dword ptr [esp + 8], ecx
// 008bc1f1  89542410             mov dword ptr [esp + 0x10], edx
// 008bc1f5  89442414             mov dword ptr [esp + 0x14], eax
// 008bc1f9  7529                 jne 0x8bc224
// 008bc1fb  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 008bc1fe  51                   push ecx
// 008bc1ff  ff15b819a400         call dword ptr [0xa419b8]
// 008bc205  50                   push eax
// 008bc206  e81de1f4ff           call 0x80a328
// 008bc20b  50                   push eax
// 008bc20c  8d4c242c             lea ecx, [esp + 0x2c]
// 008bc210  e87b0bfaff           call 0x85cd90
// 008bc215  8b542410             mov edx, dword ptr [esp + 0x10]
// 008bc219  8bca                 mov ecx, edx
// 008bc21b  2b4808               sub ecx, dword ptr [eax + 8]
// 008bc21e  0308                 add ecx, dword ptr [eax]
// 008bc220  894c2408             mov dword ptr [esp + 8], ecx
// 008bc224  53                   push ebx
// 008bc225  8b1de019a400         mov ebx, dword ptr [0xa419e0]
// 008bc22b  57                   push edi
// 008bc22c  2bd1                 sub edx, ecx
// 008bc22e  6a10                 push 0x10
// 008bc230  8bfa                 mov edi, edx
// 008bc232  ffd3                 call ebx
// 008bc234  99                   cdq 
// 008bc235  2bc2                 sub eax, edx
// 008bc237  d1f8                 sar eax, 1
// 008bc239  3bf8                 cmp edi, eax
// 008bc23b  7e0a                 jle 0x8bc247
// 008bc23d  8b442418             mov eax, dword ptr [esp + 0x18]
// 008bc241  2b442410             sub eax, dword ptr [esp + 0x10]
// 008bc245  eb09                 jmp 0x8bc250
// 008bc247  6a10                 push 0x10
// 008bc249  ffd3                 call ebx
// 008bc24b  99                   cdq 
// 008bc24c  2bc2                 sub eax, edx
// 008bc24e  d1f8                 sar eax, 1
// 008bc250  8b542410             mov edx, dword ptr [esp + 0x10]
// 008bc254  03c2                 add eax, edx
// 008bc256  89442418             mov dword ptr [esp + 0x18], eax
// 008bc25a  8b4618               mov eax, dword ptr [esi + 0x18]
// 008bc25d  5f                   pop edi
// 008bc25e  5b                   pop ebx
// 008bc25f  83f8ff               cmp eax, -1
// 008bc262  7503                 jne 0x8bc267
// 008bc264  8b4614               mov eax, dword ptr [esi + 0x14]
// 008bc267  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008bc26a  83f9ff               cmp ecx, -1
// 008bc26d  7505                 jne 0x8bc274
// 008bc26f  8b7608               mov esi, dword ptr [esi + 8]
// 008bc272  eb02                 jmp 0x8bc276
// 008bc274  8bf1                 mov esi, ecx
// 008bc276  8d4c2418             lea ecx, [esp + 0x18]
// 008bc27a  51                   push ecx
// 008bc27b  6a01                 push 1
// 008bc27d  50                   push eax
// 008bc27e  56                   push esi
// 008bc27f  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 008bc283  8d542418             lea edx, [esp + 0x18]
// 008bc287  52                   push edx
// 008bc288  56                   push esi
// 008bc289  e8f22afaff           call 0x85ed80
// 008bc28e  8bc8                 mov ecx, eax
// 008bc290  e8eb2bfaff           call 0x85ee80
// 008bc295  8b8db0000000         mov ecx, dword ptr [ebp + 0xb0]
// 008bc29b  56                   push esi
// 008bc29c  e80ffeffff           call 0x8bc0b0
// 008bc2a1  5e                   pop esi
// 008bc2a2  5d                   pop ebp
// 008bc2a3  83c430               add esp, 0x30
// 008bc2a6  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnDraw@CXTPDockingPaneAutoHidePanel@@IAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
