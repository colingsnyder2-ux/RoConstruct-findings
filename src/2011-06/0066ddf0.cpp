// from server: 100% by auto
// roc 2011-06 0066ddf0  unit: RBX::P8PartInstance::?$GetSetImpl  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0066ddf0
//
// 0066ddf0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0066ddf4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0066ddf8  56                   push esi
// 0066ddf9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066ddfd  3bce                 cmp ecx, esi
// 0066ddff  742a                 je 0x66de2b
// 0066de01  57                   push edi
// 0066de02  85c0                 test eax, eax
// 0066de04  741a                 je 0x66de20
// 0066de06  8b11                 mov edx, dword ptr [ecx]
// 0066de08  8910                 mov dword ptr [eax], edx
// 0066de0a  8b5104               mov edx, dword ptr [ecx + 4]
// 0066de0d  895004               mov dword ptr [eax + 4], edx
// 0066de10  85d2                 test edx, edx
// 0066de12  740c                 je 0x66de20
// 0066de14  83c208               add edx, 8
// 0066de17  bf01000000           mov edi, 1
// 0066de1c  f00fc13a             lock xadd dword ptr [edx], edi
// 0066de20  83c108               add ecx, 8
// 0066de23  83c008               add eax, 8
// 0066de26  3bce                 cmp ecx, esi
// 0066de28  75d8                 jne 0x66de02
// 0066de2a  5f                   pop edi
// 0066de2b  5e                   pop esi
// 0066de2c  c3                   ret 
// library templates-boost-1_34_1/vector_wp.cpp (function ??$_Uninit_copy@PBV?$weak_ptr@UT@@@boost@@PAV12@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@YAPAV?$weak_ptr@UT@@@boost@@PBV12@0PAV12@AAV?$allocator@V?$weak_ptr@UT@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_wp.cpp
