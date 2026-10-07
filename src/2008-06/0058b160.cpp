// roc 2008-06 0058b160  unit: RBX::VChangeHistoryService::?$BoundFuncDesc  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058b160
//
// 0058b160  6aff                 push -1
// 0058b162  6898987d00           push 0x7d9898
// 0058b167  64a100000000         mov eax, dword ptr fs:[0]
// 0058b16d  50                   push eax
// 0058b16e  64892500000000       mov dword ptr fs:[0], esp
// 0058b175  51                   push ecx
// 0058b176  56                   push esi
// 0058b177  8bf1                 mov esi, ecx
// 0058b179  89742404             mov dword ptr [esp + 4], esi
// 0058b17d  8b442418             mov eax, dword ptr [esp + 0x18]
// 0058b181  50                   push eax
// 0058b182  8d4e04               lea ecx, [esi + 4]
// 0058b185  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0058b18d  c7063c198300         mov dword ptr [esi], 0x83193c
// 0058b193  e8384dfdff           call 0x55fed0
// 0058b198  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058b19c  8bc6                 mov eax, esi
// 0058b19e  5e                   pop esi
// 0058b19f  64890d00000000       mov dword ptr fs:[0], ecx
// 0058b1a6  83c410               add esp, 0x10
// 0058b1a9  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??0?$holder@VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
