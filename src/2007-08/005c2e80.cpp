// roc 2007-08 005c2e80  unit: RBX::Lua::LuaArguments  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c2e80
//
// 005c2e80  a180be8a00           mov eax, dword ptr [0x8abe80]
// 005c2e85  83ec0c               sub esp, 0xc
// 005c2e88  56                   push esi
// 005c2e89  8b742414             mov esi, dword ptr [esp + 0x14]
// 005c2e8d  50                   push eax
// 005c2e8e  6a01                 push 1
// 005c2e90  56                   push esi
// 005c2e91  e8aac3ffff           call 0x5bf240
// 005c2e96  83c40c               add esp, 0xc
// 005c2e99  8d4c240c             lea ecx, [esp + 0xc]
// 005c2e9d  51                   push ecx
// 005c2e9e  8d54240c             lea edx, [esp + 0xc]
// 005c2ea2  52                   push edx
// 005c2ea3  8d4c240c             lea ecx, [esp + 0xc]
// 005c2ea7  51                   push ecx
// 005c2ea8  8bc8                 mov ecx, eax
// 005c2eaa  e8816ef4ff           call 0x509d30
// 005c2eaf  d9442404             fld dword ptr [esp + 4]
// 005c2eb3  83ec08               sub esp, 8
// 005c2eb6  dd1c24               fstp qword ptr [esp]
// 005c2eb9  56                   push esi
// 005c2eba  e8b1acffff           call 0x5bdb70
// 005c2ebf  d9442414             fld dword ptr [esp + 0x14]
// 005c2ec3  83c404               add esp, 4
// 005c2ec6  dd1c24               fstp qword ptr [esp]
// 005c2ec9  56                   push esi
// 005c2eca  e8a1acffff           call 0x5bdb70
// 005c2ecf  d9442418             fld dword ptr [esp + 0x18]
// 005c2ed3  83c404               add esp, 4
// 005c2ed6  dd1c24               fstp qword ptr [esp]
// 005c2ed9  56                   push esi
// 005c2eda  e891acffff           call 0x5bdb70
// 005c2edf  83c40c               add esp, 0xc
// 005c2ee2  b803000000           mov eax, 3
// 005c2ee7  5e                   pop esi
// 005c2ee8  83c40c               add esp, 0xc
// 005c2eeb  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_toEulerAnglesXYZ@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
