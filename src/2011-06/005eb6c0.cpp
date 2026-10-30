// from server: 100% by auto
// roc 2011-06 005eb6c0  unit: RBX::VInstance::?$NonFactoryProduct  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005eb6c0
//
// 005eb6c0  56                   push esi
// 005eb6c1  8bf1                 mov esi, ecx
// 005eb6c3  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 005eb6c7  7469                 je 0x5eb732
// 005eb6c9  8b4618               mov eax, dword ptr [esi + 0x18]
// 005eb6cc  8b5610               mov edx, dword ptr [esi + 0x10]
// 005eb6cf  8bc8                 mov ecx, eax
// 005eb6d1  d1e9                 shr ecx, 1
// 005eb6d3  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 005eb6d6  83e001               and eax, 1
// 005eb6d9  8d44c104             lea eax, [ecx + eax*8 + 4]
// 005eb6dd  57                   push edi
// 005eb6de  8b38                 mov edi, dword ptr [eax]
// 005eb6e0  85ff                 test edi, edi
// 005eb6e2  742a                 je 0x5eb70e
// 005eb6e4  8d5704               lea edx, [edi + 4]
// 005eb6e7  83c8ff               or eax, 0xffffffff
// 005eb6ea  f00fc102             lock xadd dword ptr [edx], eax
// 005eb6ee  751e                 jne 0x5eb70e
// 005eb6f0  8b17                 mov edx, dword ptr [edi]
// 005eb6f2  8b4204               mov eax, dword ptr [edx + 4]
// 005eb6f5  8bcf                 mov ecx, edi
// 005eb6f7  ffd0                 call eax
// 005eb6f9  8d4f08               lea ecx, [edi + 8]
// 005eb6fc  83caff               or edx, 0xffffffff
// 005eb6ff  f00fc111             lock xadd dword ptr [ecx], edx
// 005eb703  7509                 jne 0x5eb70e
// 005eb705  8b07                 mov eax, dword ptr [edi]
// 005eb707  8b5008               mov edx, dword ptr [eax + 8]
// 005eb70a  8bcf                 mov ecx, edi
// 005eb70c  ffd2                 call edx
// 005eb70e  ff4618               inc dword ptr [esi + 0x18]
// 005eb711  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005eb714  8b4618               mov eax, dword ptr [esi + 0x18]
// 005eb717  03c9                 add ecx, ecx
// 005eb719  5f                   pop edi
// 005eb71a  3bc8                 cmp ecx, eax
// 005eb71c  7707                 ja 0x5eb725
// 005eb71e  c7461800000000       mov dword ptr [esi + 0x18], 0
// 005eb725  83461cff             add dword ptr [esi + 0x1c], -1
// 005eb729  7507                 jne 0x5eb732
// 005eb72b  c7461800000000       mov dword ptr [esi + 0x18], 0
// 005eb732  5e                   pop esi
// 005eb733  c3                   ret 
// library templates-boost-1_34_1/deque_sp.cpp (function ?pop_front@?$deque@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_sp.cpp
