// from server: 100% by auto
// roc 2009-06 005f53a0  unit: G3D::VVector3::V?$Value::?$FactoryProduct  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f53a0
//
// 005f53a0  56                   push esi
// 005f53a1  8bf1                 mov esi, ecx
// 005f53a3  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 005f53a7  7469                 je 0x5f5412
// 005f53a9  8b4618               mov eax, dword ptr [esi + 0x18]
// 005f53ac  8b5610               mov edx, dword ptr [esi + 0x10]
// 005f53af  8bc8                 mov ecx, eax
// 005f53b1  d1e9                 shr ecx, 1
// 005f53b3  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 005f53b6  83e001               and eax, 1
// 005f53b9  8d44c104             lea eax, [ecx + eax*8 + 4]
// 005f53bd  57                   push edi
// 005f53be  8b38                 mov edi, dword ptr [eax]
// 005f53c0  85ff                 test edi, edi
// 005f53c2  742a                 je 0x5f53ee
// 005f53c4  8d5704               lea edx, [edi + 4]
// 005f53c7  83c8ff               or eax, 0xffffffff
// 005f53ca  f00fc102             lock xadd dword ptr [edx], eax
// 005f53ce  751e                 jne 0x5f53ee
// 005f53d0  8b17                 mov edx, dword ptr [edi]
// 005f53d2  8b4204               mov eax, dword ptr [edx + 4]
// 005f53d5  8bcf                 mov ecx, edi
// 005f53d7  ffd0                 call eax
// 005f53d9  8d4f08               lea ecx, [edi + 8]
// 005f53dc  83caff               or edx, 0xffffffff
// 005f53df  f00fc111             lock xadd dword ptr [ecx], edx
// 005f53e3  7509                 jne 0x5f53ee
// 005f53e5  8b07                 mov eax, dword ptr [edi]
// 005f53e7  8b5008               mov edx, dword ptr [eax + 8]
// 005f53ea  8bcf                 mov ecx, edi
// 005f53ec  ffd2                 call edx
// 005f53ee  ff4618               inc dword ptr [esi + 0x18]
// 005f53f1  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005f53f4  8b4618               mov eax, dword ptr [esi + 0x18]
// 005f53f7  03c9                 add ecx, ecx
// 005f53f9  5f                   pop edi
// 005f53fa  3bc8                 cmp ecx, eax
// 005f53fc  7707                 ja 0x5f5405
// 005f53fe  c7461800000000       mov dword ptr [esi + 0x18], 0
// 005f5405  83461cff             add dword ptr [esi + 0x1c], -1
// 005f5409  7507                 jne 0x5f5412
// 005f540b  c7461800000000       mov dword ptr [esi + 0x18], 0
// 005f5412  5e                   pop esi
// 005f5413  c3                   ret 
// library templates-boost-1_34_1/deque_sp.cpp (function ?pop_front@?$deque@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_sp.cpp
