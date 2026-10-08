// roc 2007-08 004436b0  unit: RBX::MergeBinder  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004436b0
//
// 004436b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004436b4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004436b8  56                   push esi
// 004436b9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004436bd  3bce                 cmp ecx, esi
// 004436bf  7436                 je 0x4436f7
// 004436c1  57                   push edi
// 004436c2  85c0                 test eax, eax
// 004436c4  7426                 je 0x4436ec
// 004436c6  8b11                 mov edx, dword ptr [ecx]
// 004436c8  8910                 mov dword ptr [eax], edx
// 004436ca  8b5104               mov edx, dword ptr [ecx + 4]
// 004436cd  895004               mov dword ptr [eax + 4], edx
// 004436d0  8b5108               mov edx, dword ptr [ecx + 8]
// 004436d3  895008               mov dword ptr [eax + 8], edx
// 004436d6  8b510c               mov edx, dword ptr [ecx + 0xc]
// 004436d9  85d2                 test edx, edx
// 004436db  89500c               mov dword ptr [eax + 0xc], edx
// 004436de  740c                 je 0x4436ec
// 004436e0  83c204               add edx, 4
// 004436e3  bf01000000           mov edi, 1
// 004436e8  f00fc13a             lock xadd dword ptr [edx], edi
// 004436ec  83c110               add ecx, 0x10
// 004436ef  83c010               add eax, 0x10
// 004436f2  3bce                 cmp ecx, esi
// 004436f4  75cc                 jne 0x4436c2
// 004436f6  5f                   pop edi
// 004436f7  5e                   pop esi
// 004436f8  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Uninit_copy@PAUIDREFItem@MergeBinder@RBX@@PAU123@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@YAPAUIDREFItem@MergeBinder@RBX@@PAU123@00AAV?$allocator@UIDREFItem@MergeBinder@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
