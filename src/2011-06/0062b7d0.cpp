// roc 2011-06 0062b7d0  unit: RBX::Lua::WeakFunctionRef  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0062b7d0
//
// 0062b7d0  6aff                 push -1
// 0062b7d2  68a82b9e00           push 0x9e2ba8
// 0062b7d7  64a100000000         mov eax, dword ptr fs:[0]
// 0062b7dd  50                   push eax
// 0062b7de  64892500000000       mov dword ptr fs:[0], esp
// 0062b7e5  51                   push ecx
// 0062b7e6  56                   push esi
// 0062b7e7  8bf1                 mov esi, ecx
// 0062b7e9  89742404             mov dword ptr [esp + 4], esi
// 0062b7ed  8b442418             mov eax, dword ptr [esp + 0x18]
// 0062b7f1  50                   push eax
// 0062b7f2  8d4e04               lea ecx, [esi + 4]
// 0062b7f5  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0062b7fd  c7066c57a900         mov dword ptr [esi], 0xa9576c
// 0062b803  e808ffffff           call 0x62b710
// 0062b808  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062b80c  8bc6                 mov eax, esi
// 0062b80e  5e                   pop esi
// 0062b80f  64890d00000000       mov dword ptr fs:[0], ecx
// 0062b816  83c410               add esp, 0x10
// 0062b819  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??0?$holder@VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
