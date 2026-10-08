// roc 2012-06 00462b80  unit: RBX::MergeBinder  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00462b80
//
// 00462b80  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00462b84  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00462b88  56                   push esi
// 00462b89  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00462b8d  3bce                 cmp ecx, esi
// 00462b8f  7436                 je 0x462bc7
// 00462b91  57                   push edi
// 00462b92  85c0                 test eax, eax
// 00462b94  7426                 je 0x462bbc
// 00462b96  8b11                 mov edx, dword ptr [ecx]
// 00462b98  8910                 mov dword ptr [eax], edx
// 00462b9a  8b5104               mov edx, dword ptr [ecx + 4]
// 00462b9d  895004               mov dword ptr [eax + 4], edx
// 00462ba0  8b5108               mov edx, dword ptr [ecx + 8]
// 00462ba3  895008               mov dword ptr [eax + 8], edx
// 00462ba6  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00462ba9  89500c               mov dword ptr [eax + 0xc], edx
// 00462bac  85d2                 test edx, edx
// 00462bae  740c                 je 0x462bbc
// 00462bb0  83c204               add edx, 4
// 00462bb3  bf01000000           mov edi, 1
// 00462bb8  f00fc13a             lock xadd dword ptr [edx], edi
// 00462bbc  83c110               add ecx, 0x10
// 00462bbf  83c010               add eax, 0x10
// 00462bc2  3bce                 cmp ecx, esi
// 00462bc4  75cc                 jne 0x462b92
// 00462bc6  5f                   pop edi
// 00462bc7  5e                   pop esi
// 00462bc8  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Uninit_copy@PAUIDREFItem@MergeBinder@RBX@@PAU123@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@YAPAUIDREFItem@MergeBinder@RBX@@PAU123@00AAV?$allocator@UIDREFItem@MergeBinder@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
