// roc 2009-12 00443250  unit: RBX::MergeBinder  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00443250
//
// 00443250  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00443254  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00443258  56                   push esi
// 00443259  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0044325d  3bce                 cmp ecx, esi
// 0044325f  7436                 je 0x443297
// 00443261  57                   push edi
// 00443262  85c0                 test eax, eax
// 00443264  7426                 je 0x44328c
// 00443266  8b11                 mov edx, dword ptr [ecx]
// 00443268  8910                 mov dword ptr [eax], edx
// 0044326a  8b5104               mov edx, dword ptr [ecx + 4]
// 0044326d  895004               mov dword ptr [eax + 4], edx
// 00443270  8b5108               mov edx, dword ptr [ecx + 8]
// 00443273  895008               mov dword ptr [eax + 8], edx
// 00443276  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00443279  89500c               mov dword ptr [eax + 0xc], edx
// 0044327c  85d2                 test edx, edx
// 0044327e  740c                 je 0x44328c
// 00443280  83c204               add edx, 4
// 00443283  bf01000000           mov edi, 1
// 00443288  f00fc13a             lock xadd dword ptr [edx], edi
// 0044328c  83c110               add ecx, 0x10
// 0044328f  83c010               add eax, 0x10
// 00443292  3bce                 cmp ecx, esi
// 00443294  75cc                 jne 0x443262
// 00443296  5f                   pop edi
// 00443297  5e                   pop esi
// 00443298  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Uninit_copy@PAUIDREFItem@MergeBinder@RBX@@PAU123@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@YAPAUIDREFItem@MergeBinder@RBX@@PAU123@00AAV?$allocator@UIDREFItem@MergeBinder@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
