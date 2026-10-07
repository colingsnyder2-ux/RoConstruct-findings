// roc 2012-06 00a69860  unit: CXTCaptionTheme  size: 302 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a69860
//
// 00a69860  83ec10               sub esp, 0x10
// 00a69863  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a69867  8b5004               mov edx, dword ptr [eax + 4]
// 00a6986a  53                   push ebx
// 00a6986b  55                   push ebp
// 00a6986c  56                   push esi
// 00a6986d  8bf1                 mov esi, ecx
// 00a6986f  8b08                 mov ecx, dword ptr [eax]
// 00a69871  894c240c             mov dword ptr [esp + 0xc], ecx
// 00a69875  8b4808               mov ecx, dword ptr [eax + 8]
// 00a69878  57                   push edi
// 00a69879  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00a6987d  89542414             mov dword ptr [esp + 0x14], edx
// 00a69881  8b500c               mov edx, dword ptr [eax + 0xc]
// 00a69884  894c2418             mov dword ptr [esp + 0x18], ecx
// 00a69888  6a01                 push 1
// 00a6988a  8bcf                 mov ecx, edi
// 00a6988c  89542420             mov dword ptr [esp + 0x20], edx
// 00a69890  e813fd0200           call 0xa995a8
// 00a69895  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00a69899  8b4370               mov eax, dword ptr [ebx + 0x70]
// 00a6989c  50                   push eax
// 00a6989d  8d4c2414             lea ecx, [esp + 0x14]
// 00a698a1  51                   push ecx
// 00a698a2  8bcf                 mov ecx, edi
// 00a698a4  e80396f1ff           call 0x982eac
// 00a698a9  8b83c8000000         mov eax, dword ptr [ebx + 0xc8]
// 00a698af  8b2d4c3bb200         mov ebp, dword ptr [0xb23b4c]
// 00a698b5  a801                 test al, 1
// 00a698b7  746c                 je 0xa69925
// 00a698b9  8b4628               mov eax, dword ptr [esi + 0x28]
// 00a698bc  83f8ff               cmp eax, -1
// 00a698bf  7505                 jne 0xa698c6
// 00a698c1  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00a698c4  eb02                 jmp 0xa698c8
// 00a698c6  8bc8                 mov ecx, eax
// 00a698c8  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a698cb  83f8ff               cmp eax, -1
// 00a698ce  7503                 jne 0xa698d3
// 00a698d0  8b4618               mov eax, dword ptr [esi + 0x18]
// 00a698d3  51                   push ecx
// 00a698d4  50                   push eax
// 00a698d5  8d542418             lea edx, [esp + 0x18]
// 00a698d9  52                   push edx
// 00a698da  8bcf                 mov ecx, edi
// 00a698dc  e8c595f1ff           call 0x982ea6
// 00a698e1  6aff                 push -1
// 00a698e3  6aff                 push -1
// 00a698e5  8d442418             lea eax, [esp + 0x18]
// 00a698e9  50                   push eax
// 00a698ea  ffd5                 call ebp
// 00a698ec  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a698ef  83f8ff               cmp eax, -1
// 00a698f2  7503                 jne 0xa698f7
// 00a698f4  8b4618               mov eax, dword ptr [esi + 0x18]
// 00a698f7  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00a698fa  83f9ff               cmp ecx, -1
// 00a698fd  7505                 jne 0xa69904
// 00a698ff  8b7624               mov esi, dword ptr [esi + 0x24]
// 00a69902  eb02                 jmp 0xa69906
// 00a69904  8bf1                 mov esi, ecx
// 00a69906  50                   push eax
// 00a69907  56                   push esi
// 00a69908  8d4c2418             lea ecx, [esp + 0x18]
// 00a6990c  51                   push ecx
// 00a6990d  8bcf                 mov ecx, edi
// 00a6990f  e89295f1ff           call 0x982ea6
// 00a69914  837b6c00             cmp dword ptr [ebx + 0x6c], 0
// 00a69918  754c                 jne 0xa69966
// 00a6991a  6aff                 push -1
// 00a6991c  6aff                 push -1
// 00a6991e  8d542418             lea edx, [esp + 0x18]
// 00a69922  52                   push edx
// 00a69923  eb3f                 jmp 0xa69964
// 00a69925  a802                 test al, 2
// 00a69927  743d                 je 0xa69966
// 00a69929  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a6992c  83f8ff               cmp eax, -1
// 00a6992f  7505                 jne 0xa69936
// 00a69931  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00a69934  eb02                 jmp 0xa69938
// 00a69936  8bc8                 mov ecx, eax
// 00a69938  8b4628               mov eax, dword ptr [esi + 0x28]
// 00a6993b  83f8ff               cmp eax, -1
// 00a6993e  7505                 jne 0xa69945
// 00a69940  8b7624               mov esi, dword ptr [esi + 0x24]
// 00a69943  eb02                 jmp 0xa69947
// 00a69945  8bf0                 mov esi, eax
// 00a69947  51                   push ecx
// 00a69948  56                   push esi
// 00a69949  8d442418             lea eax, [esp + 0x18]
// 00a6994d  50                   push eax
// 00a6994e  8bcf                 mov ecx, edi
// 00a69950  e85195f1ff           call 0x982ea6
// 00a69955  837b6c00             cmp dword ptr [ebx + 0x6c], 0
// 00a69959  750b                 jne 0xa69966
// 00a6995b  6aff                 push -1
// 00a6995d  6aff                 push -1
// 00a6995f  8d4c2418             lea ecx, [esp + 0x18]
// 00a69963  51                   push ecx
// 00a69964  ffd5                 call ebp
// 00a69966  8b436c               mov eax, dword ptr [ebx + 0x6c]
// 00a69969  f7d8                 neg eax
// 00a6996b  50                   push eax
// 00a6996c  50                   push eax
// 00a6996d  8d542418             lea edx, [esp + 0x18]
// 00a69971  52                   push edx
// 00a69972  ffd5                 call ebp
// 00a69974  8b4374               mov eax, dword ptr [ebx + 0x74]
// 00a69977  50                   push eax
// 00a69978  8d4c2414             lea ecx, [esp + 0x14]
// 00a6997c  51                   push ecx
// 00a6997d  8bcf                 mov ecx, edi
// 00a6997f  e82895f1ff           call 0x982eac
// 00a69984  5f                   pop edi
// 00a69985  5e                   pop esi
// 00a69986  5d                   pop ebp
// 00a69987  5b                   pop ebx
// 00a69988  83c410               add esp, 0x10
// 00a6998b  c20c00               ret 0xc
// library xtp-13.2.1/Source\Controls\XTCaptionTheme.cpp (function ?DrawCaptionBack@CXTCaptionTheme@@UAEXPAVCDC@@PAVCXTCaption@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTCaptionTheme.cpp
