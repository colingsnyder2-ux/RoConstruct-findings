// roc 2011-06 0077bd70  unit: seg_00770000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077bd70
//
// 0077bd70  51                   push ecx
// 0077bd71  56                   push esi
// 0077bd72  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0077bd76  83c104               add ecx, 4
// 0077bd79  51                   push ecx
// 0077bd7a  56                   push esi
// 0077bd7b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0077bd83  e808ffffff           call 0x77bc90
// 0077bd88  83c408               add esp, 8
// 0077bd8b  8bc6                 mov eax, esi
// 0077bd8d  5e                   pop esi
// 0077bd8e  59                   pop ecx
// 0077bd8f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
