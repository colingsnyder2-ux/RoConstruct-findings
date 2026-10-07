// roc 2012-06 0057ac00  unit: std::H::HV?$allocator::V?$circular_buffer::?$sp_counted_impl_p  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0057ac00
//
// 0057ac00  51                   push ecx
// 0057ac01  56                   push esi
// 0057ac02  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0057ac06  83c104               add ecx, 4
// 0057ac09  51                   push ecx
// 0057ac0a  56                   push esi
// 0057ac0b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0057ac13  e858faffff           call 0x57a670
// 0057ac18  83c408               add esp, 8
// 0057ac1b  8bc6                 mov eax, esi
// 0057ac1d  5e                   pop esi
// 0057ac1e  59                   pop ecx
// 0057ac1f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
