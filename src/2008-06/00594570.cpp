// roc 2008-06 00594570  unit: boost::Vrecursive_mutex::?$sp_counted_impl_p  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00594570
//
// 00594570  6aff                 push -1
// 00594572  6898987d00           push 0x7d9898
// 00594577  64a100000000         mov eax, dword ptr fs:[0]
// 0059457d  50                   push eax
// 0059457e  64892500000000       mov dword ptr fs:[0], esp
// 00594585  51                   push ecx
// 00594586  56                   push esi
// 00594587  8bf1                 mov esi, ecx
// 00594589  89742404             mov dword ptr [esp + 4], esi
// 0059458d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00594591  50                   push eax
// 00594592  8d4e04               lea ecx, [esi + 4]
// 00594595  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0059459d  c70678228300         mov dword ptr [esi], 0x832278
// 005945a3  e838ffffff           call 0x5944e0
// 005945a8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005945ac  8bc6                 mov eax, esi
// 005945ae  5e                   pop esi
// 005945af  64890d00000000       mov dword ptr fs:[0], ecx
// 005945b6  83c410               add esp, 0x10
// 005945b9  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??0?$holder@VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
