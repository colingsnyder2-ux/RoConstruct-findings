// roc 2012-06 0041ce90  unit: RBX::Reflection::$$CBUTuple::$$A6AXV?$shared_ptr::PAV?$function::?$sp_counted_impl_pd  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0041ce90
//
// 0041ce90  51                   push ecx
// 0041ce91  56                   push esi
// 0041ce92  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041ce96  83c104               add ecx, 4
// 0041ce99  51                   push ecx
// 0041ce9a  56                   push esi
// 0041ce9b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0041cea3  e898fdffff           call 0x41cc40
// 0041cea8  83c408               add esp, 8
// 0041ceab  8bc6                 mov eax, esi
// 0041cead  5e                   pop esi
// 0041ceae  59                   pop ecx
// 0041ceaf  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
