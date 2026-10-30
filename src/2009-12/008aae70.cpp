// roc 2009-12 008aae70  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 329 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008aae70
//
// 008aae70  83ec30               sub esp, 0x30
// 008aae73  55                   push ebp
// 008aae74  8be9                 mov ebp, ecx
// 008aae76  56                   push esi
// 008aae77  55                   push ebp
// 008aae78  8d4c241c             lea ecx, [esp + 0x1c]
// 008aae7c  e84f04faff           call 0x84b2d0
// 008aae81  8d4d54               lea ecx, [ebp + 0x54]
// 008aae84  e8c7590000           call 0x8b0850
// 008aae89  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 008aae8f  8bb0e4000000         mov esi, dword ptr [eax + 0xe4]
// 008aae95  8b463c               mov eax, dword ptr [esi + 0x3c]
// 008aae98  83c624               add esi, 0x24
// 008aae9b  83f8ff               cmp eax, -1
// 008aae9e  7503                 jne 0x8aaea3
// 008aaea0  8b4614               mov eax, dword ptr [esi + 0x14]
// 008aaea3  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008aaea6  83f9ff               cmp ecx, -1
// 008aaea9  7503                 jne 0x8aaeae
// 008aaeab  8b4e08               mov ecx, dword ptr [esi + 8]
// 008aaeae  3bc1                 cmp eax, ecx
// 008aaeb0  7530                 jne 0x8aaee2
// 008aaeb2  8b4618               mov eax, dword ptr [esi + 0x18]
// 008aaeb5  83f8ff               cmp eax, -1
// 008aaeb8  7503                 jne 0x8aaebd
// 008aaeba  8b4614               mov eax, dword ptr [esi + 0x14]
// 008aaebd  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 008aaec1  50                   push eax
// 008aaec2  8d4c241c             lea ecx, [esp + 0x1c]
// 008aaec6  51                   push ecx
// 008aaec7  8bce                 mov ecx, esi
// 008aaec9  e83097f4ff           call 0x7f45fe
// 008aaece  8b8db0000000         mov ecx, dword ptr [ebp + 0xb0]
// 008aaed4  56                   push esi
// 008aaed5  e8e6feffff           call 0x8aadc0
// 008aaeda  5e                   pop esi
// 008aaedb  5d                   pop ebp
// 008aaedc  83c430               add esp, 0x30
// 008aaedf  c20400               ret 4
// 008aaee2  83bdac00000001       cmp dword ptr [ebp + 0xac], 1
// 008aaee9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008aaeed  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008aaef1  8b442424             mov eax, dword ptr [esp + 0x24]
// 008aaef5  8954240c             mov dword ptr [esp + 0xc], edx
// 008aaef9  8b542420             mov edx, dword ptr [esp + 0x20]
// 008aaefd  894c2408             mov dword ptr [esp + 8], ecx
// 008aaf01  89542410             mov dword ptr [esp + 0x10], edx
// 008aaf05  89442414             mov dword ptr [esp + 0x14], eax
// 008aaf09  7529                 jne 0x8aaf34
// 008aaf0b  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 008aaf0e  51                   push ecx
// 008aaf0f  ff15bccb9800         call dword ptr [0x98cbbc]
// 008aaf15  50                   push eax
// 008aaf16  e80f8cf4ff           call 0x7f3b2a
// 008aaf1b  50                   push eax
// 008aaf1c  8d4c242c             lea ecx, [esp + 0x2c]
// 008aaf20  e8ab03faff           call 0x84b2d0
// 008aaf25  8b542410             mov edx, dword ptr [esp + 0x10]
// 008aaf29  8bca                 mov ecx, edx
// 008aaf2b  2b4808               sub ecx, dword ptr [eax + 8]
// 008aaf2e  0308                 add ecx, dword ptr [eax]
// 008aaf30  894c2408             mov dword ptr [esp + 8], ecx
// 008aaf34  53                   push ebx
// 008aaf35  8b1ddccb9800         mov ebx, dword ptr [0x98cbdc]
// 008aaf3b  57                   push edi
// 008aaf3c  2bd1                 sub edx, ecx
// 008aaf3e  6a10                 push 0x10
// 008aaf40  8bfa                 mov edi, edx
// 008aaf42  ffd3                 call ebx
// 008aaf44  99                   cdq 
// 008aaf45  2bc2                 sub eax, edx
// 008aaf47  d1f8                 sar eax, 1
// 008aaf49  3bf8                 cmp edi, eax
// 008aaf4b  7e0a                 jle 0x8aaf57
// 008aaf4d  8b442418             mov eax, dword ptr [esp + 0x18]
// 008aaf51  2b442410             sub eax, dword ptr [esp + 0x10]
// 008aaf55  eb09                 jmp 0x8aaf60
// 008aaf57  6a10                 push 0x10
// 008aaf59  ffd3                 call ebx
// 008aaf5b  99                   cdq 
// 008aaf5c  2bc2                 sub eax, edx
// 008aaf5e  d1f8                 sar eax, 1
// 008aaf60  8b542410             mov edx, dword ptr [esp + 0x10]
// 008aaf64  03c2                 add eax, edx
// 008aaf66  89442418             mov dword ptr [esp + 0x18], eax
// 008aaf6a  8b4618               mov eax, dword ptr [esi + 0x18]
// 008aaf6d  5f                   pop edi
// 008aaf6e  5b                   pop ebx
// 008aaf6f  83f8ff               cmp eax, -1
// 008aaf72  7503                 jne 0x8aaf77
// 008aaf74  8b4614               mov eax, dword ptr [esi + 0x14]
// 008aaf77  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008aaf7a  83f9ff               cmp ecx, -1
// 008aaf7d  7505                 jne 0x8aaf84
// 008aaf7f  8b7608               mov esi, dword ptr [esi + 8]
// 008aaf82  eb02                 jmp 0x8aaf86
// 008aaf84  8bf1                 mov esi, ecx
// 008aaf86  8d4c2418             lea ecx, [esp + 0x18]
// 008aaf8a  51                   push ecx
// 008aaf8b  6a01                 push 1
// 008aaf8d  50                   push eax
// 008aaf8e  56                   push esi
// 008aaf8f  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 008aaf93  8d542418             lea edx, [esp + 0x18]
// 008aaf97  52                   push edx
// 008aaf98  56                   push esi
// 008aaf99  e80223faff           call 0x84d2a0
// 008aaf9e  8bc8                 mov ecx, eax
// 008aafa0  e8fb23faff           call 0x84d3a0
// 008aafa5  8b8db0000000         mov ecx, dword ptr [ebp + 0xb0]
// 008aafab  56                   push esi
// 008aafac  e80ffeffff           call 0x8aadc0
// 008aafb1  5e                   pop esi
// 008aafb2  5d                   pop ebp
// 008aafb3  83c430               add esp, 0x30
// 008aafb6  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnDraw@CXTPDockingPaneAutoHidePanel@@IAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
