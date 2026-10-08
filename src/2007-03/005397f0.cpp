// roc 2007-03 005397f0  unit: seg_00530000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005397f0
//
// 005397f0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005397f4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005397f8  56                   push esi
// 005397f9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005397fd  3bce                 cmp ecx, esi
// 005397ff  742a                 je 0x53982b
// 00539801  57                   push edi
// 00539802  85c0                 test eax, eax
// 00539804  741a                 je 0x539820
// 00539806  8b11                 mov edx, dword ptr [ecx]
// 00539808  8910                 mov dword ptr [eax], edx
// 0053980a  8b5104               mov edx, dword ptr [ecx + 4]
// 0053980d  85d2                 test edx, edx
// 0053980f  895004               mov dword ptr [eax + 4], edx
// 00539812  740c                 je 0x539820
// 00539814  83c204               add edx, 4
// 00539817  bf01000000           mov edi, 1
// 0053981c  f00fc13a             lock xadd dword ptr [edx], edi
// 00539820  83c108               add ecx, 8
// 00539823  83c008               add eax, 8
// 00539826  3bce                 cmp ecx, esi
// 00539828  75d8                 jne 0x539802
// 0053982a  5f                   pop edi
// 0053982b  5e                   pop esi
// 0053982c  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ??$_Uninit_copy@PBV?$shared_ptr@VScript@RBX@@@boost@@PAV12@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@YAPAV?$shared_ptr@VScript@RBX@@@boost@@PBV12@0PAV12@AAV?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
