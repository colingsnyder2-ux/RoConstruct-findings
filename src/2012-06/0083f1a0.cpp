// roc 2012-06 0083f1a0  unit: seg_00830000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0083f1a0
//
// 0083f1a0  a1d413de00           mov eax, dword ptr [0xde13d4]
// 0083f1a5  83ec0c               sub esp, 0xc
// 0083f1a8  56                   push esi
// 0083f1a9  8b742414             mov esi, dword ptr [esp + 0x14]
// 0083f1ad  50                   push eax
// 0083f1ae  6a01                 push 1
// 0083f1b0  56                   push esi
// 0083f1b1  e85a46ffff           call 0x833810
// 0083f1b6  83c40c               add esp, 0xc
// 0083f1b9  8d4c240c             lea ecx, [esp + 0xc]
// 0083f1bd  51                   push ecx
// 0083f1be  8d54240c             lea edx, [esp + 0xc]
// 0083f1c2  52                   push edx
// 0083f1c3  8d4c240c             lea ecx, [esp + 0xc]
// 0083f1c7  51                   push ecx
// 0083f1c8  8bc8                 mov ecx, eax
// 0083f1ca  e831dbdeff           call 0x62cd00
// 0083f1cf  d9442404             fld dword ptr [esp + 4]
// 0083f1d3  83ec08               sub esp, 8
// 0083f1d6  dd1c24               fstp qword ptr [esp]
// 0083f1d9  56                   push esi
// 0083f1da  e8d12effff           call 0x8320b0
// 0083f1df  d9442414             fld dword ptr [esp + 0x14]
// 0083f1e3  83c404               add esp, 4
// 0083f1e6  dd1c24               fstp qword ptr [esp]
// 0083f1e9  56                   push esi
// 0083f1ea  e8c12effff           call 0x8320b0
// 0083f1ef  d9442418             fld dword ptr [esp + 0x18]
// 0083f1f3  83c404               add esp, 4
// 0083f1f6  dd1c24               fstp qword ptr [esp]
// 0083f1f9  56                   push esi
// 0083f1fa  e8b12effff           call 0x8320b0
// 0083f1ff  83c40c               add esp, 0xc
// 0083f202  b803000000           mov eax, 3
// 0083f207  5e                   pop esi
// 0083f208  83c40c               add esp, 0xc
// 0083f20b  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_toEulerAnglesXYZ@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
