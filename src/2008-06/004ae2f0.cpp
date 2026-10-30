// from server: 100% by auto
// roc 2008-06 004ae2f0  unit: RBX::Network::VClient::?$FactoryProduct  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ae2f0
//
// 004ae2f0  56                   push esi
// 004ae2f1  8bf1                 mov esi, ecx
// 004ae2f3  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 004ae2f7  7469                 je 0x4ae362
// 004ae2f9  8b4618               mov eax, dword ptr [esi + 0x18]
// 004ae2fc  8b5610               mov edx, dword ptr [esi + 0x10]
// 004ae2ff  8bc8                 mov ecx, eax
// 004ae301  d1e9                 shr ecx, 1
// 004ae303  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 004ae306  83e001               and eax, 1
// 004ae309  8d44c104             lea eax, [ecx + eax*8 + 4]
// 004ae30d  57                   push edi
// 004ae30e  8b38                 mov edi, dword ptr [eax]
// 004ae310  85ff                 test edi, edi
// 004ae312  742a                 je 0x4ae33e
// 004ae314  8d5704               lea edx, [edi + 4]
// 004ae317  83c8ff               or eax, 0xffffffff
// 004ae31a  f00fc102             lock xadd dword ptr [edx], eax
// 004ae31e  751e                 jne 0x4ae33e
// 004ae320  8b17                 mov edx, dword ptr [edi]
// 004ae322  8b4204               mov eax, dword ptr [edx + 4]
// 004ae325  8bcf                 mov ecx, edi
// 004ae327  ffd0                 call eax
// 004ae329  8d4f08               lea ecx, [edi + 8]
// 004ae32c  83caff               or edx, 0xffffffff
// 004ae32f  f00fc111             lock xadd dword ptr [ecx], edx
// 004ae333  7509                 jne 0x4ae33e
// 004ae335  8b07                 mov eax, dword ptr [edi]
// 004ae337  8b5008               mov edx, dword ptr [eax + 8]
// 004ae33a  8bcf                 mov ecx, edi
// 004ae33c  ffd2                 call edx
// 004ae33e  ff4618               inc dword ptr [esi + 0x18]
// 004ae341  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004ae344  8b4618               mov eax, dword ptr [esi + 0x18]
// 004ae347  03c9                 add ecx, ecx
// 004ae349  5f                   pop edi
// 004ae34a  3bc8                 cmp ecx, eax
// 004ae34c  7707                 ja 0x4ae355
// 004ae34e  c7461800000000       mov dword ptr [esi + 0x18], 0
// 004ae355  83461cff             add dword ptr [esi + 0x1c], -1
// 004ae359  7507                 jne 0x4ae362
// 004ae35b  c7461800000000       mov dword ptr [esi + 0x18], 0
// 004ae362  5e                   pop esi
// 004ae363  c3                   ret 
// library templates-boost-1_34_1/deque_sp.cpp (function ?pop_front@?$deque@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_sp.cpp
