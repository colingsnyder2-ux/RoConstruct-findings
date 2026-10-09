// roc 2009-12 00416670  unit: PasteVerb  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00416670
//
// 00416670  51                   push ecx
// 00416671  56                   push esi
// 00416672  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00416676  83c104               add ecx, 4
// 00416679  51                   push ecx
// 0041667a  56                   push esi
// 0041667b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00416683  e898feffff           call 0x416520
// 00416688  83c408               add esp, 8
// 0041668b  8bc6                 mov eax, esi
// 0041668d  5e                   pop esi
// 0041668e  59                   pop ecx
// 0041668f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
