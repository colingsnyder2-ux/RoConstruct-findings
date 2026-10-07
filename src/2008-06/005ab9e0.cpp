// roc 2008-06 005ab9e0  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ab9e0
//
// 005ab9e0  51                   push ecx
// 005ab9e1  56                   push esi
// 005ab9e2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ab9e6  83c104               add ecx, 4
// 005ab9e9  51                   push ecx
// 005ab9ea  56                   push esi
// 005ab9eb  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ab9f3  e848f8ffff           call 0x5ab240
// 005ab9f8  83c408               add esp, 8
// 005ab9fb  8bc6                 mov eax, esi
// 005ab9fd  5e                   pop esi
// 005ab9fe  59                   pop ecx
// 005ab9ff  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
