// roc 2009-06 007d0050  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 329 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d0050
//
// 007d0050  83ec30               sub esp, 0x30
// 007d0053  55                   push ebp
// 007d0054  8be9                 mov ebp, ecx
// 007d0056  56                   push esi
// 007d0057  55                   push ebp
// 007d0058  8d4c241c             lea ecx, [esp + 0x1c]
// 007d005c  e86f04faff           call 0x7704d0
// 007d0061  8d4d54               lea ecx, [ebp + 0x54]
// 007d0064  e8a75c0000           call 0x7d5d10
// 007d0069  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 007d006f  8bb0e4000000         mov esi, dword ptr [eax + 0xe4]
// 007d0075  8b463c               mov eax, dword ptr [esi + 0x3c]
// 007d0078  83c624               add esi, 0x24
// 007d007b  83f8ff               cmp eax, -1
// 007d007e  7503                 jne 0x7d0083
// 007d0080  8b4614               mov eax, dword ptr [esi + 0x14]
// 007d0083  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007d0086  83f9ff               cmp ecx, -1
// 007d0089  7503                 jne 0x7d008e
// 007d008b  8b4e08               mov ecx, dword ptr [esi + 8]
// 007d008e  3bc1                 cmp eax, ecx
// 007d0090  7530                 jne 0x7d00c2
// 007d0092  8b4618               mov eax, dword ptr [esi + 0x18]
// 007d0095  83f8ff               cmp eax, -1
// 007d0098  7503                 jne 0x7d009d
// 007d009a  8b4614               mov eax, dword ptr [esi + 0x14]
// 007d009d  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 007d00a1  50                   push eax
// 007d00a2  8d4c241c             lea ecx, [esp + 0x1c]
// 007d00a6  51                   push ecx
// 007d00a7  8bce                 mov ecx, esi
// 007d00a9  e82297f4ff           call 0x7197d0
// 007d00ae  8b8db0000000         mov ecx, dword ptr [ebp + 0xb0]
// 007d00b4  56                   push esi
// 007d00b5  e8e6feffff           call 0x7cffa0
// 007d00ba  5e                   pop esi
// 007d00bb  5d                   pop ebp
// 007d00bc  83c430               add esp, 0x30
// 007d00bf  c20400               ret 4
// 007d00c2  83bdac00000001       cmp dword ptr [ebp + 0xac], 1
// 007d00c9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007d00cd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007d00d1  8b442424             mov eax, dword ptr [esp + 0x24]
// 007d00d5  8954240c             mov dword ptr [esp + 0xc], edx
// 007d00d9  8b542420             mov edx, dword ptr [esp + 0x20]
// 007d00dd  894c2408             mov dword ptr [esp + 8], ecx
// 007d00e1  89542410             mov dword ptr [esp + 0x10], edx
// 007d00e5  89442414             mov dword ptr [esp + 0x14], eax
// 007d00e9  7529                 jne 0x7d0114
// 007d00eb  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 007d00ee  51                   push ecx
// 007d00ef  ff1598ee8900         call dword ptr [0x89ee98]
// 007d00f5  50                   push eax
// 007d00f6  e8078cf4ff           call 0x718d02
// 007d00fb  50                   push eax
// 007d00fc  8d4c242c             lea ecx, [esp + 0x2c]
// 007d0100  e8cb03faff           call 0x7704d0
// 007d0105  8b542410             mov edx, dword ptr [esp + 0x10]
// 007d0109  8bca                 mov ecx, edx
// 007d010b  2b4808               sub ecx, dword ptr [eax + 8]
// 007d010e  0308                 add ecx, dword ptr [eax]
// 007d0110  894c2408             mov dword ptr [esp + 8], ecx
// 007d0114  53                   push ebx
// 007d0115  8b1ddced8900         mov ebx, dword ptr [0x89eddc]
// 007d011b  57                   push edi
// 007d011c  2bd1                 sub edx, ecx
// 007d011e  6a10                 push 0x10
// 007d0120  8bfa                 mov edi, edx
// 007d0122  ffd3                 call ebx
// 007d0124  99                   cdq 
// 007d0125  2bc2                 sub eax, edx
// 007d0127  d1f8                 sar eax, 1
// 007d0129  3bf8                 cmp edi, eax
// 007d012b  7e0a                 jle 0x7d0137
// 007d012d  8b442418             mov eax, dword ptr [esp + 0x18]
// 007d0131  2b442410             sub eax, dword ptr [esp + 0x10]
// 007d0135  eb09                 jmp 0x7d0140
// 007d0137  6a10                 push 0x10
// 007d0139  ffd3                 call ebx
// 007d013b  99                   cdq 
// 007d013c  2bc2                 sub eax, edx
// 007d013e  d1f8                 sar eax, 1
// 007d0140  8b542410             mov edx, dword ptr [esp + 0x10]
// 007d0144  03c2                 add eax, edx
// 007d0146  89442418             mov dword ptr [esp + 0x18], eax
// 007d014a  8b4618               mov eax, dword ptr [esi + 0x18]
// 007d014d  5f                   pop edi
// 007d014e  5b                   pop ebx
// 007d014f  83f8ff               cmp eax, -1
// 007d0152  7503                 jne 0x7d0157
// 007d0154  8b4614               mov eax, dword ptr [esi + 0x14]
// 007d0157  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007d015a  83f9ff               cmp ecx, -1
// 007d015d  7505                 jne 0x7d0164
// 007d015f  8b7608               mov esi, dword ptr [esi + 8]
// 007d0162  eb02                 jmp 0x7d0166
// 007d0164  8bf1                 mov esi, ecx
// 007d0166  8d4c2418             lea ecx, [esp + 0x18]
// 007d016a  51                   push ecx
// 007d016b  6a01                 push 1
// 007d016d  50                   push eax
// 007d016e  56                   push esi
// 007d016f  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 007d0173  8d542418             lea edx, [esp + 0x18]
// 007d0177  52                   push edx
// 007d0178  56                   push esi
// 007d0179  e8f223faff           call 0x772570
// 007d017e  8bc8                 mov ecx, eax
// 007d0180  e8eb24faff           call 0x772670
// 007d0185  8b8db0000000         mov ecx, dword ptr [ebp + 0xb0]
// 007d018b  56                   push esi
// 007d018c  e80ffeffff           call 0x7cffa0
// 007d0191  5e                   pop esi
// 007d0192  5d                   pop ebp
// 007d0193  83c430               add esp, 0x30
// 007d0196  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnDraw@CXTPDockingPaneAutoHidePanel@@IAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
