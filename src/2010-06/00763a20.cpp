// from server: 100% by auto
// roc 2010-06 00763a20  unit: RBX::Assembly  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00763a20
//
// 00763a20  8b542408             mov edx, dword ptr [esp + 8]
// 00763a24  85d2                 test edx, edx
// 00763a26  7632                 jbe 0x763a5a
// 00763a28  8b442404             mov eax, dword ptr [esp + 4]
// 00763a2c  56                   push esi
// 00763a2d  8b742410             mov esi, dword ptr [esp + 0x10]
// 00763a31  57                   push edi
// 00763a32  85c0                 test eax, eax
// 00763a34  741a                 je 0x763a50
// 00763a36  8b0e                 mov ecx, dword ptr [esi]
// 00763a38  8908                 mov dword ptr [eax], ecx
// 00763a3a  8b4e04               mov ecx, dword ptr [esi + 4]
// 00763a3d  894804               mov dword ptr [eax + 4], ecx
// 00763a40  85c9                 test ecx, ecx
// 00763a42  740c                 je 0x763a50
// 00763a44  83c108               add ecx, 8
// 00763a47  bf01000000           mov edi, 1
// 00763a4c  f00fc139             lock xadd dword ptr [ecx], edi
// 00763a50  4a                   dec edx
// 00763a51  83c008               add eax, 8
// 00763a54  85d2                 test edx, edx
// 00763a56  77da                 ja 0x763a32
// 00763a58  5f                   pop edi
// 00763a59  5e                   pop esi
// 00763a5a  c3                   ret 
// library templates-boost-1_34_1/vector_wp.cpp (function ??$_Uninit_fill_n@PAV?$weak_ptr@UT@@@boost@@IV12@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@YAXPAV?$weak_ptr@UT@@@boost@@IABV12@AAV?$allocator@V?$weak_ptr@UT@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_wp.cpp
