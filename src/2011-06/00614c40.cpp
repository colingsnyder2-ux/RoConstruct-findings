// roc 2011-06 00614c40  unit: RBX::MergeBinder  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00614c40
//
// 00614c40  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00614c44  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00614c48  56                   push esi
// 00614c49  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00614c4d  3bce                 cmp ecx, esi
// 00614c4f  7436                 je 0x614c87
// 00614c51  57                   push edi
// 00614c52  85c0                 test eax, eax
// 00614c54  7426                 je 0x614c7c
// 00614c56  8b11                 mov edx, dword ptr [ecx]
// 00614c58  8910                 mov dword ptr [eax], edx
// 00614c5a  8b5104               mov edx, dword ptr [ecx + 4]
// 00614c5d  895004               mov dword ptr [eax + 4], edx
// 00614c60  8b5108               mov edx, dword ptr [ecx + 8]
// 00614c63  895008               mov dword ptr [eax + 8], edx
// 00614c66  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00614c69  89500c               mov dword ptr [eax + 0xc], edx
// 00614c6c  85d2                 test edx, edx
// 00614c6e  740c                 je 0x614c7c
// 00614c70  83c204               add edx, 4
// 00614c73  bf01000000           mov edi, 1
// 00614c78  f00fc13a             lock xadd dword ptr [edx], edi
// 00614c7c  83c110               add ecx, 0x10
// 00614c7f  83c010               add eax, 0x10
// 00614c82  3bce                 cmp ecx, esi
// 00614c84  75cc                 jne 0x614c52
// 00614c86  5f                   pop edi
// 00614c87  5e                   pop esi
// 00614c88  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Uninit_copy@PAUIDREFItem@MergeBinder@RBX@@PAU123@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@YAPAUIDREFItem@MergeBinder@RBX@@PAU123@00AAV?$allocator@UIDREFItem@MergeBinder@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
