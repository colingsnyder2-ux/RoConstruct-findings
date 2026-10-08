// roc 2007-03 00539690  unit: seg_00530000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00539690
//
// 00539690  51                   push ecx
// 00539691  56                   push esi
// 00539692  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00539696  83c104               add ecx, 4
// 00539699  51                   push ecx
// 0053969a  56                   push esi
// 0053969b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005396a3  e8c8f9ffff           call 0x539070
// 005396a8  83c408               add esp, 8
// 005396ab  8bc6                 mov eax, esi
// 005396ad  5e                   pop esi
// 005396ae  59                   pop ecx
// 005396af  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
