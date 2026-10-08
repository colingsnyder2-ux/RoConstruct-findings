// roc 2008-06 00444000  unit: RBX::MergeBinder  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00444000
//
// 00444000  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00444004  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00444008  56                   push esi
// 00444009  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0044400d  3bce                 cmp ecx, esi
// 0044400f  7436                 je 0x444047
// 00444011  57                   push edi
// 00444012  85c0                 test eax, eax
// 00444014  7426                 je 0x44403c
// 00444016  8b11                 mov edx, dword ptr [ecx]
// 00444018  8910                 mov dword ptr [eax], edx
// 0044401a  8b5104               mov edx, dword ptr [ecx + 4]
// 0044401d  895004               mov dword ptr [eax + 4], edx
// 00444020  8b5108               mov edx, dword ptr [ecx + 8]
// 00444023  895008               mov dword ptr [eax + 8], edx
// 00444026  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00444029  89500c               mov dword ptr [eax + 0xc], edx
// 0044402c  85d2                 test edx, edx
// 0044402e  740c                 je 0x44403c
// 00444030  83c204               add edx, 4
// 00444033  bf01000000           mov edi, 1
// 00444038  f00fc13a             lock xadd dword ptr [edx], edi
// 0044403c  83c110               add ecx, 0x10
// 0044403f  83c010               add eax, 0x10
// 00444042  3bce                 cmp ecx, esi
// 00444044  75cc                 jne 0x444012
// 00444046  5f                   pop edi
// 00444047  5e                   pop esi
// 00444048  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Uninit_copy@PAUIDREFItem@MergeBinder@RBX@@PAU123@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@YAPAUIDREFItem@MergeBinder@RBX@@PAU123@00AAV?$allocator@UIDREFItem@MergeBinder@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
