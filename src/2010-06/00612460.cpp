// roc 2010-06 00612460  unit: RBX::VScriptContext::?$FactoryProduct  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00612460
//
// 00612460  51                   push ecx
// 00612461  56                   push esi
// 00612462  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00612466  83c104               add ecx, 4
// 00612469  51                   push ecx
// 0061246a  56                   push esi
// 0061246b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00612473  e8e8f9ffff           call 0x611e60
// 00612478  83c408               add esp, 8
// 0061247b  8bc6                 mov eax, esi
// 0061247d  5e                   pop esi
// 0061247e  59                   pop ecx
// 0061247f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
