// roc 2007-03 0049f190  unit: seg_00490000  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049f190
//
// 0049f190  56                   push esi
// 0049f191  8bf1                 mov esi, ecx
// 0049f193  837e1000             cmp dword ptr [esi + 0x10], 0
// 0049f197  746a                 je 0x49f203
// 0049f199  8b460c               mov eax, dword ptr [esi + 0xc]
// 0049f19c  8b5604               mov edx, dword ptr [esi + 4]
// 0049f19f  8bc8                 mov ecx, eax
// 0049f1a1  d1e9                 shr ecx, 1
// 0049f1a3  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 0049f1a6  83e001               and eax, 1
// 0049f1a9  8d44c104             lea eax, [ecx + eax*8 + 4]
// 0049f1ad  57                   push edi
// 0049f1ae  8b38                 mov edi, dword ptr [eax]
// 0049f1b0  85ff                 test edi, edi
// 0049f1b2  742a                 je 0x49f1de
// 0049f1b4  8d5704               lea edx, [edi + 4]
// 0049f1b7  83c8ff               or eax, 0xffffffff
// 0049f1ba  f00fc102             lock xadd dword ptr [edx], eax
// 0049f1be  751e                 jne 0x49f1de
// 0049f1c0  8b17                 mov edx, dword ptr [edi]
// 0049f1c2  8b4204               mov eax, dword ptr [edx + 4]
// 0049f1c5  8bcf                 mov ecx, edi
// 0049f1c7  ffd0                 call eax
// 0049f1c9  8d4f08               lea ecx, [edi + 8]
// 0049f1cc  83caff               or edx, 0xffffffff
// 0049f1cf  f00fc111             lock xadd dword ptr [ecx], edx
// 0049f1d3  7509                 jne 0x49f1de
// 0049f1d5  8b07                 mov eax, dword ptr [edi]
// 0049f1d7  8b5008               mov edx, dword ptr [eax + 8]
// 0049f1da  8bcf                 mov ecx, edi
// 0049f1dc  ffd2                 call edx
// 0049f1de  83460c01             add dword ptr [esi + 0xc], 1
// 0049f1e2  8b4e08               mov ecx, dword ptr [esi + 8]
// 0049f1e5  8b460c               mov eax, dword ptr [esi + 0xc]
// 0049f1e8  03c9                 add ecx, ecx
// 0049f1ea  3bc8                 cmp ecx, eax
// 0049f1ec  5f                   pop edi
// 0049f1ed  7707                 ja 0x49f1f6
// 0049f1ef  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0049f1f6  834610ff             add dword ptr [esi + 0x10], -1
// 0049f1fa  7507                 jne 0x49f203
// 0049f1fc  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0049f203  5e                   pop esi
// 0049f204  c3                   ret 
// library rbxgs-net/Replicator.cpp (function ?pop_front@?$deque@V?$shared_ptr@VMarker@Network@RBX@@@boost@@V?$allocator@V?$shared_ptr@VMarker@Network@RBX@@@boost@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
