// roc 2010-06 00612430  unit: RBX::VScriptContext::?$FactoryProduct  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00612430
//
// 00612430  51                   push ecx
// 00612431  56                   push esi
// 00612432  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00612436  83c104               add ecx, 4
// 00612439  51                   push ecx
// 0061243a  56                   push esi
// 0061243b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00612443  e8d8f9ffff           call 0x611e20
// 00612448  83c408               add esp, 8
// 0061244b  8bc6                 mov eax, esi
// 0061244d  5e                   pop esi
// 0061244e  59                   pop ecx
// 0061244f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
