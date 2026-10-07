// roc 2012-06 0084e4c0  unit: RBX::Lua::LuaArguments  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0084e4c0
//
// 0084e4c0  51                   push ecx
// 0084e4c1  56                   push esi
// 0084e4c2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0084e4c6  83c104               add ecx, 4
// 0084e4c9  51                   push ecx
// 0084e4ca  56                   push esi
// 0084e4cb  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0084e4d3  e8a8feffff           call 0x84e380
// 0084e4d8  83c408               add esp, 8
// 0084e4db  8bc6                 mov eax, esi
// 0084e4dd  5e                   pop esi
// 0084e4de  59                   pop ecx
// 0084e4df  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
