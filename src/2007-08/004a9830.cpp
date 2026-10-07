// roc 2007-08 004a9830  unit: RBX::VInstance::?$NonFactoryProduct  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a9830
//
// 004a9830  56                   push esi
// 004a9831  8bf1                 mov esi, ecx
// 004a9833  837e1000             cmp dword ptr [esi + 0x10], 0
// 004a9837  746a                 je 0x4a98a3
// 004a9839  8b460c               mov eax, dword ptr [esi + 0xc]
// 004a983c  8b5604               mov edx, dword ptr [esi + 4]
// 004a983f  8bc8                 mov ecx, eax
// 004a9841  d1e9                 shr ecx, 1
// 004a9843  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 004a9846  83e001               and eax, 1
// 004a9849  8d44c104             lea eax, [ecx + eax*8 + 4]
// 004a984d  57                   push edi
// 004a984e  8b38                 mov edi, dword ptr [eax]
// 004a9850  85ff                 test edi, edi
// 004a9852  742a                 je 0x4a987e
// 004a9854  8d5704               lea edx, [edi + 4]
// 004a9857  83c8ff               or eax, 0xffffffff
// 004a985a  f00fc102             lock xadd dword ptr [edx], eax
// 004a985e  751e                 jne 0x4a987e
// 004a9860  8b17                 mov edx, dword ptr [edi]
// 004a9862  8b4204               mov eax, dword ptr [edx + 4]
// 004a9865  8bcf                 mov ecx, edi
// 004a9867  ffd0                 call eax
// 004a9869  8d4f08               lea ecx, [edi + 8]
// 004a986c  83caff               or edx, 0xffffffff
// 004a986f  f00fc111             lock xadd dword ptr [ecx], edx
// 004a9873  7509                 jne 0x4a987e
// 004a9875  8b07                 mov eax, dword ptr [edi]
// 004a9877  8b5008               mov edx, dword ptr [eax + 8]
// 004a987a  8bcf                 mov ecx, edi
// 004a987c  ffd2                 call edx
// 004a987e  83460c01             add dword ptr [esi + 0xc], 1
// 004a9882  8b4e08               mov ecx, dword ptr [esi + 8]
// 004a9885  8b460c               mov eax, dword ptr [esi + 0xc]
// 004a9888  03c9                 add ecx, ecx
// 004a988a  3bc8                 cmp ecx, eax
// 004a988c  5f                   pop edi
// 004a988d  7707                 ja 0x4a9896
// 004a988f  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004a9896  834610ff             add dword ptr [esi + 0x10], -1
// 004a989a  7507                 jne 0x4a98a3
// 004a989c  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004a98a3  5e                   pop esi
// 004a98a4  c3                   ret 
// library templates-boost-1_34_1/deque_sp.cpp (function ?pop_front@?$deque@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_sp.cpp
