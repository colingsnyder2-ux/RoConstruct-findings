// roc 2007-08 00443700  unit: RBX::MergeBinder  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00443700
//
// 00443700  56                   push esi
// 00443701  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00443705  85f6                 test esi, esi
// 00443707  763e                 jbe 0x443747
// 00443709  8b542410             mov edx, dword ptr [esp + 0x10]
// 0044370d  8b442408             mov eax, dword ptr [esp + 8]
// 00443711  57                   push edi
// 00443712  85c0                 test eax, eax
// 00443714  7426                 je 0x44373c
// 00443716  8b0a                 mov ecx, dword ptr [edx]
// 00443718  8908                 mov dword ptr [eax], ecx
// 0044371a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0044371d  894804               mov dword ptr [eax + 4], ecx
// 00443720  8b4a08               mov ecx, dword ptr [edx + 8]
// 00443723  894808               mov dword ptr [eax + 8], ecx
// 00443726  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 00443729  85c9                 test ecx, ecx
// 0044372b  89480c               mov dword ptr [eax + 0xc], ecx
// 0044372e  740c                 je 0x44373c
// 00443730  83c104               add ecx, 4
// 00443733  bf01000000           mov edi, 1
// 00443738  f00fc139             lock xadd dword ptr [ecx], edi
// 0044373c  83ee01               sub esi, 1
// 0044373f  83c010               add eax, 0x10
// 00443742  85f6                 test esi, esi
// 00443744  77cc                 ja 0x443712
// 00443746  5f                   pop edi
// 00443747  5e                   pop esi
// 00443748  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Uninit_fill_n@PAUIDREFItem@MergeBinder@RBX@@IU123@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@YAXPAUIDREFItem@MergeBinder@RBX@@IABU123@AAV?$allocator@UIDREFItem@MergeBinder@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
