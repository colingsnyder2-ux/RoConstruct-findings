// roc 2008-06 005accb0  unit: RBX::Reflection::VValue::V?$vector::?$holder  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005accb0
//
// 005accb0  6aff                 push -1
// 005accb2  6898987d00           push 0x7d9898
// 005accb7  64a100000000         mov eax, dword ptr fs:[0]
// 005accbd  50                   push eax
// 005accbe  64892500000000       mov dword ptr fs:[0], esp
// 005accc5  51                   push ecx
// 005accc6  56                   push esi
// 005accc7  8bf1                 mov esi, ecx
// 005accc9  89742404             mov dword ptr [esp + 4], esi
// 005acccd  8b442418             mov eax, dword ptr [esp + 0x18]
// 005accd1  50                   push eax
// 005accd2  8d4e04               lea ecx, [esi + 4]
// 005accd5  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005accdd  c706c8458300         mov dword ptr [esi], 0x8345c8
// 005acce3  e8e831fbff           call 0x55fed0
// 005acce8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005accec  8bc6                 mov eax, esi
// 005accee  5e                   pop esi
// 005accef  64890d00000000       mov dword ptr fs:[0], ecx
// 005accf6  83c410               add esp, 0x10
// 005accf9  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??0?$holder@VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
