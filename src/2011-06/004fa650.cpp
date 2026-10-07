// roc 2011-06 004fa650  unit: RBX::Network::Replicator  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004fa650
//
// 004fa650  53                   push ebx
// 004fa651  56                   push esi
// 004fa652  8bf1                 mov esi, ecx
// 004fa654  33db                 xor ebx, ebx
// 004fa656  57                   push edi
// 004fa657  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 004fa65a  746c                 je 0x4fa6c8
// 004fa65c  8d642400             lea esp, [esp]
// 004fa660  8b461c               mov eax, dword ptr [esi + 0x1c]
// 004fa663  3bc3                 cmp eax, ebx
// 004fa665  745c                 je 0x4fa6c3
// 004fa667  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004fa66a  8b5614               mov edx, dword ptr [esi + 0x14]
// 004fa66d  8d4408ff             lea eax, [eax + ecx - 1]
// 004fa671  8bc8                 mov ecx, eax
// 004fa673  d1e9                 shr ecx, 1
// 004fa675  3bd1                 cmp edx, ecx
// 004fa677  7702                 ja 0x4fa67b
// 004fa679  2bca                 sub ecx, edx
// 004fa67b  8b5610               mov edx, dword ptr [esi + 0x10]
// 004fa67e  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 004fa681  83e001               and eax, 1
// 004fa684  8b7cc104             mov edi, dword ptr [ecx + eax*8 + 4]
// 004fa688  8d44c104             lea eax, [ecx + eax*8 + 4]
// 004fa68c  3bfb                 cmp edi, ebx
// 004fa68e  742a                 je 0x4fa6ba
// 004fa690  8d5704               lea edx, [edi + 4]
// 004fa693  83c8ff               or eax, 0xffffffff
// 004fa696  f00fc102             lock xadd dword ptr [edx], eax
// 004fa69a  751e                 jne 0x4fa6ba
// 004fa69c  8b17                 mov edx, dword ptr [edi]
// 004fa69e  8b4204               mov eax, dword ptr [edx + 4]
// 004fa6a1  8bcf                 mov ecx, edi
// 004fa6a3  ffd0                 call eax
// 004fa6a5  8d4f08               lea ecx, [edi + 8]
// 004fa6a8  83caff               or edx, 0xffffffff
// 004fa6ab  f00fc111             lock xadd dword ptr [ecx], edx
// 004fa6af  7509                 jne 0x4fa6ba
// 004fa6b1  8b07                 mov eax, dword ptr [edi]
// 004fa6b3  8b5008               mov edx, dword ptr [eax + 8]
// 004fa6b6  8bcf                 mov ecx, edi
// 004fa6b8  ffd2                 call edx
// 004fa6ba  83461cff             add dword ptr [esi + 0x1c], -1
// 004fa6be  7503                 jne 0x4fa6c3
// 004fa6c0  895e18               mov dword ptr [esi + 0x18], ebx
// 004fa6c3  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 004fa6c6  7598                 jne 0x4fa660
// 004fa6c8  8b7e14               mov edi, dword ptr [esi + 0x14]
// 004fa6cb  3bfb                 cmp edi, ebx
// 004fa6cd  761c                 jbe 0x4fa6eb
// 004fa6cf  90                   nop 
// 004fa6d0  8b4610               mov eax, dword ptr [esi + 0x10]
// 004fa6d3  4f                   dec edi
// 004fa6d4  391cb8               cmp dword ptr [eax + edi*4], ebx
// 004fa6d7  8d04b8               lea eax, [eax + edi*4]
// 004fa6da  740b                 je 0x4fa6e7
// 004fa6dc  8b08                 mov ecx, dword ptr [eax]
// 004fa6de  51                   push ecx
// 004fa6df  e874f93000           call 0x80a058
// 004fa6e4  83c404               add esp, 4
// 004fa6e7  3bfb                 cmp edi, ebx
// 004fa6e9  77e5                 ja 0x4fa6d0
// 004fa6eb  8b4610               mov eax, dword ptr [esi + 0x10]
// 004fa6ee  3bc3                 cmp eax, ebx
// 004fa6f0  7409                 je 0x4fa6fb
// 004fa6f2  50                   push eax
// 004fa6f3  e860f93000           call 0x80a058
// 004fa6f8  83c404               add esp, 4
// 004fa6fb  5f                   pop edi
// 004fa6fc  895e10               mov dword ptr [esi + 0x10], ebx
// 004fa6ff  895e14               mov dword ptr [esi + 0x14], ebx
// 004fa702  5e                   pop esi
// 004fa703  5b                   pop ebx
// 004fa704  c3                   ret 
// library templates-boost-1_34_1/deque_sp.cpp (function ?_Tidy@?$deque@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_sp.cpp
