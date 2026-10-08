// roc 2012-06 00707710  unit: MemoryBinder  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00707710
//
// 00707710  56                   push esi
// 00707711  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00707715  85f6                 test esi, esi
// 00707717  763c                 jbe 0x707755
// 00707719  8b542410             mov edx, dword ptr [esp + 0x10]
// 0070771d  8b442408             mov eax, dword ptr [esp + 8]
// 00707721  57                   push edi
// 00707722  85c0                 test eax, eax
// 00707724  7426                 je 0x70774c
// 00707726  8b0a                 mov ecx, dword ptr [edx]
// 00707728  8908                 mov dword ptr [eax], ecx
// 0070772a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0070772d  894804               mov dword ptr [eax + 4], ecx
// 00707730  8b4a08               mov ecx, dword ptr [edx + 8]
// 00707733  894808               mov dword ptr [eax + 8], ecx
// 00707736  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 00707739  89480c               mov dword ptr [eax + 0xc], ecx
// 0070773c  85c9                 test ecx, ecx
// 0070773e  740c                 je 0x70774c
// 00707740  83c104               add ecx, 4
// 00707743  bf01000000           mov edi, 1
// 00707748  f00fc139             lock xadd dword ptr [ecx], edi
// 0070774c  4e                   dec esi
// 0070774d  83c010               add eax, 0x10
// 00707750  85f6                 test esi, esi
// 00707752  77ce                 ja 0x707722
// 00707754  5f                   pop edi
// 00707755  5e                   pop esi
// 00707756  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Uninit_fill_n@PAUIDREFItem@MergeBinder@RBX@@IU123@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@YAXPAUIDREFItem@MergeBinder@RBX@@IABU123@AAV?$allocator@UIDREFItem@MergeBinder@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
