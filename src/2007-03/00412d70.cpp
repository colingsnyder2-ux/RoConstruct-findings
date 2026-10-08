// roc 2007-03 00412d70  unit: seg_00410000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00412d70
//
// 00412d70  51                   push ecx
// 00412d71  56                   push esi
// 00412d72  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00412d76  83c104               add ecx, 4
// 00412d79  51                   push ecx
// 00412d7a  56                   push esi
// 00412d7b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00412d83  e848feffff           call 0x412bd0
// 00412d88  83c408               add esp, 8
// 00412d8b  8bc6                 mov eax, esi
// 00412d8d  5e                   pop esi
// 00412d8e  59                   pop ecx
// 00412d8f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
