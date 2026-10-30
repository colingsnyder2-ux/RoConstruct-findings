// from server: 100% by auto
// roc 2010-06 0076b3c0  unit: RBX::ImageButton  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0076b3c0
//
// 0076b3c0  56                   push esi
// 0076b3c1  8bf1                 mov esi, ecx
// 0076b3c3  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0076b3c6  85c0                 test eax, eax
// 0076b3c8  7460                 je 0x76b42a
// 0076b3ca  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0076b3cd  8b5614               mov edx, dword ptr [esi + 0x14]
// 0076b3d0  8d4408ff             lea eax, [eax + ecx - 1]
// 0076b3d4  8bc8                 mov ecx, eax
// 0076b3d6  d1e9                 shr ecx, 1
// 0076b3d8  3bd1                 cmp edx, ecx
// 0076b3da  7702                 ja 0x76b3de
// 0076b3dc  2bca                 sub ecx, edx
// 0076b3de  8b5610               mov edx, dword ptr [esi + 0x10]
// 0076b3e1  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 0076b3e4  83e001               and eax, 1
// 0076b3e7  8d44c104             lea eax, [ecx + eax*8 + 4]
// 0076b3eb  57                   push edi
// 0076b3ec  8b38                 mov edi, dword ptr [eax]
// 0076b3ee  85ff                 test edi, edi
// 0076b3f0  742a                 je 0x76b41c
// 0076b3f2  8d5704               lea edx, [edi + 4]
// 0076b3f5  83c8ff               or eax, 0xffffffff
// 0076b3f8  f00fc102             lock xadd dword ptr [edx], eax
// 0076b3fc  751e                 jne 0x76b41c
// 0076b3fe  8b17                 mov edx, dword ptr [edi]
// 0076b400  8b4204               mov eax, dword ptr [edx + 4]
// 0076b403  8bcf                 mov ecx, edi
// 0076b405  ffd0                 call eax
// 0076b407  8d4f08               lea ecx, [edi + 8]
// 0076b40a  83caff               or edx, 0xffffffff
// 0076b40d  f00fc111             lock xadd dword ptr [ecx], edx
// 0076b411  7509                 jne 0x76b41c
// 0076b413  8b07                 mov eax, dword ptr [edi]
// 0076b415  8b5008               mov edx, dword ptr [eax + 8]
// 0076b418  8bcf                 mov ecx, edi
// 0076b41a  ffd2                 call edx
// 0076b41c  83461cff             add dword ptr [esi + 0x1c], -1
// 0076b420  5f                   pop edi
// 0076b421  7507                 jne 0x76b42a
// 0076b423  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0076b42a  5e                   pop esi
// 0076b42b  c3                   ret 
// library templates-boost-1_34_1/deque_sp.cpp (function ?pop_back@?$deque@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_sp.cpp
