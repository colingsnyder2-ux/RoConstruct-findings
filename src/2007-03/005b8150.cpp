// roc 2007-03 005b8150  unit: seg_005b0000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b8150
//
// 005b8150  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b8154  8b542408             mov edx, dword ptr [esp + 8]
// 005b8158  3bca                 cmp ecx, edx
// 005b815a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005b815e  7414                 je 0x5b8174
// 005b8160  56                   push esi
// 005b8161  85c0                 test eax, eax
// 005b8163  7404                 je 0x5b8169
// 005b8165  8b31                 mov esi, dword ptr [ecx]
// 005b8167  8930                 mov dword ptr [eax], esi
// 005b8169  83c104               add ecx, 4
// 005b816c  83c004               add eax, 4
// 005b816f  3bca                 cmp ecx, edx
// 005b8171  75ee                 jne 0x5b8161
// 005b8173  5e                   pop esi
// 005b8174  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ??$_Uninit_copy@PAVBrickColor@RBX@@PAV12@V?$allocator@VBrickColor@RBX@@@std@@@std@@YAPAVBrickColor@RBX@@PAV12@00AAV?$allocator@VBrickColor@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
