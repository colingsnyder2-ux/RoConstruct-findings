// roc 2008-06 004af1b0  unit: RBX::Network::Replicator::MarkerItem  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004af1b0
//
// 004af1b0  53                   push ebx
// 004af1b1  56                   push esi
// 004af1b2  8bf1                 mov esi, ecx
// 004af1b4  33db                 xor ebx, ebx
// 004af1b6  57                   push edi
// 004af1b7  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 004af1ba  746c                 je 0x4af228
// 004af1bc  8d642400             lea esp, [esp]
// 004af1c0  8b461c               mov eax, dword ptr [esi + 0x1c]
// 004af1c3  3bc3                 cmp eax, ebx
// 004af1c5  745c                 je 0x4af223
// 004af1c7  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004af1ca  8b5614               mov edx, dword ptr [esi + 0x14]
// 004af1cd  8d4408ff             lea eax, [eax + ecx - 1]
// 004af1d1  8bc8                 mov ecx, eax
// 004af1d3  d1e9                 shr ecx, 1
// 004af1d5  3bd1                 cmp edx, ecx
// 004af1d7  7702                 ja 0x4af1db
// 004af1d9  2bca                 sub ecx, edx
// 004af1db  8b5610               mov edx, dword ptr [esi + 0x10]
// 004af1de  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 004af1e1  83e001               and eax, 1
// 004af1e4  8b7cc104             mov edi, dword ptr [ecx + eax*8 + 4]
// 004af1e8  8d44c104             lea eax, [ecx + eax*8 + 4]
// 004af1ec  3bfb                 cmp edi, ebx
// 004af1ee  742a                 je 0x4af21a
// 004af1f0  8d5704               lea edx, [edi + 4]
// 004af1f3  83c8ff               or eax, 0xffffffff
// 004af1f6  f00fc102             lock xadd dword ptr [edx], eax
// 004af1fa  751e                 jne 0x4af21a
// 004af1fc  8b17                 mov edx, dword ptr [edi]
// 004af1fe  8b4204               mov eax, dword ptr [edx + 4]
// 004af201  8bcf                 mov ecx, edi
// 004af203  ffd0                 call eax
// 004af205  8d4f08               lea ecx, [edi + 8]
// 004af208  83caff               or edx, 0xffffffff
// 004af20b  f00fc111             lock xadd dword ptr [ecx], edx
// 004af20f  7509                 jne 0x4af21a
// 004af211  8b07                 mov eax, dword ptr [edi]
// 004af213  8b5008               mov edx, dword ptr [eax + 8]
// 004af216  8bcf                 mov ecx, edi
// 004af218  ffd2                 call edx
// 004af21a  83461cff             add dword ptr [esi + 0x1c], -1
// 004af21e  7503                 jne 0x4af223
// 004af220  895e18               mov dword ptr [esi + 0x18], ebx
// 004af223  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 004af226  7598                 jne 0x4af1c0
// 004af228  8b7e14               mov edi, dword ptr [esi + 0x14]
// 004af22b  3bfb                 cmp edi, ebx
// 004af22d  761c                 jbe 0x4af24b
// 004af22f  90                   nop 
// 004af230  8b4610               mov eax, dword ptr [esi + 0x10]
// 004af233  4f                   dec edi
// 004af234  391cb8               cmp dword ptr [eax + edi*4], ebx
// 004af237  8d04b8               lea eax, [eax + edi*4]
// 004af23a  740b                 je 0x4af247
// 004af23c  8b08                 mov ecx, dword ptr [eax]
// 004af23e  51                   push ecx
// 004af23f  e836141f00           call 0x6a067a
// 004af244  83c404               add esp, 4
// 004af247  3bfb                 cmp edi, ebx
// 004af249  77e5                 ja 0x4af230
// 004af24b  8b4610               mov eax, dword ptr [esi + 0x10]
// 004af24e  3bc3                 cmp eax, ebx
// 004af250  7409                 je 0x4af25b
// 004af252  50                   push eax
// 004af253  e822141f00           call 0x6a067a
// 004af258  83c404               add esp, 4
// 004af25b  5f                   pop edi
// 004af25c  895e10               mov dword ptr [esi + 0x10], ebx
// 004af25f  895e14               mov dword ptr [esi + 0x14], ebx
// 004af262  5e                   pop esi
// 004af263  5b                   pop ebx
// 004af264  c3                   ret 
// library templates-boost-1_34_1/deque_sp.cpp (function ?_Tidy@?$deque@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_sp.cpp
