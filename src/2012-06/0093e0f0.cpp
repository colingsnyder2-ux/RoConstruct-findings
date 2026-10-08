// from server: 100% by auto
// roc 2012-06 0093e0f0  unit: RBX::ChatLine  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0093e0f0
//
// 0093e0f0  53                   push ebx
// 0093e0f1  56                   push esi
// 0093e0f2  8bf1                 mov esi, ecx
// 0093e0f4  33db                 xor ebx, ebx
// 0093e0f6  57                   push edi
// 0093e0f7  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 0093e0fa  746c                 je 0x93e168
// 0093e0fc  8d642400             lea esp, [esp]
// 0093e100  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0093e103  3bc3                 cmp eax, ebx
// 0093e105  745c                 je 0x93e163
// 0093e107  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0093e10a  8b5614               mov edx, dword ptr [esi + 0x14]
// 0093e10d  8d4408ff             lea eax, [eax + ecx - 1]
// 0093e111  8bc8                 mov ecx, eax
// 0093e113  d1e9                 shr ecx, 1
// 0093e115  3bd1                 cmp edx, ecx
// 0093e117  7702                 ja 0x93e11b
// 0093e119  2bca                 sub ecx, edx
// 0093e11b  8b5610               mov edx, dword ptr [esi + 0x10]
// 0093e11e  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 0093e121  83e001               and eax, 1
// 0093e124  8b7cc104             mov edi, dword ptr [ecx + eax*8 + 4]
// 0093e128  8d44c104             lea eax, [ecx + eax*8 + 4]
// 0093e12c  3bfb                 cmp edi, ebx
// 0093e12e  742a                 je 0x93e15a
// 0093e130  8d5704               lea edx, [edi + 4]
// 0093e133  83c8ff               or eax, 0xffffffff
// 0093e136  f00fc102             lock xadd dword ptr [edx], eax
// 0093e13a  751e                 jne 0x93e15a
// 0093e13c  8b17                 mov edx, dword ptr [edi]
// 0093e13e  8b4204               mov eax, dword ptr [edx + 4]
// 0093e141  8bcf                 mov ecx, edi
// 0093e143  ffd0                 call eax
// 0093e145  8d4f08               lea ecx, [edi + 8]
// 0093e148  83caff               or edx, 0xffffffff
// 0093e14b  f00fc111             lock xadd dword ptr [ecx], edx
// 0093e14f  7509                 jne 0x93e15a
// 0093e151  8b07                 mov eax, dword ptr [edi]
// 0093e153  8b5008               mov edx, dword ptr [eax + 8]
// 0093e156  8bcf                 mov ecx, edi
// 0093e158  ffd2                 call edx
// 0093e15a  83461cff             add dword ptr [esi + 0x1c], -1
// 0093e15e  7503                 jne 0x93e163
// 0093e160  895e18               mov dword ptr [esi + 0x18], ebx
// 0093e163  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 0093e166  7598                 jne 0x93e100
// 0093e168  8b7e14               mov edi, dword ptr [esi + 0x14]
// 0093e16b  3bfb                 cmp edi, ebx
// 0093e16d  761c                 jbe 0x93e18b
// 0093e16f  90                   nop 
// 0093e170  8b4610               mov eax, dword ptr [esi + 0x10]
// 0093e173  4f                   dec edi
// 0093e174  391cb8               cmp dword ptr [eax + edi*4], ebx
// 0093e177  8d04b8               lea eax, [eax + edi*4]
// 0093e17a  740b                 je 0x93e187
// 0093e17c  8b08                 mov ecx, dword ptr [eax]
// 0093e17e  51                   push ecx
// 0093e17f  e8903f0400           call 0x982114
// 0093e184  83c404               add esp, 4
// 0093e187  3bfb                 cmp edi, ebx
// 0093e189  77e5                 ja 0x93e170
// 0093e18b  8b4610               mov eax, dword ptr [esi + 0x10]
// 0093e18e  3bc3                 cmp eax, ebx
// 0093e190  7409                 je 0x93e19b
// 0093e192  50                   push eax
// 0093e193  e87c3f0400           call 0x982114
// 0093e198  83c404               add esp, 4
// 0093e19b  5f                   pop edi
// 0093e19c  895e10               mov dword ptr [esi + 0x10], ebx
// 0093e19f  895e14               mov dword ptr [esi + 0x14], ebx
// 0093e1a2  5e                   pop esi
// 0093e1a3  5b                   pop ebx
// 0093e1a4  c3                   ret 
// library templates-boost-1_34_1/deque_sp.cpp (function ?_Tidy@?$deque@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_sp.cpp
