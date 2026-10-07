// roc 2011-06 0077bda0  unit: seg_00770000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077bda0
//
// 0077bda0  51                   push ecx
// 0077bda1  56                   push esi
// 0077bda2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0077bda6  83c104               add ecx, 4
// 0077bda9  51                   push ecx
// 0077bdaa  56                   push esi
// 0077bdab  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0077bdb3  e818ffffff           call 0x77bcd0
// 0077bdb8  83c408               add esp, 8
// 0077bdbb  8bc6                 mov eax, esi
// 0077bdbd  5e                   pop esi
// 0077bdbe  59                   pop ecx
// 0077bdbf  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
