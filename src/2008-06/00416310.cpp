// roc 2008-06 00416310  unit: CopyVerb  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00416310
//
// 00416310  51                   push ecx
// 00416311  56                   push esi
// 00416312  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00416316  83c104               add ecx, 4
// 00416319  51                   push ecx
// 0041631a  56                   push esi
// 0041631b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00416323  e8e8fdffff           call 0x416110
// 00416328  83c408               add esp, 8
// 0041632b  8bc6                 mov eax, esi
// 0041632d  5e                   pop esi
// 0041632e  59                   pop ecx
// 0041632f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
