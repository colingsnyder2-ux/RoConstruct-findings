// roc 2007-03 00412d40  unit: seg_00410000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00412d40
//
// 00412d40  51                   push ecx
// 00412d41  56                   push esi
// 00412d42  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00412d46  83c104               add ecx, 4
// 00412d49  51                   push ecx
// 00412d4a  56                   push esi
// 00412d4b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00412d53  e8c8fdffff           call 0x412b20
// 00412d58  83c408               add esp, 8
// 00412d5b  8bc6                 mov eax, esi
// 00412d5d  5e                   pop esi
// 00412d5e  59                   pop ecx
// 00412d5f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
