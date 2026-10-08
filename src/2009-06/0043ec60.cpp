// roc 2009-06 0043ec60  unit: RBX::MergeBinder  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043ec60
//
// 0043ec60  56                   push esi
// 0043ec61  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0043ec65  85f6                 test esi, esi
// 0043ec67  763c                 jbe 0x43eca5
// 0043ec69  8b542410             mov edx, dword ptr [esp + 0x10]
// 0043ec6d  8b442408             mov eax, dword ptr [esp + 8]
// 0043ec71  57                   push edi
// 0043ec72  85c0                 test eax, eax
// 0043ec74  7426                 je 0x43ec9c
// 0043ec76  8b0a                 mov ecx, dword ptr [edx]
// 0043ec78  8908                 mov dword ptr [eax], ecx
// 0043ec7a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0043ec7d  894804               mov dword ptr [eax + 4], ecx
// 0043ec80  8b4a08               mov ecx, dword ptr [edx + 8]
// 0043ec83  894808               mov dword ptr [eax + 8], ecx
// 0043ec86  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0043ec89  89480c               mov dword ptr [eax + 0xc], ecx
// 0043ec8c  85c9                 test ecx, ecx
// 0043ec8e  740c                 je 0x43ec9c
// 0043ec90  83c104               add ecx, 4
// 0043ec93  bf01000000           mov edi, 1
// 0043ec98  f00fc139             lock xadd dword ptr [ecx], edi
// 0043ec9c  4e                   dec esi
// 0043ec9d  83c010               add eax, 0x10
// 0043eca0  85f6                 test esi, esi
// 0043eca2  77ce                 ja 0x43ec72
// 0043eca4  5f                   pop edi
// 0043eca5  5e                   pop esi
// 0043eca6  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Uninit_fill_n@PAUIDREFItem@MergeBinder@RBX@@IU123@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@YAXPAUIDREFItem@MergeBinder@RBX@@IABU123@AAV?$allocator@UIDREFItem@MergeBinder@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
