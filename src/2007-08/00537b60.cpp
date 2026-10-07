// roc 2007-08 00537b60  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00537b60
//
// 00537b60  51                   push ecx
// 00537b61  56                   push esi
// 00537b62  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00537b66  83c104               add ecx, 4
// 00537b69  51                   push ecx
// 00537b6a  56                   push esi
// 00537b6b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00537b73  e898f9ffff           call 0x537510
// 00537b78  83c408               add esp, 8
// 00537b7b  8bc6                 mov eax, esi
// 00537b7d  5e                   pop esi
// 00537b7e  59                   pop ecx
// 00537b7f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
