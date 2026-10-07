// roc 2007-08 005c3b10  unit: boost::signals::Vconnection::?$sp_counted_impl_p  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c3b10
//
// 005c3b10  6aff                 push -1
// 005c3b12  68b8977500           push 0x7597b8
// 005c3b17  64a100000000         mov eax, dword ptr fs:[0]
// 005c3b1d  50                   push eax
// 005c3b1e  64892500000000       mov dword ptr fs:[0], esp
// 005c3b25  51                   push ecx
// 005c3b26  56                   push esi
// 005c3b27  8bf1                 mov esi, ecx
// 005c3b29  89742404             mov dword ptr [esp + 4], esi
// 005c3b2d  8b442418             mov eax, dword ptr [esp + 0x18]
// 005c3b31  50                   push eax
// 005c3b32  8d4e04               lea ecx, [esi + 4]
// 005c3b35  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005c3b3d  c706a0957b00         mov dword ptr [esi], 0x7b95a0
// 005c3b43  e8d8fdffff           call 0x5c3920
// 005c3b48  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c3b4c  8bc6                 mov eax, esi
// 005c3b4e  5e                   pop esi
// 005c3b4f  64890d00000000       mov dword ptr fs:[0], ecx
// 005c3b56  83c410               add esp, 0x10
// 005c3b59  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??0?$holder@VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
