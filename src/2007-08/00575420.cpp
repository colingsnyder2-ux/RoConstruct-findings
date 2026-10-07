// roc 2007-08 00575420  unit: RBX::PartInstance  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00575420
//
// 00575420  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00575424  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00575428  56                   push esi
// 00575429  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0057542d  3bce                 cmp ecx, esi
// 0057542f  742a                 je 0x57545b
// 00575431  57                   push edi
// 00575432  85c0                 test eax, eax
// 00575434  741a                 je 0x575450
// 00575436  8b11                 mov edx, dword ptr [ecx]
// 00575438  8910                 mov dword ptr [eax], edx
// 0057543a  8b5104               mov edx, dword ptr [ecx + 4]
// 0057543d  85d2                 test edx, edx
// 0057543f  895004               mov dword ptr [eax + 4], edx
// 00575442  740c                 je 0x575450
// 00575444  83c208               add edx, 8
// 00575447  bf01000000           mov edi, 1
// 0057544c  f00fc13a             lock xadd dword ptr [edx], edi
// 00575450  83c108               add ecx, 8
// 00575453  83c008               add eax, 8
// 00575456  3bce                 cmp ecx, esi
// 00575458  75d8                 jne 0x575432
// 0057545a  5f                   pop edi
// 0057545b  5e                   pop esi
// 0057545c  c3                   ret 
// library templates-boost-1_34_1/vector_wp.cpp (function ??$_Uninit_copy@PBV?$weak_ptr@UT@@@boost@@PAV12@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@YAPAV?$weak_ptr@UT@@@boost@@PBV12@0PAV12@AAV?$allocator@V?$weak_ptr@UT@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_wp.cpp
