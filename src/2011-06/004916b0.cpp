// roc 2011-06 004916b0  unit: CScriptReviewView  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004916b0
//
// 004916b0  51                   push ecx
// 004916b1  56                   push esi
// 004916b2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004916b6  83c104               add ecx, 4
// 004916b9  51                   push ecx
// 004916ba  56                   push esi
// 004916bb  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004916c3  e8c8feffff           call 0x491590
// 004916c8  83c408               add esp, 8
// 004916cb  8bc6                 mov eax, esi
// 004916cd  5e                   pop esi
// 004916ce  59                   pop ecx
// 004916cf  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
