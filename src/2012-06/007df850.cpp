// roc 2012-06 007df850  unit: std::D::DU?$char_traits::V?$basic_string::?$LRUCache  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007df850
//
// 007df850  51                   push ecx
// 007df851  56                   push esi
// 007df852  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007df856  83c104               add ecx, 4
// 007df859  51                   push ecx
// 007df85a  56                   push esi
// 007df85b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 007df863  e8183cd4ff           call 0x523480
// 007df868  83c408               add esp, 8
// 007df86b  8bc6                 mov eax, esi
// 007df86d  5e                   pop esi
// 007df86e  59                   pop ecx
// 007df86f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
