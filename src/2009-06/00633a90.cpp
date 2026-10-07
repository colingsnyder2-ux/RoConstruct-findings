// roc 2009-06 00633a90  unit: std::strstream  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00633a90
//
// 00633a90  6aff                 push -1
// 00633a92  68a8688600           push 0x8668a8
// 00633a97  64a100000000         mov eax, dword ptr fs:[0]
// 00633a9d  50                   push eax
// 00633a9e  64892500000000       mov dword ptr fs:[0], esp
// 00633aa5  51                   push ecx
// 00633aa6  56                   push esi
// 00633aa7  8bf1                 mov esi, ecx
// 00633aa9  89742404             mov dword ptr [esp + 4], esi
// 00633aad  8b442418             mov eax, dword ptr [esp + 0x18]
// 00633ab1  50                   push eax
// 00633ab2  8d4e04               lea ecx, [esi + 4]
// 00633ab5  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00633abd  c7066cb38d00         mov dword ptr [esi], 0x8db36c
// 00633ac3  e8c81e0600           call 0x695990
// 00633ac8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00633acc  8bc6                 mov eax, esi
// 00633ace  5e                   pop esi
// 00633acf  64890d00000000       mov dword ptr fs:[0], ecx
// 00633ad6  83c410               add esp, 0x10
// 00633ad9  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??0?$holder@VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
