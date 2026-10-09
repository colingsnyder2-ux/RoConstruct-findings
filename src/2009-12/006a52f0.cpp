// roc 2009-12 006a52f0  unit: RBX::VScriptContext::?$FactoryProduct  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a52f0
//
// 006a52f0  51                   push ecx
// 006a52f1  56                   push esi
// 006a52f2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006a52f6  83c104               add ecx, 4
// 006a52f9  51                   push ecx
// 006a52fa  56                   push esi
// 006a52fb  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006a5303  e8d8fdffff           call 0x6a50e0
// 006a5308  83c408               add esp, 8
// 006a530b  8bc6                 mov eax, esi
// 006a530d  5e                   pop esi
// 006a530e  59                   pop ecx
// 006a530f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
