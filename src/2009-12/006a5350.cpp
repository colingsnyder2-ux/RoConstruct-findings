// roc 2009-12 006a5350  unit: RBX::VScriptContext::?$FactoryProduct  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a5350
//
// 006a5350  51                   push ecx
// 006a5351  56                   push esi
// 006a5352  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006a5356  83c104               add ecx, 4
// 006a5359  51                   push ecx
// 006a535a  56                   push esi
// 006a535b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006a5363  e8f8fdffff           call 0x6a5160
// 006a5368  83c408               add esp, 8
// 006a536b  8bc6                 mov eax, esi
// 006a536d  5e                   pop esi
// 006a536e  59                   pop ecx
// 006a536f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
