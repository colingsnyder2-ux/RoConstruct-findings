// roc 2010-06 004163b0  unit: PasteVerb  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004163b0
//
// 004163b0  51                   push ecx
// 004163b1  56                   push esi
// 004163b2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004163b6  83c104               add ecx, 4
// 004163b9  51                   push ecx
// 004163ba  56                   push esi
// 004163bb  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004163c3  e898feffff           call 0x416260
// 004163c8  83c408               add esp, 8
// 004163cb  8bc6                 mov eax, esi
// 004163cd  5e                   pop esi
// 004163ce  59                   pop ecx
// 004163cf  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
