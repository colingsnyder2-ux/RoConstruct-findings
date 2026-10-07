// roc 2012-06 0041ce30  unit: RBX::Reflection::$$CBUTuple::$$A6AXV?$shared_ptr::PAV?$function::?$sp_counted_impl_pd  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0041ce30
//
// 0041ce30  51                   push ecx
// 0041ce31  56                   push esi
// 0041ce32  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041ce36  83c104               add ecx, 4
// 0041ce39  51                   push ecx
// 0041ce3a  56                   push esi
// 0041ce3b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0041ce43  e878fdffff           call 0x41cbc0
// 0041ce48  83c408               add esp, 8
// 0041ce4b  8bc6                 mov eax, esi
// 0041ce4d  5e                   pop esi
// 0041ce4e  59                   pop ecx
// 0041ce4f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
