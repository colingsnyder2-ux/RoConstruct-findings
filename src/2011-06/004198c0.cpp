// roc 2011-06 004198c0  unit: RBX::Reflection::VValue::$$CBV?$vector::$$A6AXV?$shared_ptr::PAV?$function::?$sp_counted_impl_pd  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004198c0
//
// 004198c0  51                   push ecx
// 004198c1  56                   push esi
// 004198c2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004198c6  83c104               add ecx, 4
// 004198c9  51                   push ecx
// 004198ca  56                   push esi
// 004198cb  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004198d3  e8d8fdffff           call 0x4196b0
// 004198d8  83c408               add esp, 8
// 004198db  8bc6                 mov eax, esi
// 004198dd  5e                   pop esi
// 004198de  59                   pop ecx
// 004198df  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
