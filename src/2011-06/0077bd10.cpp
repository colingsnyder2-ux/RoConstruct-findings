// roc 2011-06 0077bd10  unit: seg_00770000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077bd10
//
// 0077bd10  51                   push ecx
// 0077bd11  56                   push esi
// 0077bd12  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0077bd16  83c104               add ecx, 4
// 0077bd19  51                   push ecx
// 0077bd1a  56                   push esi
// 0077bd1b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0077bd23  e8e8feffff           call 0x77bc10
// 0077bd28  83c408               add esp, 8
// 0077bd2b  8bc6                 mov eax, esi
// 0077bd2d  5e                   pop esi
// 0077bd2e  59                   pop ecx
// 0077bd2f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
