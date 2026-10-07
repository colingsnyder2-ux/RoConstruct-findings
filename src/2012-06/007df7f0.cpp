// roc 2012-06 007df7f0  unit: std::D::DU?$char_traits::V?$basic_string::?$LRUCache  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007df7f0
//
// 007df7f0  51                   push ecx
// 007df7f1  56                   push esi
// 007df7f2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007df7f6  83c104               add ecx, 4
// 007df7f9  51                   push ecx
// 007df7fa  56                   push esi
// 007df7fb  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 007df803  e868f3ffff           call 0x7deb70
// 007df808  83c408               add esp, 8
// 007df80b  8bc6                 mov eax, esi
// 007df80d  5e                   pop esi
// 007df80e  59                   pop ecx
// 007df80f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
