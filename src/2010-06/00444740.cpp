// roc 2010-06 00444740  unit: RBX::MergeBinder  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00444740
//
// 00444740  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00444744  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00444748  56                   push esi
// 00444749  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0044474d  3bce                 cmp ecx, esi
// 0044474f  7436                 je 0x444787
// 00444751  57                   push edi
// 00444752  85c0                 test eax, eax
// 00444754  7426                 je 0x44477c
// 00444756  8b11                 mov edx, dword ptr [ecx]
// 00444758  8910                 mov dword ptr [eax], edx
// 0044475a  8b5104               mov edx, dword ptr [ecx + 4]
// 0044475d  895004               mov dword ptr [eax + 4], edx
// 00444760  8b5108               mov edx, dword ptr [ecx + 8]
// 00444763  895008               mov dword ptr [eax + 8], edx
// 00444766  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00444769  89500c               mov dword ptr [eax + 0xc], edx
// 0044476c  85d2                 test edx, edx
// 0044476e  740c                 je 0x44477c
// 00444770  83c204               add edx, 4
// 00444773  bf01000000           mov edi, 1
// 00444778  f00fc13a             lock xadd dword ptr [edx], edi
// 0044477c  83c110               add ecx, 0x10
// 0044477f  83c010               add eax, 0x10
// 00444782  3bce                 cmp ecx, esi
// 00444784  75cc                 jne 0x444752
// 00444786  5f                   pop edi
// 00444787  5e                   pop esi
// 00444788  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Uninit_copy@PAUIDREFItem@MergeBinder@RBX@@PAU123@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@YAPAUIDREFItem@MergeBinder@RBX@@PAU123@00AAV?$allocator@UIDREFItem@MergeBinder@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
