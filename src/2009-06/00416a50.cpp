// roc 2009-06 00416a50  unit: CopyVerb  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00416a50
//
// 00416a50  51                   push ecx
// 00416a51  56                   push esi
// 00416a52  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00416a56  83c104               add ecx, 4
// 00416a59  51                   push ecx
// 00416a5a  56                   push esi
// 00416a5b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00416a63  e8c8feffff           call 0x416930
// 00416a68  83c408               add esp, 8
// 00416a6b  8bc6                 mov eax, esi
// 00416a6d  5e                   pop esi
// 00416a6e  59                   pop ecx
// 00416a6f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
