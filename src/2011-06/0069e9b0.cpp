// roc 2011-06 0069e9b0  unit: RBX::VInstance::?$NonFactoryProduct  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0069e9b0
//
// 0069e9b0  51                   push ecx
// 0069e9b1  56                   push esi
// 0069e9b2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0069e9b6  83c104               add ecx, 4
// 0069e9b9  51                   push ecx
// 0069e9ba  56                   push esi
// 0069e9bb  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0069e9c3  e848feffff           call 0x69e810
// 0069e9c8  83c408               add esp, 8
// 0069e9cb  8bc6                 mov eax, esi
// 0069e9cd  5e                   pop esi
// 0069e9ce  59                   pop ecx
// 0069e9cf  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
