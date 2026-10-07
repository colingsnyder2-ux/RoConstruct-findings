// roc 2011-06 00419890  unit: RBX::Reflection::VValue::$$CBV?$vector::$$A6AXV?$shared_ptr::PAV?$function::?$sp_counted_impl_pd  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00419890
//
// 00419890  51                   push ecx
// 00419891  56                   push esi
// 00419892  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00419896  83c104               add ecx, 4
// 00419899  51                   push ecx
// 0041989a  56                   push esi
// 0041989b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004198a3  e8d8fdffff           call 0x419680
// 004198a8  83c408               add esp, 8
// 004198ab  8bc6                 mov eax, esi
// 004198ad  5e                   pop esi
// 004198ae  59                   pop ecx
// 004198af  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
