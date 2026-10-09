// roc 2009-12 00416610  unit: PasteVerb  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00416610
//
// 00416610  51                   push ecx
// 00416611  56                   push esi
// 00416612  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00416616  83c104               add ecx, 4
// 00416619  51                   push ecx
// 0041661a  56                   push esi
// 0041661b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00416623  e888feffff           call 0x4164b0
// 00416628  83c408               add esp, 8
// 0041662b  8bc6                 mov eax, esi
// 0041662d  5e                   pop esi
// 0041662e  59                   pop ecx
// 0041662f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
