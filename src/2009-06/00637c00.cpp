// roc 2009-06 00637c00  unit: RBX::VScriptContext::?$FactoryProduct  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00637c00
//
// 00637c00  51                   push ecx
// 00637c01  56                   push esi
// 00637c02  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00637c06  83c104               add ecx, 4
// 00637c09  51                   push ecx
// 00637c0a  56                   push esi
// 00637c0b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00637c13  e818ffffff           call 0x637b30
// 00637c18  83c408               add esp, 8
// 00637c1b  8bc6                 mov eax, esi
// 00637c1d  5e                   pop esi
// 00637c1e  59                   pop ecx
// 00637c1f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
