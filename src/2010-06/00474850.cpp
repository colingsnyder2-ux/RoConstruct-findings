// roc 2010-06 00474850  unit: CScriptReviewView  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00474850
//
// 00474850  51                   push ecx
// 00474851  56                   push esi
// 00474852  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00474856  83c104               add ecx, 4
// 00474859  51                   push ecx
// 0047485a  56                   push esi
// 0047485b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00474863  e8d8feffff           call 0x474740
// 00474868  83c408               add esp, 8
// 0047486b  8bc6                 mov eax, esi
// 0047486d  5e                   pop esi
// 0047486e  59                   pop ecx
// 0047486f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
