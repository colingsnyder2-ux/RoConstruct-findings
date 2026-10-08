// roc 2011-06 00451000  unit: RBX::MergeBinder  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00451000
//
// 00451000  56                   push esi
// 00451001  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00451005  85f6                 test esi, esi
// 00451007  763c                 jbe 0x451045
// 00451009  8b542410             mov edx, dword ptr [esp + 0x10]
// 0045100d  8b442408             mov eax, dword ptr [esp + 8]
// 00451011  57                   push edi
// 00451012  85c0                 test eax, eax
// 00451014  7426                 je 0x45103c
// 00451016  8b0a                 mov ecx, dword ptr [edx]
// 00451018  8908                 mov dword ptr [eax], ecx
// 0045101a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0045101d  894804               mov dword ptr [eax + 4], ecx
// 00451020  8b4a08               mov ecx, dword ptr [edx + 8]
// 00451023  894808               mov dword ptr [eax + 8], ecx
// 00451026  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 00451029  89480c               mov dword ptr [eax + 0xc], ecx
// 0045102c  85c9                 test ecx, ecx
// 0045102e  740c                 je 0x45103c
// 00451030  83c104               add ecx, 4
// 00451033  bf01000000           mov edi, 1
// 00451038  f00fc139             lock xadd dword ptr [ecx], edi
// 0045103c  4e                   dec esi
// 0045103d  83c010               add eax, 0x10
// 00451040  85f6                 test esi, esi
// 00451042  77ce                 ja 0x451012
// 00451044  5f                   pop edi
// 00451045  5e                   pop esi
// 00451046  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Uninit_fill_n@PAUIDREFItem@MergeBinder@RBX@@IU123@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@YAXPAUIDREFItem@MergeBinder@RBX@@IABU123@AAV?$allocator@UIDREFItem@MergeBinder@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
