// roc 2012-06 006d6760  unit: RBX::VInstance::?$NonFactoryProduct  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006d6760
//
// 006d6760  56                   push esi
// 006d6761  8bf1                 mov esi, ecx
// 006d6763  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 006d6767  7469                 je 0x6d67d2
// 006d6769  8b4618               mov eax, dword ptr [esi + 0x18]
// 006d676c  8b5610               mov edx, dword ptr [esi + 0x10]
// 006d676f  8bc8                 mov ecx, eax
// 006d6771  d1e9                 shr ecx, 1
// 006d6773  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 006d6776  83e001               and eax, 1
// 006d6779  8d44c104             lea eax, [ecx + eax*8 + 4]
// 006d677d  57                   push edi
// 006d677e  8b38                 mov edi, dword ptr [eax]
// 006d6780  85ff                 test edi, edi
// 006d6782  742a                 je 0x6d67ae
// 006d6784  8d5704               lea edx, [edi + 4]
// 006d6787  83c8ff               or eax, 0xffffffff
// 006d678a  f00fc102             lock xadd dword ptr [edx], eax
// 006d678e  751e                 jne 0x6d67ae
// 006d6790  8b17                 mov edx, dword ptr [edi]
// 006d6792  8b4204               mov eax, dword ptr [edx + 4]
// 006d6795  8bcf                 mov ecx, edi
// 006d6797  ffd0                 call eax
// 006d6799  8d4f08               lea ecx, [edi + 8]
// 006d679c  83caff               or edx, 0xffffffff
// 006d679f  f00fc111             lock xadd dword ptr [ecx], edx
// 006d67a3  7509                 jne 0x6d67ae
// 006d67a5  8b07                 mov eax, dword ptr [edi]
// 006d67a7  8b5008               mov edx, dword ptr [eax + 8]
// 006d67aa  8bcf                 mov ecx, edi
// 006d67ac  ffd2                 call edx
// 006d67ae  ff4618               inc dword ptr [esi + 0x18]
// 006d67b1  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006d67b4  8b4618               mov eax, dword ptr [esi + 0x18]
// 006d67b7  03c9                 add ecx, ecx
// 006d67b9  5f                   pop edi
// 006d67ba  3bc8                 cmp ecx, eax
// 006d67bc  7707                 ja 0x6d67c5
// 006d67be  c7461800000000       mov dword ptr [esi + 0x18], 0
// 006d67c5  83461cff             add dword ptr [esi + 0x1c], -1
// 006d67c9  7507                 jne 0x6d67d2
// 006d67cb  c7461800000000       mov dword ptr [esi + 0x18], 0
// 006d67d2  5e                   pop esi
// 006d67d3  c3                   ret 
// library templates-boost-1_34_1/deque_sp.cpp (function ?pop_front@?$deque@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_sp.cpp
