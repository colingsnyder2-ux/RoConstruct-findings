// roc 2007-03 005bebd0  unit: seg_005b0000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bebd0
//
// 005bebd0  6aff                 push -1
// 005bebd2  68c8a37500           push 0x75a3c8
// 005bebd7  64a100000000         mov eax, dword ptr fs:[0]
// 005bebdd  50                   push eax
// 005bebde  64892500000000       mov dword ptr fs:[0], esp
// 005bebe5  51                   push ecx
// 005bebe6  56                   push esi
// 005bebe7  8bf1                 mov esi, ecx
// 005bebe9  89742404             mov dword ptr [esp + 4], esi
// 005bebed  8b442418             mov eax, dword ptr [esp + 0x18]
// 005bebf1  50                   push eax
// 005bebf2  8d4e04               lea ecx, [esi + 4]
// 005bebf5  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005bebfd  c7065c967b00         mov dword ptr [esi], 0x7b965c
// 005bec03  e8d8fdffff           call 0x5be9e0
// 005bec08  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bec0c  8bc6                 mov eax, esi
// 005bec0e  5e                   pop esi
// 005bec0f  64890d00000000       mov dword ptr fs:[0], ecx
// 005bec16  83c410               add esp, 0x10
// 005bec19  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??0?$holder@VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
