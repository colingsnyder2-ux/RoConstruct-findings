// from server: 100% by auto
// roc 2011-06 007c94f0  unit: RBX::ChatLine  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007c94f0
//
// 007c94f0  56                   push esi
// 007c94f1  8bf1                 mov esi, ecx
// 007c94f3  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007c94f6  85c0                 test eax, eax
// 007c94f8  7460                 je 0x7c955a
// 007c94fa  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007c94fd  8b5614               mov edx, dword ptr [esi + 0x14]
// 007c9500  8d4408ff             lea eax, [eax + ecx - 1]
// 007c9504  8bc8                 mov ecx, eax
// 007c9506  d1e9                 shr ecx, 1
// 007c9508  3bd1                 cmp edx, ecx
// 007c950a  7702                 ja 0x7c950e
// 007c950c  2bca                 sub ecx, edx
// 007c950e  8b5610               mov edx, dword ptr [esi + 0x10]
// 007c9511  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 007c9514  83e001               and eax, 1
// 007c9517  8d44c104             lea eax, [ecx + eax*8 + 4]
// 007c951b  57                   push edi
// 007c951c  8b38                 mov edi, dword ptr [eax]
// 007c951e  85ff                 test edi, edi
// 007c9520  742a                 je 0x7c954c
// 007c9522  8d5704               lea edx, [edi + 4]
// 007c9525  83c8ff               or eax, 0xffffffff
// 007c9528  f00fc102             lock xadd dword ptr [edx], eax
// 007c952c  751e                 jne 0x7c954c
// 007c952e  8b17                 mov edx, dword ptr [edi]
// 007c9530  8b4204               mov eax, dword ptr [edx + 4]
// 007c9533  8bcf                 mov ecx, edi
// 007c9535  ffd0                 call eax
// 007c9537  8d4f08               lea ecx, [edi + 8]
// 007c953a  83caff               or edx, 0xffffffff
// 007c953d  f00fc111             lock xadd dword ptr [ecx], edx
// 007c9541  7509                 jne 0x7c954c
// 007c9543  8b07                 mov eax, dword ptr [edi]
// 007c9545  8b5008               mov edx, dword ptr [eax + 8]
// 007c9548  8bcf                 mov ecx, edi
// 007c954a  ffd2                 call edx
// 007c954c  83461cff             add dword ptr [esi + 0x1c], -1
// 007c9550  5f                   pop edi
// 007c9551  7507                 jne 0x7c955a
// 007c9553  c7461800000000       mov dword ptr [esi + 0x18], 0
// 007c955a  5e                   pop esi
// 007c955b  c3                   ret 
// library templates-boost-1_34_1/deque_sp.cpp (function ?pop_back@?$deque@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_sp.cpp
