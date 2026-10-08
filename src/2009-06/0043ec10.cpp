// roc 2009-06 0043ec10  unit: RBX::MergeBinder  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043ec10
//
// 0043ec10  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0043ec14  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0043ec18  56                   push esi
// 0043ec19  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0043ec1d  3bce                 cmp ecx, esi
// 0043ec1f  7436                 je 0x43ec57
// 0043ec21  57                   push edi
// 0043ec22  85c0                 test eax, eax
// 0043ec24  7426                 je 0x43ec4c
// 0043ec26  8b11                 mov edx, dword ptr [ecx]
// 0043ec28  8910                 mov dword ptr [eax], edx
// 0043ec2a  8b5104               mov edx, dword ptr [ecx + 4]
// 0043ec2d  895004               mov dword ptr [eax + 4], edx
// 0043ec30  8b5108               mov edx, dword ptr [ecx + 8]
// 0043ec33  895008               mov dword ptr [eax + 8], edx
// 0043ec36  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0043ec39  89500c               mov dword ptr [eax + 0xc], edx
// 0043ec3c  85d2                 test edx, edx
// 0043ec3e  740c                 je 0x43ec4c
// 0043ec40  83c204               add edx, 4
// 0043ec43  bf01000000           mov edi, 1
// 0043ec48  f00fc13a             lock xadd dword ptr [edx], edi
// 0043ec4c  83c110               add ecx, 0x10
// 0043ec4f  83c010               add eax, 0x10
// 0043ec52  3bce                 cmp ecx, esi
// 0043ec54  75cc                 jne 0x43ec22
// 0043ec56  5f                   pop edi
// 0043ec57  5e                   pop esi
// 0043ec58  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Uninit_copy@PAUIDREFItem@MergeBinder@RBX@@PAU123@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@YAPAUIDREFItem@MergeBinder@RBX@@PAU123@00AAV?$allocator@UIDREFItem@MergeBinder@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
