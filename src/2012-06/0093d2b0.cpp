// from server: 100% by auto
// roc 2012-06 0093d2b0  unit: RBX::ChatLine  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0093d2b0
//
// 0093d2b0  56                   push esi
// 0093d2b1  8bf1                 mov esi, ecx
// 0093d2b3  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0093d2b6  85c0                 test eax, eax
// 0093d2b8  7460                 je 0x93d31a
// 0093d2ba  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0093d2bd  8b5614               mov edx, dword ptr [esi + 0x14]
// 0093d2c0  8d4408ff             lea eax, [eax + ecx - 1]
// 0093d2c4  8bc8                 mov ecx, eax
// 0093d2c6  d1e9                 shr ecx, 1
// 0093d2c8  3bd1                 cmp edx, ecx
// 0093d2ca  7702                 ja 0x93d2ce
// 0093d2cc  2bca                 sub ecx, edx
// 0093d2ce  8b5610               mov edx, dword ptr [esi + 0x10]
// 0093d2d1  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 0093d2d4  83e001               and eax, 1
// 0093d2d7  8d44c104             lea eax, [ecx + eax*8 + 4]
// 0093d2db  57                   push edi
// 0093d2dc  8b38                 mov edi, dword ptr [eax]
// 0093d2de  85ff                 test edi, edi
// 0093d2e0  742a                 je 0x93d30c
// 0093d2e2  8d5704               lea edx, [edi + 4]
// 0093d2e5  83c8ff               or eax, 0xffffffff
// 0093d2e8  f00fc102             lock xadd dword ptr [edx], eax
// 0093d2ec  751e                 jne 0x93d30c
// 0093d2ee  8b17                 mov edx, dword ptr [edi]
// 0093d2f0  8b4204               mov eax, dword ptr [edx + 4]
// 0093d2f3  8bcf                 mov ecx, edi
// 0093d2f5  ffd0                 call eax
// 0093d2f7  8d4f08               lea ecx, [edi + 8]
// 0093d2fa  83caff               or edx, 0xffffffff
// 0093d2fd  f00fc111             lock xadd dword ptr [ecx], edx
// 0093d301  7509                 jne 0x93d30c
// 0093d303  8b07                 mov eax, dword ptr [edi]
// 0093d305  8b5008               mov edx, dword ptr [eax + 8]
// 0093d308  8bcf                 mov ecx, edi
// 0093d30a  ffd2                 call edx
// 0093d30c  83461cff             add dword ptr [esi + 0x1c], -1
// 0093d310  5f                   pop edi
// 0093d311  7507                 jne 0x93d31a
// 0093d313  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0093d31a  5e                   pop esi
// 0093d31b  c3                   ret 
// library templates-boost-1_34_1/deque_sp.cpp (function ?pop_back@?$deque@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_sp.cpp
