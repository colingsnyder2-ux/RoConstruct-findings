// roc 2011-06 00419920  unit: RBX::Reflection::VValue::$$CBV?$vector::$$A6AXV?$shared_ptr::PAV?$function::?$sp_counted_impl_pd  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00419920
//
// 00419920  51                   push ecx
// 00419921  56                   push esi
// 00419922  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00419926  83c104               add ecx, 4
// 00419929  51                   push ecx
// 0041992a  56                   push esi
// 0041992b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00419933  e8f8fdffff           call 0x419730
// 00419938  83c408               add esp, 8
// 0041993b  8bc6                 mov eax, esi
// 0041993d  5e                   pop esi
// 0041993e  59                   pop ecx
// 0041993f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
