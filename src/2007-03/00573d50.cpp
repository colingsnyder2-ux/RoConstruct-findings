// roc 2007-03 00573d50  unit: seg_00570000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00573d50
//
// 00573d50  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00573d54  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00573d58  56                   push esi
// 00573d59  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00573d5d  3bce                 cmp ecx, esi
// 00573d5f  742a                 je 0x573d8b
// 00573d61  57                   push edi
// 00573d62  85c0                 test eax, eax
// 00573d64  741a                 je 0x573d80
// 00573d66  8b11                 mov edx, dword ptr [ecx]
// 00573d68  8910                 mov dword ptr [eax], edx
// 00573d6a  8b5104               mov edx, dword ptr [ecx + 4]
// 00573d6d  85d2                 test edx, edx
// 00573d6f  895004               mov dword ptr [eax + 4], edx
// 00573d72  740c                 je 0x573d80
// 00573d74  83c208               add edx, 8
// 00573d77  bf01000000           mov edi, 1
// 00573d7c  f00fc13a             lock xadd dword ptr [edx], edi
// 00573d80  83c108               add ecx, 8
// 00573d83  83c008               add eax, 8
// 00573d86  3bce                 cmp ecx, esi
// 00573d88  75d8                 jne 0x573d62
// 00573d8a  5f                   pop edi
// 00573d8b  5e                   pop esi
// 00573d8c  c3                   ret 
// library rbxgs/tool\MegaDragger.cpp (function ??$_Uninit_copy@PBV?$weak_ptr@VPartInstance@RBX@@@boost@@PAV12@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@YAPAV?$weak_ptr@VPartInstance@RBX@@@boost@@PBV12@0PAV12@AAV?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/MegaDragger.cpp
