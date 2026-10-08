// roc 2007-03 0049f9b0  unit: seg_00490000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049f9b0
//
// 0049f9b0  8b542408             mov edx, dword ptr [esp + 8]
// 0049f9b4  85d2                 test edx, edx
// 0049f9b6  7634                 jbe 0x49f9ec
// 0049f9b8  8b442404             mov eax, dword ptr [esp + 4]
// 0049f9bc  56                   push esi
// 0049f9bd  8b742410             mov esi, dword ptr [esp + 0x10]
// 0049f9c1  57                   push edi
// 0049f9c2  85c0                 test eax, eax
// 0049f9c4  741a                 je 0x49f9e0
// 0049f9c6  8b0e                 mov ecx, dword ptr [esi]
// 0049f9c8  8908                 mov dword ptr [eax], ecx
// 0049f9ca  8b4e04               mov ecx, dword ptr [esi + 4]
// 0049f9cd  85c9                 test ecx, ecx
// 0049f9cf  894804               mov dword ptr [eax + 4], ecx
// 0049f9d2  740c                 je 0x49f9e0
// 0049f9d4  83c104               add ecx, 4
// 0049f9d7  bf01000000           mov edi, 1
// 0049f9dc  f00fc139             lock xadd dword ptr [ecx], edi
// 0049f9e0  83ea01               sub edx, 1
// 0049f9e3  83c008               add eax, 8
// 0049f9e6  85d2                 test edx, edx
// 0049f9e8  77d8                 ja 0x49f9c2
// 0049f9ea  5f                   pop edi
// 0049f9eb  5e                   pop esi
// 0049f9ec  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ??$_Uninit_fill_n@PAV?$shared_ptr@VScript@RBX@@@boost@@IV12@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@YAXPAV?$shared_ptr@VScript@RBX@@@boost@@IABV12@AAV?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
