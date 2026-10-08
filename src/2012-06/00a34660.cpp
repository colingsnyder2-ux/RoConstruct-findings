// roc 2012-06 00a34660  unit: CRobloxWnd::PartDropTarget  size: 329 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a34660
//
// 00a34660  83ec30               sub esp, 0x30
// 00a34663  55                   push ebp
// 00a34664  8be9                 mov ebp, ecx
// 00a34666  56                   push esi
// 00a34667  55                   push ebp
// 00a34668  8d4c241c             lea ecx, [esp + 0x1c]
// 00a3466c  e82f0bfaff           call 0x9d51a0
// 00a34671  8d4d54               lea ecx, [ebp + 0x54]
// 00a34674  e8075b0000           call 0xa3a180
// 00a34679  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 00a3467f  8bb0e4000000         mov esi, dword ptr [eax + 0xe4]
// 00a34685  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00a34688  83c624               add esi, 0x24
// 00a3468b  83f8ff               cmp eax, -1
// 00a3468e  7503                 jne 0xa34693
// 00a34690  8b4614               mov eax, dword ptr [esi + 0x14]
// 00a34693  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00a34696  83f9ff               cmp ecx, -1
// 00a34699  7503                 jne 0xa3469e
// 00a3469b  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a3469e  3bc1                 cmp eax, ecx
// 00a346a0  7530                 jne 0xa346d2
// 00a346a2  8b4618               mov eax, dword ptr [esi + 0x18]
// 00a346a5  83f8ff               cmp eax, -1
// 00a346a8  7503                 jne 0xa346ad
// 00a346aa  8b4614               mov eax, dword ptr [esi + 0x14]
// 00a346ad  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00a346b1  50                   push eax
// 00a346b2  8d4c241c             lea ecx, [esp + 0x1c]
// 00a346b6  51                   push ecx
// 00a346b7  8bce                 mov ecx, esi
// 00a346b9  e8eee7f4ff           call 0x982eac
// 00a346be  8b8db0000000         mov ecx, dword ptr [ebp + 0xb0]
// 00a346c4  56                   push esi
// 00a346c5  e8c6feffff           call 0xa34590
// 00a346ca  5e                   pop esi
// 00a346cb  5d                   pop ebp
// 00a346cc  83c430               add esp, 0x30
// 00a346cf  c20400               ret 4
// 00a346d2  83bdac00000001       cmp dword ptr [ebp + 0xac], 1
// 00a346d9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a346dd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a346e1  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a346e5  8954240c             mov dword ptr [esp + 0xc], edx
// 00a346e9  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a346ed  894c2408             mov dword ptr [esp + 8], ecx
// 00a346f1  89542410             mov dword ptr [esp + 0x10], edx
// 00a346f5  89442414             mov dword ptr [esp + 0x14], eax
// 00a346f9  7529                 jne 0xa34724
// 00a346fb  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 00a346fe  51                   push ecx
// 00a346ff  ff15503ab200         call dword ptr [0xb23a50]
// 00a34705  50                   push eax
// 00a34706  e85bdff4ff           call 0x982666
// 00a3470b  50                   push eax
// 00a3470c  8d4c242c             lea ecx, [esp + 0x2c]
// 00a34710  e88b0afaff           call 0x9d51a0
// 00a34715  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a34719  8bca                 mov ecx, edx
// 00a3471b  2b4808               sub ecx, dword ptr [eax + 8]
// 00a3471e  0308                 add ecx, dword ptr [eax]
// 00a34720  894c2408             mov dword ptr [esp + 8], ecx
// 00a34724  53                   push ebx
// 00a34725  8b1dfc3bb200         mov ebx, dword ptr [0xb23bfc]
// 00a3472b  57                   push edi
// 00a3472c  2bd1                 sub edx, ecx
// 00a3472e  6a10                 push 0x10
// 00a34730  8bfa                 mov edi, edx
// 00a34732  ffd3                 call ebx
// 00a34734  99                   cdq 
// 00a34735  2bc2                 sub eax, edx
// 00a34737  d1f8                 sar eax, 1
// 00a34739  3bf8                 cmp edi, eax
// 00a3473b  7e0a                 jle 0xa34747
// 00a3473d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a34741  2b442410             sub eax, dword ptr [esp + 0x10]
// 00a34745  eb09                 jmp 0xa34750
// 00a34747  6a10                 push 0x10
// 00a34749  ffd3                 call ebx
// 00a3474b  99                   cdq 
// 00a3474c  2bc2                 sub eax, edx
// 00a3474e  d1f8                 sar eax, 1
// 00a34750  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a34754  03c2                 add eax, edx
// 00a34756  89442418             mov dword ptr [esp + 0x18], eax
// 00a3475a  8b4618               mov eax, dword ptr [esi + 0x18]
// 00a3475d  5f                   pop edi
// 00a3475e  5b                   pop ebx
// 00a3475f  83f8ff               cmp eax, -1
// 00a34762  7503                 jne 0xa34767
// 00a34764  8b4614               mov eax, dword ptr [esi + 0x14]
// 00a34767  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00a3476a  83f9ff               cmp ecx, -1
// 00a3476d  7505                 jne 0xa34774
// 00a3476f  8b7608               mov esi, dword ptr [esi + 8]
// 00a34772  eb02                 jmp 0xa34776
// 00a34774  8bf1                 mov esi, ecx
// 00a34776  8d4c2418             lea ecx, [esp + 0x18]
// 00a3477a  51                   push ecx
// 00a3477b  6a01                 push 1
// 00a3477d  50                   push eax
// 00a3477e  56                   push esi
// 00a3477f  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00a34783  8d542418             lea edx, [esp + 0x18]
// 00a34787  52                   push edx
// 00a34788  56                   push esi
// 00a34789  e8022afaff           call 0x9d7190
// 00a3478e  8bc8                 mov ecx, eax
// 00a34790  e8fb2afaff           call 0x9d7290
// 00a34795  8b8db0000000         mov ecx, dword ptr [ebp + 0xb0]
// 00a3479b  56                   push esi
// 00a3479c  e8effdffff           call 0xa34590
// 00a347a1  5e                   pop esi
// 00a347a2  5d                   pop ebp
// 00a347a3  83c430               add esp, 0x30
// 00a347a6  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnDraw@CXTPDockingPaneAutoHidePanel@@IAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
