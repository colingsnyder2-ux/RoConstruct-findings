// roc 2007-08 00411e30  unit: boost::bad_any_cast  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00411e30
//
// 00411e30  51                   push ecx
// 00411e31  56                   push esi
// 00411e32  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00411e36  83c104               add ecx, 4
// 00411e39  51                   push ecx
// 00411e3a  56                   push esi
// 00411e3b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00411e43  e848feffff           call 0x411c90
// 00411e48  83c408               add esp, 8
// 00411e4b  8bc6                 mov eax, esi
// 00411e4d  5e                   pop esi
// 00411e4e  59                   pop ecx
// 00411e4f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
