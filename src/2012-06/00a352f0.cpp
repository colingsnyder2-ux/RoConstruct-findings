// roc 2012-06 00a352f0  unit: CXTPDockingPaneAutoHidePanel  size: 444 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a352f0
//
// 00a352f0  6aff                 push -1
// 00a352f2  68b857ae00           push 0xae57b8
// 00a352f7  64a100000000         mov eax, dword ptr fs:[0]
// 00a352fd  50                   push eax
// 00a352fe  83ec34               sub esp, 0x34
// 00a35301  53                   push ebx
// 00a35302  55                   push ebp
// 00a35303  56                   push esi
// 00a35304  57                   push edi
// 00a35305  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a3530a  33c4                 xor eax, esp
// 00a3530c  50                   push eax
// 00a3530d  8d442448             lea eax, [esp + 0x48]
// 00a35311  64a300000000         mov dword ptr fs:[0], eax
// 00a35317  8bf9                 mov edi, ecx
// 00a35319  8b4754               mov eax, dword ptr [edi + 0x54]
// 00a3531c  8b5014               mov edx, dword ptr [eax + 0x14]
// 00a3531f  8d4f54               lea ecx, [edi + 0x54]
// 00a35322  ffd2                 call edx
// 00a35324  85c0                 test eax, eax
// 00a35326  7418                 je 0xa35340
// 00a35328  837f2000             cmp dword ptr [edi + 0x20], 0
// 00a3532c  0f8451010000         je 0xa35483
// 00a35332  8b07                 mov eax, dword ptr [edi]
// 00a35334  8b5068               mov edx, dword ptr [eax + 0x68]
// 00a35337  8bcf                 mov ecx, edi
// 00a35339  ffd2                 call edx
// 00a3533b  e943010000           jmp 0xa35483
// 00a35340  837f2000             cmp dword ptr [edi + 0x20], 0
// 00a35344  7511                 jne 0xa35357
// 00a35346  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00a3534a  8b07                 mov eax, dword ptr [edi]
// 00a3534c  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 00a35352  51                   push ecx
// 00a35353  8bcf                 mov ecx, edi
// 00a35355  ffd2                 call edx
// 00a35357  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 00a3535b  56                   push esi
// 00a3535c  8d9fb8000000         lea ebx, [edi + 0xb8]
// 00a35362  53                   push ebx
// 00a35363  ff15e03cb200         call dword ptr [0xb23ce0]
// 00a35369  85c0                 test eax, eax
// 00a3536b  751e                 jne 0xa3538b
// 00a3536d  50                   push eax
// 00a3536e  8bcf                 mov ecx, edi
// 00a35370  e89bf4ffff           call 0xa34810
// 00a35375  8b06                 mov eax, dword ptr [esi]
// 00a35377  8903                 mov dword ptr [ebx], eax
// 00a35379  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a3537c  894b04               mov dword ptr [ebx + 4], ecx
// 00a3537f  8b5608               mov edx, dword ptr [esi + 8]
// 00a35382  895308               mov dword ptr [ebx + 8], edx
// 00a35385  8b460c               mov eax, dword ptr [esi + 0xc]
// 00a35388  89430c               mov dword ptr [ebx + 0xc], eax
// 00a3538b  8bcf                 mov ecx, edi
// 00a3538d  e8aee0ffff           call 0xa33440
// 00a35392  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a35395  8b560c               mov edx, dword ptr [esi + 0xc]
// 00a35398  8b2e                 mov ebp, dword ptr [esi]
// 00a3539a  8b5e04               mov ebx, dword ptr [esi + 4]
// 00a3539d  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00a353a1  8b8fac000000         mov ecx, dword ptr [edi + 0xac]
// 00a353a7  89542430             mov dword ptr [esp + 0x30], edx
// 00a353ab  83f903               cmp ecx, 3
// 00a353ae  772b                 ja 0xa353db
// 00a353b0  ff248d9c54a300       jmp dword ptr [ecx*4 + 0xa3549c]
// 00a353b7  0106                 add dword ptr [esi], eax
// 00a353b9  8b06                 mov eax, dword ptr [esi]
// 00a353bb  8944242c             mov dword ptr [esp + 0x2c], eax
// 00a353bf  eb1a                 jmp 0xa353db
// 00a353c1  294608               sub dword ptr [esi + 8], eax
// 00a353c4  8b6e08               mov ebp, dword ptr [esi + 8]
// 00a353c7  eb12                 jmp 0xa353db
// 00a353c9  014604               add dword ptr [esi + 4], eax
// 00a353cc  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a353cf  894c2430             mov dword ptr [esp + 0x30], ecx
// 00a353d3  eb06                 jmp 0xa353db
// 00a353d5  29460c               sub dword ptr [esi + 0xc], eax
// 00a353d8  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 00a353db  57                   push edi
// 00a353dc  8d4c2438             lea ecx, [esp + 0x38]
// 00a353e0  e8b7dbf4ff           call 0x982f9c
// 00a353e5  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00a353e9  8b742430             mov esi, dword ptr [esp + 0x30]
// 00a353ed  8bc3                 mov eax, ebx
// 00a353ef  f7d8                 neg eax
// 00a353f1  50                   push eax
// 00a353f2  8bcd                 mov ecx, ebp
// 00a353f4  f7d9                 neg ecx
// 00a353f6  51                   push ecx
// 00a353f7  8d44241c             lea eax, [esp + 0x1c]
// 00a353fb  50                   push eax
// 00a353fc  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 00a35404  896c2420             mov dword ptr [esp + 0x20], ebp
// 00a35408  895c2424             mov dword ptr [esp + 0x24], ebx
// 00a3540c  89542428             mov dword ptr [esp + 0x28], edx
// 00a35410  8974242c             mov dword ptr [esp + 0x2c], esi
// 00a35414  ff15f43ab200         call dword ptr [0xb23af4]
// 00a3541a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a3541e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a35422  83ec10               sub esp, 0x10
// 00a35425  8bc4                 mov eax, esp
// 00a35427  8908                 mov dword ptr [eax], ecx
// 00a35429  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a3542d  895004               mov dword ptr [eax + 4], edx
// 00a35430  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a35434  894808               mov dword ptr [eax + 8], ecx
// 00a35437  89500c               mov dword ptr [eax + 0xc], edx
// 00a3543a  8d442444             lea eax, [esp + 0x44]
// 00a3543e  50                   push eax
// 00a3543f  8bcf                 mov ecx, edi
// 00a35441  e8eafaffff           call 0xa34f30
// 00a35446  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00a3544a  833900               cmp dword ptr [ecx], 0
// 00a3544d  7423                 je 0xa35472
// 00a3544f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a35453  6a01                 push 1
// 00a35455  2bf3                 sub esi, ebx
// 00a35457  56                   push esi
// 00a35458  2bc5                 sub eax, ebp
// 00a3545a  50                   push eax
// 00a3545b  53                   push ebx
// 00a3545c  55                   push ebp
// 00a3545d  8bcf                 mov ecx, edi
// 00a3545f  e876d0f4ff           call 0x9824da
// 00a35464  8b5720               mov edx, dword ptr [edi + 0x20]
// 00a35467  6a00                 push 0
// 00a35469  6a00                 push 0
// 00a3546b  52                   push edx
// 00a3546c  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a35472  8d4c2434             lea ecx, [esp + 0x34]
// 00a35476  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 00a3547e  e813dbf4ff           call 0x982f96
// 00a35483  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a35487  64890d00000000       mov dword ptr fs:[0], ecx
// 00a3548e  59                   pop ecx
// 00a3548f  5f                   pop edi
// 00a35490  5e                   pop esi
// 00a35491  5d                   pop ebp
// 00a35492  5b                   pop ebx
// 00a35493  83c440               add esp, 0x40
// 00a35496  c20c00               ret 0xc
// 00a35499  8d4900               lea ecx, [ecx]
// 00a3549c  b753                 mov bh, 0x53
// 00a3549e  a300c153a3           mov dword ptr [0xa353c100], eax
// 00a354a3  00c9                 add cl, cl
// 00a354a5  53                   push ebx
// 00a354a6  a300d553a3           mov dword ptr [0xa353d500], eax
// copied from an identical function in another client (function ?OnSizeParentEx@CXTPDockingPaneAutoHidePanel@@MAEXPAVCWnd@@AAVCRect@@PAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp