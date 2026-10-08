// roc 2007-03 0049a790  unit: seg_00490000  size: 437 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049a790
//
// 0049a790  8b442410             mov eax, dword ptr [esp + 0x10]
// 0049a794  53                   push ebx
// 0049a795  56                   push esi
// 0049a796  8bf1                 mov esi, ecx
// 0049a798  8b08                 mov ecx, dword ptr [eax]
// 0049a79a  894c2418             mov dword ptr [esp + 0x18], ecx
// 0049a79e  8b4e04               mov ecx, dword ptr [esi + 4]
// 0049a7a1  85c9                 test ecx, ecx
// 0049a7a3  57                   push edi
// 0049a7a4  7504                 jne 0x49a7aa
// 0049a7a6  33ff                 xor edi, edi
// 0049a7a8  eb08                 jmp 0x49a7b2
// 0049a7aa  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0049a7ad  2bf9                 sub edi, ecx
// 0049a7af  c1ff02               sar edi, 2
// 0049a7b2  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0049a7b6  85db                 test ebx, ebx
// 0049a7b8  0f8481010000         je 0x49a93f
// 0049a7be  85c9                 test ecx, ecx
// 0049a7c0  7504                 jne 0x49a7c6
// 0049a7c2  33c0                 xor eax, eax
// 0049a7c4  eb08                 jmp 0x49a7ce
// 0049a7c6  8b4608               mov eax, dword ptr [esi + 8]
// 0049a7c9  2bc1                 sub eax, ecx
// 0049a7cb  c1f802               sar eax, 2
// 0049a7ce  baffffff3f           mov edx, 0x3fffffff
// 0049a7d3  2bd0                 sub edx, eax
// 0049a7d5  3bd3                 cmp edx, ebx
// 0049a7d7  7305                 jae 0x49a7de
// 0049a7d9  e83201fbff           call 0x44a910
// 0049a7de  85c9                 test ecx, ecx
// 0049a7e0  7504                 jne 0x49a7e6
// 0049a7e2  33c0                 xor eax, eax
// 0049a7e4  eb08                 jmp 0x49a7ee
// 0049a7e6  8b4608               mov eax, dword ptr [esi + 8]
// 0049a7e9  2bc1                 sub eax, ecx
// 0049a7eb  c1f802               sar eax, 2
// 0049a7ee  03c3                 add eax, ebx
// 0049a7f0  3bf8                 cmp edi, eax
// 0049a7f2  55                   push ebp
// 0049a7f3  0f83b4000000         jae 0x49a8ad
// 0049a7f9  8bc7                 mov eax, edi
// 0049a7fb  d1e8                 shr eax, 1
// 0049a7fd  baffffff3f           mov edx, 0x3fffffff
// 0049a802  2bd0                 sub edx, eax
// 0049a804  3bd7                 cmp edx, edi
// 0049a806  7304                 jae 0x49a80c
// 0049a808  33ff                 xor edi, edi
// 0049a80a  eb02                 jmp 0x49a80e
// 0049a80c  03f8                 add edi, eax
// 0049a80e  85c9                 test ecx, ecx
// 0049a810  7504                 jne 0x49a816
// 0049a812  33c0                 xor eax, eax
// 0049a814  eb08                 jmp 0x49a81e
// 0049a816  8b4608               mov eax, dword ptr [esi + 8]
// 0049a819  2bc1                 sub eax, ecx
// 0049a81b  c1f802               sar eax, 2
// 0049a81e  03c3                 add eax, ebx
// 0049a820  3bf8                 cmp edi, eax
// 0049a822  7312                 jae 0x49a836
// 0049a824  85c9                 test ecx, ecx
// 0049a826  7504                 jne 0x49a82c
// 0049a828  33ff                 xor edi, edi
// 0049a82a  eb08                 jmp 0x49a834
// 0049a82c  8b7e08               mov edi, dword ptr [esi + 8]
// 0049a82f  2bf9                 sub edi, ecx
// 0049a831  c1ff02               sar edi, 2
// 0049a834  03fb                 add edi, ebx
// 0049a836  6a00                 push 0
// 0049a838  57                   push edi
// 0049a839  e822e5f7ff           call 0x418d60
// 0049a83e  8b4e04               mov ecx, dword ptr [esi + 4]
// 0049a841  83c408               add esp, 8
// 0049a844  8be8                 mov ebp, eax
// 0049a846  8b442418             mov eax, dword ptr [esp + 0x18]
// 0049a84a  55                   push ebp
// 0049a84b  50                   push eax
// 0049a84c  51                   push ecx
// 0049a84d  8bce                 mov ecx, esi
// 0049a84f  e81c5f0d00           call 0x570770
// 0049a854  8d542420             lea edx, [esp + 0x20]
// 0049a858  52                   push edx
// 0049a859  53                   push ebx
// 0049a85a  50                   push eax
// 0049a85b  8bce                 mov ecx, esi
// 0049a85d  e8defcf9ff           call 0x43a540
// 0049a862  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0049a866  50                   push eax
// 0049a867  8b4608               mov eax, dword ptr [esi + 8]
// 0049a86a  50                   push eax
// 0049a86b  51                   push ecx
// 0049a86c  8bce                 mov ecx, esi
// 0049a86e  e8fd5e0d00           call 0x570770
// 0049a873  8b4604               mov eax, dword ptr [esi + 4]
// 0049a876  85c0                 test eax, eax
// 0049a878  7504                 jne 0x49a87e
// 0049a87a  33c9                 xor ecx, ecx
// 0049a87c  eb08                 jmp 0x49a886
// 0049a87e  8b4e08               mov ecx, dword ptr [esi + 8]
// 0049a881  2bc8                 sub ecx, eax
// 0049a883  c1f902               sar ecx, 2
// 0049a886  03d9                 add ebx, ecx
// 0049a888  85c0                 test eax, eax
// 0049a88a  7409                 je 0x49a895
// 0049a88c  50                   push eax
// 0049a88d  e85e381800           call 0x61e0f0
// 0049a892  83c404               add esp, 4
// 0049a895  8d54bd00             lea edx, [ebp + edi*4]
// 0049a899  8d449d00             lea eax, [ebp + ebx*4]
// 0049a89d  896e04               mov dword ptr [esi + 4], ebp
// 0049a8a0  5d                   pop ebp
// 0049a8a1  5f                   pop edi
// 0049a8a2  89560c               mov dword ptr [esi + 0xc], edx
// 0049a8a5  894608               mov dword ptr [esi + 8], eax
// 0049a8a8  5e                   pop esi
// 0049a8a9  5b                   pop ebx
// 0049a8aa  c21000               ret 0x10
// 0049a8ad  8b6e08               mov ebp, dword ptr [esi + 8]
// 0049a8b0  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0049a8b4  8bcd                 mov ecx, ebp
// 0049a8b6  2bcf                 sub ecx, edi
// 0049a8b8  c1f902               sar ecx, 2
// 0049a8bb  8d049d00000000       lea eax, [ebx*4]
// 0049a8c2  3bcb                 cmp ecx, ebx
// 0049a8c4  8944241c             mov dword ptr [esp + 0x1c], eax
// 0049a8c8  8bce                 mov ecx, esi
// 0049a8ca  7346                 jae 0x49a912
// 0049a8cc  03c7                 add eax, edi
// 0049a8ce  50                   push eax
// 0049a8cf  55                   push ebp
// 0049a8d0  57                   push edi
// 0049a8d1  e89a5e0d00           call 0x570770
// 0049a8d6  8b4608               mov eax, dword ptr [esi + 8]
// 0049a8d9  8bc8                 mov ecx, eax
// 0049a8db  2bcf                 sub ecx, edi
// 0049a8dd  c1f902               sar ecx, 2
// 0049a8e0  8d542420             lea edx, [esp + 0x20]
// 0049a8e4  52                   push edx
// 0049a8e5  2bd9                 sub ebx, ecx
// 0049a8e7  53                   push ebx
// 0049a8e8  50                   push eax
// 0049a8e9  8bce                 mov ecx, esi
// 0049a8eb  e850fcf9ff           call 0x43a540
// 0049a8f0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0049a8f4  014608               add dword ptr [esi + 8], eax
// 0049a8f7  8b7608               mov esi, dword ptr [esi + 8]
// 0049a8fa  8d542420             lea edx, [esp + 0x20]
// 0049a8fe  52                   push edx
// 0049a8ff  2bf0                 sub esi, eax
// 0049a901  56                   push esi
// 0049a902  57                   push edi
// 0049a903  e8f8edf9ff           call 0x439700
// 0049a908  83c40c               add esp, 0xc
// 0049a90b  5d                   pop ebp
// 0049a90c  5f                   pop edi
// 0049a90d  5e                   pop esi
// 0049a90e  5b                   pop ebx
// 0049a90f  c21000               ret 0x10
// 0049a912  55                   push ebp
// 0049a913  8bdd                 mov ebx, ebp
// 0049a915  2bd8                 sub ebx, eax
// 0049a917  55                   push ebp
// 0049a918  53                   push ebx
// 0049a919  e8525e0d00           call 0x570770
// 0049a91e  55                   push ebp
// 0049a91f  53                   push ebx
// 0049a920  57                   push edi
// 0049a921  894608               mov dword ptr [esi + 8], eax
// 0049a924  e857da1400           call 0x5e8380
// 0049a929  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0049a92d  8d44242c             lea eax, [esp + 0x2c]
// 0049a931  50                   push eax
// 0049a932  03cf                 add ecx, edi
// 0049a934  51                   push ecx
// 0049a935  57                   push edi
// 0049a936  e8c5edf9ff           call 0x439700
// 0049a93b  83c418               add esp, 0x18
// 0049a93e  5d                   pop ebp
// 0049a93f  5f                   pop edi
// 0049a940  5e                   pop esi
// 0049a941  5b                   pop ebx
// 0049a942  c21000               ret 0x10
// library rbxgs/humanoid\Humanoid.cpp (function ?_Insert_n@?$vector@PAVPrimitive@RBX@@V?$allocator@PAVPrimitive@RBX@@@std@@@std@@IAEXV?$_Vector_iterator@PAVPrimitive@RBX@@V?$allocator@PAVPrimitive@RBX@@@std@@@2@IABQAVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
