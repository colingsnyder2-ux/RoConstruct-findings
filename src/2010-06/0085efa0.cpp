// roc 2010-06 0085efa0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 329 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085efa0
//
// 0085efa0  83ec30               sub esp, 0x30
// 0085efa3  55                   push ebp
// 0085efa4  8be9                 mov ebp, ecx
// 0085efa6  56                   push esi
// 0085efa7  55                   push ebp
// 0085efa8  8d4c241c             lea ecx, [esp + 0x1c]
// 0085efac  e85f03faff           call 0x7ff310
// 0085efb1  8d4d54               lea ecx, [ebp + 0x54]
// 0085efb4  e867590000           call 0x864920
// 0085efb9  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 0085efbf  8bb0e4000000         mov esi, dword ptr [eax + 0xe4]
// 0085efc5  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0085efc8  83c624               add esi, 0x24
// 0085efcb  83f8ff               cmp eax, -1
// 0085efce  7503                 jne 0x85efd3
// 0085efd0  8b4614               mov eax, dword ptr [esi + 0x14]
// 0085efd3  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0085efd6  83f9ff               cmp ecx, -1
// 0085efd9  7503                 jne 0x85efde
// 0085efdb  8b4e08               mov ecx, dword ptr [esi + 8]
// 0085efde  3bc1                 cmp eax, ecx
// 0085efe0  7530                 jne 0x85f012
// 0085efe2  8b4618               mov eax, dword ptr [esi + 0x18]
// 0085efe5  83f8ff               cmp eax, -1
// 0085efe8  7503                 jne 0x85efed
// 0085efea  8b4614               mov eax, dword ptr [esi + 0x14]
// 0085efed  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0085eff1  50                   push eax
// 0085eff2  8d4c241c             lea ecx, [esp + 0x1c]
// 0085eff6  51                   push ecx
// 0085eff7  8bce                 mov ecx, esi
// 0085eff9  e84097f4ff           call 0x7a873e
// 0085effe  8b8db0000000         mov ecx, dword ptr [ebp + 0xb0]
// 0085f004  56                   push esi
// 0085f005  e8e6feffff           call 0x85eef0
// 0085f00a  5e                   pop esi
// 0085f00b  5d                   pop ebp
// 0085f00c  83c430               add esp, 0x30
// 0085f00f  c20400               ret 4
// 0085f012  83bdac00000001       cmp dword ptr [ebp + 0xac], 1
// 0085f019  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0085f01d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0085f021  8b442424             mov eax, dword ptr [esp + 0x24]
// 0085f025  8954240c             mov dword ptr [esp + 0xc], edx
// 0085f029  8b542420             mov edx, dword ptr [esp + 0x20]
// 0085f02d  894c2408             mov dword ptr [esp + 8], ecx
// 0085f031  89542410             mov dword ptr [esp + 0x10], edx
// 0085f035  89442414             mov dword ptr [esp + 0x14], eax
// 0085f039  7529                 jne 0x85f064
// 0085f03b  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0085f03e  51                   push ecx
// 0085f03f  ff154cba9e00         call dword ptr [0x9eba4c]
// 0085f045  50                   push eax
// 0085f046  e81f8cf4ff           call 0x7a7c6a
// 0085f04b  50                   push eax
// 0085f04c  8d4c242c             lea ecx, [esp + 0x2c]
// 0085f050  e8bb02faff           call 0x7ff310
// 0085f055  8b542410             mov edx, dword ptr [esp + 0x10]
// 0085f059  8bca                 mov ecx, edx
// 0085f05b  2b4808               sub ecx, dword ptr [eax + 8]
// 0085f05e  0308                 add ecx, dword ptr [eax]
// 0085f060  894c2408             mov dword ptr [esp + 8], ecx
// 0085f064  53                   push ebx
// 0085f065  8b1d6cba9e00         mov ebx, dword ptr [0x9eba6c]
// 0085f06b  57                   push edi
// 0085f06c  2bd1                 sub edx, ecx
// 0085f06e  6a10                 push 0x10
// 0085f070  8bfa                 mov edi, edx
// 0085f072  ffd3                 call ebx
// 0085f074  99                   cdq 
// 0085f075  2bc2                 sub eax, edx
// 0085f077  d1f8                 sar eax, 1
// 0085f079  3bf8                 cmp edi, eax
// 0085f07b  7e0a                 jle 0x85f087
// 0085f07d  8b442418             mov eax, dword ptr [esp + 0x18]
// 0085f081  2b442410             sub eax, dword ptr [esp + 0x10]
// 0085f085  eb09                 jmp 0x85f090
// 0085f087  6a10                 push 0x10
// 0085f089  ffd3                 call ebx
// 0085f08b  99                   cdq 
// 0085f08c  2bc2                 sub eax, edx
// 0085f08e  d1f8                 sar eax, 1
// 0085f090  8b542410             mov edx, dword ptr [esp + 0x10]
// 0085f094  03c2                 add eax, edx
// 0085f096  89442418             mov dword ptr [esp + 0x18], eax
// 0085f09a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0085f09d  5f                   pop edi
// 0085f09e  5b                   pop ebx
// 0085f09f  83f8ff               cmp eax, -1
// 0085f0a2  7503                 jne 0x85f0a7
// 0085f0a4  8b4614               mov eax, dword ptr [esi + 0x14]
// 0085f0a7  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0085f0aa  83f9ff               cmp ecx, -1
// 0085f0ad  7505                 jne 0x85f0b4
// 0085f0af  8b7608               mov esi, dword ptr [esi + 8]
// 0085f0b2  eb02                 jmp 0x85f0b6
// 0085f0b4  8bf1                 mov esi, ecx
// 0085f0b6  8d4c2418             lea ecx, [esp + 0x18]
// 0085f0ba  51                   push ecx
// 0085f0bb  6a01                 push 1
// 0085f0bd  50                   push eax
// 0085f0be  56                   push esi
// 0085f0bf  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 0085f0c3  8d542418             lea edx, [esp + 0x18]
// 0085f0c7  52                   push edx
// 0085f0c8  56                   push esi
// 0085f0c9  e83222faff           call 0x801300
// 0085f0ce  8bc8                 mov ecx, eax
// 0085f0d0  e82b23faff           call 0x801400
// 0085f0d5  8b8db0000000         mov ecx, dword ptr [ebp + 0xb0]
// 0085f0db  56                   push esi
// 0085f0dc  e80ffeffff           call 0x85eef0
// 0085f0e1  5e                   pop esi
// 0085f0e2  5d                   pop ebp
// 0085f0e3  83c430               add esp, 0x30
// 0085f0e6  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnDraw@CXTPDockingPaneAutoHidePanel@@IAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
