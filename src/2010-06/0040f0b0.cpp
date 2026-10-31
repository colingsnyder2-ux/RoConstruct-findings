// roc 2010-06 0040f0b0  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 436 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040f0b0
//
// 0040f0b0  55                   push ebp
// 0040f0b1  8bec                 mov ebp, esp
// 0040f0b3  6aff                 push -1
// 0040f0b5  6850e39700           push 0x97e350
// 0040f0ba  64a100000000         mov eax, dword ptr fs:[0]
// 0040f0c0  50                   push eax
// 0040f0c1  64892500000000       mov dword ptr fs:[0], esp
// 0040f0c8  83ec10               sub esp, 0x10
// 0040f0cb  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0040f0ce  53                   push ebx
// 0040f0cf  56                   push esi
// 0040f0d0  57                   push edi
// 0040f0d1  33ff                 xor edi, edi
// 0040f0d3  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040f0d6  3bc7                 cmp eax, edi
// 0040f0d8  7518                 jne 0x40f0f2
// 0040f0da  b803400080           mov eax, 0x80004003
// 0040f0df  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040f0e2  64890d00000000       mov dword ptr fs:[0], ecx
// 0040f0e9  5f                   pop edi
// 0040f0ea  5e                   pop esi
// 0040f0eb  5b                   pop ebx
// 0040f0ec  8be5                 mov esp, ebp
// 0040f0ee  5d                   pop ebp
// 0040f0ef  c20800               ret 8
// 0040f0f2  6a1c                 push 0x1c
// 0040f0f4  8938                 mov dword ptr [eax], edi
// 0040f0f6  897dfc               mov dword ptr [ebp - 4], edi
// 0040f0f9  e8a2883900           call 0x7a79a0
// 0040f0fe  8bf0                 mov esi, eax
// 0040f100  83c404               add esp, 4
// 0040f103  3bf7                 cmp esi, edi
// 0040f105  742c                 je 0x40f133
// 0040f107  897e04               mov dword ptr [esi + 4], edi
// 0040f10a  897e10               mov dword ptr [esi + 0x10], edi
// 0040f10d  897e0c               mov dword ptr [esi + 0xc], edi
// 0040f110  897e08               mov dword ptr [esi + 8], edi
// 0040f113  897e14               mov dword ptr [esi + 0x14], edi
// 0040f116  897e18               mov dword ptr [esi + 0x18], edi
// 0040f119  c7062c23a000         mov dword ptr [esi], 0xa0232c
// 0040f11f  8b0db0fabf00         mov ecx, dword ptr [0xbffab0]
// 0040f125  8b01                 mov eax, dword ptr [ecx]
// 0040f127  8b5004               mov edx, dword ptr [eax + 4]
// 0040f12a  ffd2                 call edx
// 0040f12c  8bde                 mov ebx, esi
// 0040f12e  895dec               mov dword ptr [ebp - 0x14], ebx
// 0040f131  eb05                 jmp 0x40f138
// 0040f133  897dec               mov dword ptr [ebp - 0x14], edi
// 0040f136  8bdf                 mov ebx, edi
// 0040f138  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040f13f  3bdf                 cmp ebx, edi
// 0040f141  0f8405010000         je 0x40f24c
// 0040f147  8b7508               mov esi, dword ptr [ebp + 8]
// 0040f14a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0040f14d  8b4608               mov eax, dword ptr [esi + 8]
// 0040f150  8d0481               lea eax, [ecx + eax*4]
// 0040f153  83c604               add esi, 4
// 0040f156  2bc1                 sub eax, ecx
// 0040f158  33c9                 xor ecx, ecx
// 0040f15a  c1f802               sar eax, 2
// 0040f15d  ba08000000           mov edx, 8
// 0040f162  f7e2                 mul edx
// 0040f164  0f90c1               seto cl
// 0040f167  c745fc02000000       mov dword ptr [ebp - 4], 2
// 0040f16e  f7d9                 neg ecx
// 0040f170  0bc8                 or ecx, eax
// 0040f172  51                   push ecx
// 0040f173  e80a8b3900           call 0x7a7c82
// 0040f178  83c404               add esp, 4
// 0040f17b  894508               mov dword ptr [ebp + 8], eax
// 0040f17e  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040f185  3bc7                 cmp eax, edi
// 0040f187  0f84b4000000         je 0x40f241
// 0040f18d  8b3e                 mov edi, dword ptr [esi]
// 0040f18f  8b4e04               mov ecx, dword ptr [esi + 4]
// 0040f192  8bd7                 mov edx, edi
// 0040f194  8d0c8a               lea ecx, [edx + ecx*4]
// 0040f197  8bd8                 mov ebx, eax
// 0040f199  3bf9                 cmp edi, ecx
// 0040f19b  7334                 jae 0x40f1d1
// 0040f19d  8d4900               lea ecx, [ecx]
// 0040f1a0  8b0f                 mov ecx, dword ptr [edi]
// 0040f1a2  85c9                 test ecx, ecx
// 0040f1a4  741c                 je 0x40f1c2
// 0040f1a6  8b11                 mov edx, dword ptr [ecx]
// 0040f1a8  8b4204               mov eax, dword ptr [edx + 4]
// 0040f1ab  51                   push ecx
// 0040f1ac  ffd0                 call eax
// 0040f1ae  8b0f                 mov ecx, dword ptr [edi]
// 0040f1b0  57                   push edi
// 0040f1b1  56                   push esi
// 0040f1b2  890b                 mov dword ptr [ebx], ecx
// 0040f1b4  e827eaffff           call 0x40dbe0
// 0040f1b9  894304               mov dword ptr [ebx + 4], eax
// 0040f1bc  8b4508               mov eax, dword ptr [ebp + 8]
// 0040f1bf  83c308               add ebx, 8
// 0040f1c2  8b5604               mov edx, dword ptr [esi + 4]
// 0040f1c5  8b0e                 mov ecx, dword ptr [esi]
// 0040f1c7  83c704               add edi, 4
// 0040f1ca  8d1491               lea edx, [ecx + edx*4]
// 0040f1cd  3bfa                 cmp edi, edx
// 0040f1cf  72cf                 jb 0x40f1a0
// 0040f1d1  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 0040f1d4  6a02                 push 2
// 0040f1d6  6a00                 push 0
// 0040f1d8  53                   push ebx
// 0040f1d9  50                   push eax
// 0040f1da  8bcf                 mov ecx, edi
// 0040f1dc  e80fecffff           call 0x40ddf0
// 0040f1e1  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0040f1e4  50                   push eax
// 0040f1e5  684c19a000           push 0xa0194c
// 0040f1ea  683419a000           push 0xa01934
// 0040f1ef  57                   push edi
// 0040f1f0  e87b5dffff           call 0x404f70
// 0040f1f5  8bf0                 mov esi, eax
// 0040f1f7  85f6                 test esi, esi
// 0040f1f9  7d0b                 jge 0x40f206
// 0040f1fb  8b17                 mov edx, dword ptr [edi]
// 0040f1fd  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0040f200  6a01                 push 1
// 0040f202  8bcf                 mov ecx, edi
// 0040f204  ffd0                 call eax
// 0040f206  8bc6                 mov eax, esi
// 0040f208  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040f20b  64890d00000000       mov dword ptr fs:[0], ecx
// 0040f212  5f                   pop edi
// 0040f213  5e                   pop esi
// 0040f214  5b                   pop ebx
// 0040f215  8be5                 mov esp, ebp
// 0040f217  5d                   pop ebp
// 0040f218  c20800               ret 8
// 0040f21b  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0040f21e  e8598a3900           call 0x7a7c7c
// 0040f223  b84cf24000           mov eax, 0x40f24c
// 0040f228  c3                   ret 
// 0040f229  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 0040f22c  e84b8a3900           call 0x7a7c7c
// 0040f231  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040f238  b83ef24000           mov eax, 0x40f23e
// 0040f23d  c3                   ret 
// 0040f23e  8b5dec               mov ebx, dword ptr [ebp - 0x14]
// 0040f241  8b03                 mov eax, dword ptr [ebx]
// 0040f243  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0040f246  6a01                 push 1
// 0040f248  8bcb                 mov ecx, ebx
// 0040f24a  ffd2                 call edx
// 0040f24c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040f24f  5f                   pop edi
// 0040f250  5e                   pop esi
// 0040f251  b80e000780           mov eax, 0x8007000e
// 0040f256  64890d00000000       mov dword ptr fs:[0], ecx
// 0040f25d  5b                   pop ebx
// 0040f25e  8be5                 mov esp, ebp
// 0040f260  5d                   pop ebp
// 0040f261  c20800               ret 8
// copied from an identical function in another client (function ?EnumConnections@?$IConnectionPointImpl@VRocCpObj@@$1?IID_IDispatch@@3U_GUID@@BVCComDynamicUnkArray@ATL@@@ATL@@UAGJPAPAUIEnumConnections@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_b32a63565f36d548.cpp