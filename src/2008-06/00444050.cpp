// roc 2008-06 00444050  unit: RBX::MergeBinder  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00444050
//
// 00444050  56                   push esi
// 00444051  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00444055  85f6                 test esi, esi
// 00444057  763c                 jbe 0x444095
// 00444059  8b542410             mov edx, dword ptr [esp + 0x10]
// 0044405d  8b442408             mov eax, dword ptr [esp + 8]
// 00444061  57                   push edi
// 00444062  85c0                 test eax, eax
// 00444064  7426                 je 0x44408c
// 00444066  8b0a                 mov ecx, dword ptr [edx]
// 00444068  8908                 mov dword ptr [eax], ecx
// 0044406a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0044406d  894804               mov dword ptr [eax + 4], ecx
// 00444070  8b4a08               mov ecx, dword ptr [edx + 8]
// 00444073  894808               mov dword ptr [eax + 8], ecx
// 00444076  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 00444079  89480c               mov dword ptr [eax + 0xc], ecx
// 0044407c  85c9                 test ecx, ecx
// 0044407e  740c                 je 0x44408c
// 00444080  83c104               add ecx, 4
// 00444083  bf01000000           mov edi, 1
// 00444088  f00fc139             lock xadd dword ptr [ecx], edi
// 0044408c  4e                   dec esi
// 0044408d  83c010               add eax, 0x10
// 00444090  85f6                 test esi, esi
// 00444092  77ce                 ja 0x444062
// 00444094  5f                   pop edi
// 00444095  5e                   pop esi
// 00444096  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Uninit_fill_n@PAUIDREFItem@MergeBinder@RBX@@IU123@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@YAXPAUIDREFItem@MergeBinder@RBX@@IABU123@AAV?$allocator@UIDREFItem@MergeBinder@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
