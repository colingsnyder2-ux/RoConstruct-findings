// roc 2012-06 0041ce00  unit: RBX::Reflection::$$CBUTuple::$$A6AXV?$shared_ptr::PAV?$function::?$sp_counted_impl_pd  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0041ce00
//
// 0041ce00  51                   push ecx
// 0041ce01  56                   push esi
// 0041ce02  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041ce06  83c104               add ecx, 4
// 0041ce09  51                   push ecx
// 0041ce0a  56                   push esi
// 0041ce0b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0041ce13  e878fdffff           call 0x41cb90
// 0041ce18  83c408               add esp, 8
// 0041ce1b  8bc6                 mov eax, esi
// 0041ce1d  5e                   pop esi
// 0041ce1e  59                   pop ecx
// 0041ce1f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
