// roc 2008-06 00416340  unit: CopyVerb  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00416340
//
// 00416340  51                   push ecx
// 00416341  56                   push esi
// 00416342  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00416346  83c104               add ecx, 4
// 00416349  51                   push ecx
// 0041634a  56                   push esi
// 0041634b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00416353  e858feffff           call 0x4161b0
// 00416358  83c408               add esp, 8
// 0041635b  8bc6                 mov eax, esi
// 0041635d  5e                   pop esi
// 0041635e  59                   pop ecx
// 0041635f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
