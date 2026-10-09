// roc 2009-12 004432a0  unit: RBX::MergeBinder  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004432a0
//
// 004432a0  56                   push esi
// 004432a1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004432a5  85f6                 test esi, esi
// 004432a7  763c                 jbe 0x4432e5
// 004432a9  8b542410             mov edx, dword ptr [esp + 0x10]
// 004432ad  8b442408             mov eax, dword ptr [esp + 8]
// 004432b1  57                   push edi
// 004432b2  85c0                 test eax, eax
// 004432b4  7426                 je 0x4432dc
// 004432b6  8b0a                 mov ecx, dword ptr [edx]
// 004432b8  8908                 mov dword ptr [eax], ecx
// 004432ba  8b4a04               mov ecx, dword ptr [edx + 4]
// 004432bd  894804               mov dword ptr [eax + 4], ecx
// 004432c0  8b4a08               mov ecx, dword ptr [edx + 8]
// 004432c3  894808               mov dword ptr [eax + 8], ecx
// 004432c6  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 004432c9  89480c               mov dword ptr [eax + 0xc], ecx
// 004432cc  85c9                 test ecx, ecx
// 004432ce  740c                 je 0x4432dc
// 004432d0  83c104               add ecx, 4
// 004432d3  bf01000000           mov edi, 1
// 004432d8  f00fc139             lock xadd dword ptr [ecx], edi
// 004432dc  4e                   dec esi
// 004432dd  83c010               add eax, 0x10
// 004432e0  85f6                 test esi, esi
// 004432e2  77ce                 ja 0x4432b2
// 004432e4  5f                   pop edi
// 004432e5  5e                   pop esi
// 004432e6  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Uninit_fill_n@PAUIDREFItem@MergeBinder@RBX@@IU123@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@YAXPAUIDREFItem@MergeBinder@RBX@@IABU123@AAV?$allocator@UIDREFItem@MergeBinder@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
