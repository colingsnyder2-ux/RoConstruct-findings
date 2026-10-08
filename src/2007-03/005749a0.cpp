// roc 2007-03 005749a0  unit: seg_00570000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005749a0
//
// 005749a0  8b542408             mov edx, dword ptr [esp + 8]
// 005749a4  85d2                 test edx, edx
// 005749a6  7634                 jbe 0x5749dc
// 005749a8  8b442404             mov eax, dword ptr [esp + 4]
// 005749ac  56                   push esi
// 005749ad  8b742410             mov esi, dword ptr [esp + 0x10]
// 005749b1  57                   push edi
// 005749b2  85c0                 test eax, eax
// 005749b4  741a                 je 0x5749d0
// 005749b6  8b0e                 mov ecx, dword ptr [esi]
// 005749b8  8908                 mov dword ptr [eax], ecx
// 005749ba  8b4e04               mov ecx, dword ptr [esi + 4]
// 005749bd  85c9                 test ecx, ecx
// 005749bf  894804               mov dword ptr [eax + 4], ecx
// 005749c2  740c                 je 0x5749d0
// 005749c4  83c108               add ecx, 8
// 005749c7  bf01000000           mov edi, 1
// 005749cc  f00fc139             lock xadd dword ptr [ecx], edi
// 005749d0  83ea01               sub edx, 1
// 005749d3  83c008               add eax, 8
// 005749d6  85d2                 test edx, edx
// 005749d8  77d8                 ja 0x5749b2
// 005749da  5f                   pop edi
// 005749db  5e                   pop esi
// 005749dc  c3                   ret 
// library rbxgs/v8datamodel\ICameraOwner.cpp (function ??$_Uninit_fill_n@PAV?$weak_ptr@VPartInstance@RBX@@@boost@@IV12@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@YAXPAV?$weak_ptr@VPartInstance@RBX@@@boost@@IABV12@AAV?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ICameraOwner.cpp
