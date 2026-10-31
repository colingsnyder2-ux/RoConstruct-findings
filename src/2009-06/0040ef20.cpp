// roc 2009-06 0040ef20  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 436 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040ef20
//
// 0040ef20  55                   push ebp
// 0040ef21  8bec                 mov ebp, esp
// 0040ef23  6aff                 push -1
// 0040ef25  6800d58400           push 0x84d500
// 0040ef2a  64a100000000         mov eax, dword ptr fs:[0]
// 0040ef30  50                   push eax
// 0040ef31  64892500000000       mov dword ptr fs:[0], esp
// 0040ef38  83ec10               sub esp, 0x10
// 0040ef3b  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0040ef3e  53                   push ebx
// 0040ef3f  56                   push esi
// 0040ef40  57                   push edi
// 0040ef41  33ff                 xor edi, edi
// 0040ef43  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040ef46  3bc7                 cmp eax, edi
// 0040ef48  7518                 jne 0x40ef62
// 0040ef4a  b803400080           mov eax, 0x80004003
// 0040ef4f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040ef52  64890d00000000       mov dword ptr fs:[0], ecx
// 0040ef59  5f                   pop edi
// 0040ef5a  5e                   pop esi
// 0040ef5b  5b                   pop ebx
// 0040ef5c  8be5                 mov esp, ebp
// 0040ef5e  5d                   pop ebp
// 0040ef5f  c20800               ret 8
// 0040ef62  6a1c                 push 0x1c
// 0040ef64  8938                 mov dword ptr [eax], edi
// 0040ef66  897dfc               mov dword ptr [ebp - 4], edi
// 0040ef69  e8ca9a3000           call 0x718a38
// 0040ef6e  8bf0                 mov esi, eax
// 0040ef70  83c404               add esp, 4
// 0040ef73  3bf7                 cmp esi, edi
// 0040ef75  742c                 je 0x40efa3
// 0040ef77  897e04               mov dword ptr [esi + 4], edi
// 0040ef7a  897e10               mov dword ptr [esi + 0x10], edi
// 0040ef7d  897e0c               mov dword ptr [esi + 0xc], edi
// 0040ef80  897e08               mov dword ptr [esi + 8], edi
// 0040ef83  897e14               mov dword ptr [esi + 0x14], edi
// 0040ef86  897e18               mov dword ptr [esi + 0x18], edi
// 0040ef89  c706ecea8a00         mov dword ptr [esi], 0x8aeaec
// 0040ef8f  8b0d1897a300         mov ecx, dword ptr [0xa39718]
// 0040ef95  8b01                 mov eax, dword ptr [ecx]
// 0040ef97  8b5004               mov edx, dword ptr [eax + 4]
// 0040ef9a  ffd2                 call edx
// 0040ef9c  8bde                 mov ebx, esi
// 0040ef9e  895dec               mov dword ptr [ebp - 0x14], ebx
// 0040efa1  eb05                 jmp 0x40efa8
// 0040efa3  897dec               mov dword ptr [ebp - 0x14], edi
// 0040efa6  8bdf                 mov ebx, edi
// 0040efa8  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040efaf  3bdf                 cmp ebx, edi
// 0040efb1  0f8405010000         je 0x40f0bc
// 0040efb7  8b7508               mov esi, dword ptr [ebp + 8]
// 0040efba  8b4e04               mov ecx, dword ptr [esi + 4]
// 0040efbd  8b4608               mov eax, dword ptr [esi + 8]
// 0040efc0  8d0481               lea eax, [ecx + eax*4]
// 0040efc3  83c604               add esi, 4
// 0040efc6  2bc1                 sub eax, ecx
// 0040efc8  33c9                 xor ecx, ecx
// 0040efca  c1f802               sar eax, 2
// 0040efcd  ba08000000           mov edx, 8
// 0040efd2  f7e2                 mul edx
// 0040efd4  0f90c1               seto cl
// 0040efd7  c745fc02000000       mov dword ptr [ebp - 4], 2
// 0040efde  f7d9                 neg ecx
// 0040efe0  0bc8                 or ecx, eax
// 0040efe2  51                   push ecx
// 0040efe3  e8329d3000           call 0x718d1a
// 0040efe8  83c404               add esp, 4
// 0040efeb  894508               mov dword ptr [ebp + 8], eax
// 0040efee  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040eff5  3bc7                 cmp eax, edi
// 0040eff7  0f84b4000000         je 0x40f0b1
// 0040effd  8b3e                 mov edi, dword ptr [esi]
// 0040efff  8b4e04               mov ecx, dword ptr [esi + 4]
// 0040f002  8bd7                 mov edx, edi
// 0040f004  8d0c8a               lea ecx, [edx + ecx*4]
// 0040f007  8bd8                 mov ebx, eax
// 0040f009  3bf9                 cmp edi, ecx
// 0040f00b  7334                 jae 0x40f041
// 0040f00d  8d4900               lea ecx, [ecx]
// 0040f010  8b0f                 mov ecx, dword ptr [edi]
// 0040f012  85c9                 test ecx, ecx
// 0040f014  741c                 je 0x40f032
// 0040f016  8b11                 mov edx, dword ptr [ecx]
// 0040f018  8b4204               mov eax, dword ptr [edx + 4]
// 0040f01b  51                   push ecx
// 0040f01c  ffd0                 call eax
// 0040f01e  8b0f                 mov ecx, dword ptr [edi]
// 0040f020  57                   push edi
// 0040f021  56                   push esi
// 0040f022  890b                 mov dword ptr [ebx], ecx
// 0040f024  e877eaffff           call 0x40daa0
// 0040f029  894304               mov dword ptr [ebx + 4], eax
// 0040f02c  8b4508               mov eax, dword ptr [ebp + 8]
// 0040f02f  83c308               add ebx, 8
// 0040f032  8b5604               mov edx, dword ptr [esi + 4]
// 0040f035  8b0e                 mov ecx, dword ptr [esi]
// 0040f037  83c704               add edi, 4
// 0040f03a  8d1491               lea edx, [ecx + edx*4]
// 0040f03d  3bfa                 cmp edi, edx
// 0040f03f  72cf                 jb 0x40f010
// 0040f041  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 0040f044  6a02                 push 2
// 0040f046  6a00                 push 0
// 0040f048  53                   push ebx
// 0040f049  50                   push eax
// 0040f04a  8bcf                 mov ecx, edi
// 0040f04c  e80fecffff           call 0x40dc60
// 0040f051  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0040f054  50                   push eax
// 0040f055  680ce18a00           push 0x8ae10c
// 0040f05a  68f4e08a00           push 0x8ae0f4
// 0040f05f  57                   push edi
// 0040f060  e8bb6effff           call 0x405f20
// 0040f065  8bf0                 mov esi, eax
// 0040f067  85f6                 test esi, esi
// 0040f069  7d0b                 jge 0x40f076
// 0040f06b  8b17                 mov edx, dword ptr [edi]
// 0040f06d  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0040f070  6a01                 push 1
// 0040f072  8bcf                 mov ecx, edi
// 0040f074  ffd0                 call eax
// 0040f076  8bc6                 mov eax, esi
// 0040f078  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040f07b  64890d00000000       mov dword ptr fs:[0], ecx
// 0040f082  5f                   pop edi
// 0040f083  5e                   pop esi
// 0040f084  5b                   pop ebx
// 0040f085  8be5                 mov esp, ebp
// 0040f087  5d                   pop ebp
// 0040f088  c20800               ret 8
// 0040f08b  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0040f08e  e8819c3000           call 0x718d14
// 0040f093  b8bcf04000           mov eax, 0x40f0bc
// 0040f098  c3                   ret 
// 0040f099  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 0040f09c  e8739c3000           call 0x718d14
// 0040f0a1  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040f0a8  b8aef04000           mov eax, 0x40f0ae
// 0040f0ad  c3                   ret 
// 0040f0ae  8b5dec               mov ebx, dword ptr [ebp - 0x14]
// 0040f0b1  8b03                 mov eax, dword ptr [ebx]
// 0040f0b3  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0040f0b6  6a01                 push 1
// 0040f0b8  8bcb                 mov ecx, ebx
// 0040f0ba  ffd2                 call edx
// 0040f0bc  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040f0bf  5f                   pop edi
// 0040f0c0  5e                   pop esi
// 0040f0c1  b80e000780           mov eax, 0x8007000e
// 0040f0c6  64890d00000000       mov dword ptr fs:[0], ecx
// 0040f0cd  5b                   pop ebx
// 0040f0ce  8be5                 mov esp, ebp
// 0040f0d0  5d                   pop ebp
// 0040f0d1  c20800               ret 8
// copied from an identical function in another client (function ?EnumConnections@?$IConnectionPointImpl@VRocCpObj@@$1?IID_IDispatch@@3U_GUID@@BVCComDynamicUnkArray@ATL@@@ATL@@UAGJPAPAUIEnumConnections@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_b32a63565f36d548.cpp