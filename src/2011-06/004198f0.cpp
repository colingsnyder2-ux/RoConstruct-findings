// roc 2011-06 004198f0  unit: RBX::Reflection::VValue::$$CBV?$vector::$$A6AXV?$shared_ptr::PAV?$function::?$sp_counted_impl_pd  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004198f0
//
// 004198f0  51                   push ecx
// 004198f1  56                   push esi
// 004198f2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004198f6  83c104               add ecx, 4
// 004198f9  51                   push ecx
// 004198fa  56                   push esi
// 004198fb  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00419903  e8e8fdffff           call 0x4196f0
// 00419908  83c408               add esp, 8
// 0041990b  8bc6                 mov eax, esi
// 0041990d  5e                   pop esi
// 0041990e  59                   pop ecx
// 0041990f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
