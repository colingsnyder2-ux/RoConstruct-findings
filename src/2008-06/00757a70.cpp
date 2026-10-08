// from server: 100% by auto
// roc 2008-06 00757a70  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 329 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00757a70
//
// 00757a70  83ec30               sub esp, 0x30
// 00757a73  55                   push ebp
// 00757a74  8be9                 mov ebp, ecx
// 00757a76  56                   push esi
// 00757a77  55                   push ebp
// 00757a78  8d4c241c             lea ecx, [esp + 0x1c]
// 00757a7c  e8af00faff           call 0x6f7b30
// 00757a81  8d4d54               lea ecx, [ebp + 0x54]
// 00757a84  e8275a0000           call 0x75d4b0
// 00757a89  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 00757a8f  8bb0e4000000         mov esi, dword ptr [eax + 0xe4]
// 00757a95  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00757a98  83c624               add esi, 0x24
// 00757a9b  83f8ff               cmp eax, -1
// 00757a9e  7503                 jne 0x757aa3
// 00757aa0  8b4614               mov eax, dword ptr [esi + 0x14]
// 00757aa3  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00757aa6  83f9ff               cmp ecx, -1
// 00757aa9  7503                 jne 0x757aae
// 00757aab  8b4e08               mov ecx, dword ptr [esi + 8]
// 00757aae  3bc1                 cmp eax, ecx
// 00757ab0  7530                 jne 0x757ae2
// 00757ab2  8b4618               mov eax, dword ptr [esi + 0x18]
// 00757ab5  83f8ff               cmp eax, -1
// 00757ab8  7503                 jne 0x757abd
// 00757aba  8b4614               mov eax, dword ptr [esi + 0x14]
// 00757abd  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00757ac1  50                   push eax
// 00757ac2  8d4c241c             lea ecx, [esp + 0x1c]
// 00757ac6  51                   push ecx
// 00757ac7  8bce                 mov ecx, esi
// 00757ac9  e89098f4ff           call 0x6a135e
// 00757ace  8b8db0000000         mov ecx, dword ptr [ebp + 0xb0]
// 00757ad4  56                   push esi
// 00757ad5  e8e6feffff           call 0x7579c0
// 00757ada  5e                   pop esi
// 00757adb  5d                   pop ebp
// 00757adc  83c430               add esp, 0x30
// 00757adf  c20400               ret 4
// 00757ae2  83bdac00000001       cmp dword ptr [ebp + 0xac], 1
// 00757ae9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00757aed  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00757af1  8b442424             mov eax, dword ptr [esp + 0x24]
// 00757af5  8954240c             mov dword ptr [esp + 0xc], edx
// 00757af9  8b542420             mov edx, dword ptr [esp + 0x20]
// 00757afd  894c2408             mov dword ptr [esp + 8], ecx
// 00757b01  89542410             mov dword ptr [esp + 0x10], edx
// 00757b05  89442414             mov dword ptr [esp + 0x14], eax
// 00757b09  7529                 jne 0x757b34
// 00757b0b  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 00757b0e  51                   push ecx
// 00757b0f  ff15f82d8000         call dword ptr [0x802df8]
// 00757b15  50                   push eax
// 00757b16  e8c390f4ff           call 0x6a0bde
// 00757b1b  50                   push eax
// 00757b1c  8d4c242c             lea ecx, [esp + 0x2c]
// 00757b20  e80b00faff           call 0x6f7b30
// 00757b25  8b542410             mov edx, dword ptr [esp + 0x10]
// 00757b29  8bca                 mov ecx, edx
// 00757b2b  2b4808               sub ecx, dword ptr [eax + 8]
// 00757b2e  0308                 add ecx, dword ptr [eax]
// 00757b30  894c2408             mov dword ptr [esp + 8], ecx
// 00757b34  53                   push ebx
// 00757b35  8b1d4c2d8000         mov ebx, dword ptr [0x802d4c]
// 00757b3b  57                   push edi
// 00757b3c  2bd1                 sub edx, ecx
// 00757b3e  6a10                 push 0x10
// 00757b40  8bfa                 mov edi, edx
// 00757b42  ffd3                 call ebx
// 00757b44  99                   cdq 
// 00757b45  2bc2                 sub eax, edx
// 00757b47  d1f8                 sar eax, 1
// 00757b49  3bf8                 cmp edi, eax
// 00757b4b  7e0a                 jle 0x757b57
// 00757b4d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00757b51  2b442410             sub eax, dword ptr [esp + 0x10]
// 00757b55  eb09                 jmp 0x757b60
// 00757b57  6a10                 push 0x10
// 00757b59  ffd3                 call ebx
// 00757b5b  99                   cdq 
// 00757b5c  2bc2                 sub eax, edx
// 00757b5e  d1f8                 sar eax, 1
// 00757b60  8b542410             mov edx, dword ptr [esp + 0x10]
// 00757b64  03c2                 add eax, edx
// 00757b66  89442418             mov dword ptr [esp + 0x18], eax
// 00757b6a  8b4618               mov eax, dword ptr [esi + 0x18]
// 00757b6d  5f                   pop edi
// 00757b6e  5b                   pop ebx
// 00757b6f  83f8ff               cmp eax, -1
// 00757b72  7503                 jne 0x757b77
// 00757b74  8b4614               mov eax, dword ptr [esi + 0x14]
// 00757b77  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00757b7a  83f9ff               cmp ecx, -1
// 00757b7d  7505                 jne 0x757b84
// 00757b7f  8b7608               mov esi, dword ptr [esi + 8]
// 00757b82  eb02                 jmp 0x757b86
// 00757b84  8bf1                 mov esi, ecx
// 00757b86  8d4c2418             lea ecx, [esp + 0x18]
// 00757b8a  51                   push ecx
// 00757b8b  6a01                 push 1
// 00757b8d  50                   push eax
// 00757b8e  56                   push esi
// 00757b8f  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00757b93  8d542418             lea edx, [esp + 0x18]
// 00757b97  52                   push edx
// 00757b98  56                   push esi
// 00757b99  e83220faff           call 0x6f9bd0
// 00757b9e  8bc8                 mov ecx, eax
// 00757ba0  e82b21faff           call 0x6f9cd0
// 00757ba5  8b8db0000000         mov ecx, dword ptr [ebp + 0xb0]
// 00757bab  56                   push esi
// 00757bac  e80ffeffff           call 0x7579c0
// 00757bb1  5e                   pop esi
// 00757bb2  5d                   pop ebp
// 00757bb3  83c430               add esp, 0x30
// 00757bb6  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnDraw@CXTPDockingPaneAutoHidePanel@@IAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
