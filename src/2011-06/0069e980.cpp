// roc 2011-06 0069e980  unit: RBX::VInstance::?$NonFactoryProduct  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0069e980
//
// 0069e980  51                   push ecx
// 0069e981  56                   push esi
// 0069e982  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0069e986  83c104               add ecx, 4
// 0069e989  51                   push ecx
// 0069e98a  56                   push esi
// 0069e98b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0069e993  e8c8fdffff           call 0x69e760
// 0069e998  83c408               add esp, 8
// 0069e99b  8bc6                 mov eax, esi
// 0069e99d  5e                   pop esi
// 0069e99e  59                   pop ecx
// 0069e99f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
