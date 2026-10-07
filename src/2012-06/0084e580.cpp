// roc 2012-06 0084e580  unit: RBX::Lua::LuaArguments  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0084e580
//
// 0084e580  51                   push ecx
// 0084e581  56                   push esi
// 0084e582  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0084e586  83c104               add ecx, 4
// 0084e589  51                   push ecx
// 0084e58a  56                   push esi
// 0084e58b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0084e593  e8e8feffff           call 0x84e480
// 0084e598  83c408               add esp, 8
// 0084e59b  8bc6                 mov eax, esi
// 0084e59d  5e                   pop esi
// 0084e59e  59                   pop ecx
// 0084e59f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
