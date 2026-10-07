// roc 2012-06 0084e4f0  unit: RBX::Lua::LuaArguments  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0084e4f0
//
// 0084e4f0  51                   push ecx
// 0084e4f1  56                   push esi
// 0084e4f2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0084e4f6  83c104               add ecx, 4
// 0084e4f9  51                   push ecx
// 0084e4fa  56                   push esi
// 0084e4fb  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0084e503  e8b8feffff           call 0x84e3c0
// 0084e508  83c408               add esp, 8
// 0084e50b  8bc6                 mov eax, esi
// 0084e50d  5e                   pop esi
// 0084e50e  59                   pop ecx
// 0084e50f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
