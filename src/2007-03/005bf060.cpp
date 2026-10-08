// roc 2007-03 005bf060  unit: seg_005b0000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bf060
//
// 005bf060  6aff                 push -1
// 005bf062  68c8a37500           push 0x75a3c8
// 005bf067  64a100000000         mov eax, dword ptr fs:[0]
// 005bf06d  50                   push eax
// 005bf06e  64892500000000       mov dword ptr fs:[0], esp
// 005bf075  51                   push ecx
// 005bf076  56                   push esi
// 005bf077  8bf1                 mov esi, ecx
// 005bf079  89742404             mov dword ptr [esp + 4], esi
// 005bf07d  8b442418             mov eax, dword ptr [esp + 0x18]
// 005bf081  50                   push eax
// 005bf082  8d4e04               lea ecx, [esi + 4]
// 005bf085  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005bf08d  c70668967b00         mov dword ptr [esi], 0x7b9668
// 005bf093  e8d8feffff           call 0x5bef70
// 005bf098  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bf09c  8bc6                 mov eax, esi
// 005bf09e  5e                   pop esi
// 005bf09f  64890d00000000       mov dword ptr fs:[0], ecx
// 005bf0a6  83c410               add esp, 0x10
// 005bf0a9  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??0?$holder@VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
