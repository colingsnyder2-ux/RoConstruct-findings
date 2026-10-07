// roc 2012-06 0084e550  unit: RBX::Lua::LuaArguments  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0084e550
//
// 0084e550  51                   push ecx
// 0084e551  56                   push esi
// 0084e552  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0084e556  83c104               add ecx, 4
// 0084e559  51                   push ecx
// 0084e55a  56                   push esi
// 0084e55b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0084e563  e8d8feffff           call 0x84e440
// 0084e568  83c408               add esp, 8
// 0084e56b  8bc6                 mov eax, esi
// 0084e56d  5e                   pop esi
// 0084e56e  59                   pop ecx
// 0084e56f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
