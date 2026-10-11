// roc 2007-03 005be6f0  unit: seg_005b0000  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005be6f0
//
// 005be6f0  6aff                 push -1
// 005be6f2  68e96e7500           push 0x756ee9
// 005be6f7  64a100000000         mov eax, dword ptr fs:[0]
// 005be6fd  50                   push eax
// 005be6fe  64892500000000       mov dword ptr fs:[0], esp
// 005be705  83ec44               sub esp, 0x44
// 005be708  8b442458             mov eax, dword ptr [esp + 0x58]
// 005be70c  50                   push eax
// 005be70d  8d4c2404             lea ecx, [esp + 4]
// 005be711  6824b67a00           push 0x7ab624
// 005be716  51                   push ecx
// 005be717  e8146cf3ff           call 0x4f5330
// 005be71c  83c40c               add esp, 0xc
// 005be71f  50                   push eax
// 005be720  8d4c2420             lea ecx, [esp + 0x20]
// 005be724  c744245000000000     mov dword ptr [esp + 0x50], 0
// 005be72c  e8ef55e5ff           call 0x413d20
// 005be731  68e0138400           push 0x8413e0
// 005be736  8d542420             lea edx, [esp + 0x20]
// 005be73a  52                   push edx
// 005be73b  e8ee080600           call 0x61f02e
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_newindex@?$Bridge@VColor3@G3D@@$00@Lua@RBX@@KAXAAVColor3@G3D@@PBDPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaAtomicClasses.cpp
