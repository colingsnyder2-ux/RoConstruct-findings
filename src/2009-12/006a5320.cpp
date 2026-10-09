// roc 2009-12 006a5320  unit: RBX::VScriptContext::?$FactoryProduct  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a5320
//
// 006a5320  51                   push ecx
// 006a5321  56                   push esi
// 006a5322  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006a5326  83c104               add ecx, 4
// 006a5329  51                   push ecx
// 006a532a  56                   push esi
// 006a532b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006a5333  e8e8fdffff           call 0x6a5120
// 006a5338  83c408               add esp, 8
// 006a533b  8bc6                 mov eax, esi
// 006a533d  5e                   pop esi
// 006a533e  59                   pop ecx
// 006a533f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
