// roc 2010-06 00444790  unit: RBX::MergeBinder  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00444790
//
// 00444790  56                   push esi
// 00444791  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00444795  85f6                 test esi, esi
// 00444797  763c                 jbe 0x4447d5
// 00444799  8b542410             mov edx, dword ptr [esp + 0x10]
// 0044479d  8b442408             mov eax, dword ptr [esp + 8]
// 004447a1  57                   push edi
// 004447a2  85c0                 test eax, eax
// 004447a4  7426                 je 0x4447cc
// 004447a6  8b0a                 mov ecx, dword ptr [edx]
// 004447a8  8908                 mov dword ptr [eax], ecx
// 004447aa  8b4a04               mov ecx, dword ptr [edx + 4]
// 004447ad  894804               mov dword ptr [eax + 4], ecx
// 004447b0  8b4a08               mov ecx, dword ptr [edx + 8]
// 004447b3  894808               mov dword ptr [eax + 8], ecx
// 004447b6  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 004447b9  89480c               mov dword ptr [eax + 0xc], ecx
// 004447bc  85c9                 test ecx, ecx
// 004447be  740c                 je 0x4447cc
// 004447c0  83c104               add ecx, 4
// 004447c3  bf01000000           mov edi, 1
// 004447c8  f00fc139             lock xadd dword ptr [ecx], edi
// 004447cc  4e                   dec esi
// 004447cd  83c010               add eax, 0x10
// 004447d0  85f6                 test esi, esi
// 004447d2  77ce                 ja 0x4447a2
// 004447d4  5f                   pop edi
// 004447d5  5e                   pop esi
// 004447d6  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Uninit_fill_n@PAUIDREFItem@MergeBinder@RBX@@IU123@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@YAXPAUIDREFItem@MergeBinder@RBX@@IABU123@AAV?$allocator@UIDREFItem@MergeBinder@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
