// roc 2010-06 0072c440  unit: seg_00720000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0072c440
//
// 0072c440  a1602abe00           mov eax, dword ptr [0xbe2a60]
// 0072c445  83ec0c               sub esp, 0xc
// 0072c448  56                   push esi
// 0072c449  8b742414             mov esi, dword ptr [esp + 0x14]
// 0072c44d  50                   push eax
// 0072c44e  6a01                 push 1
// 0072c450  56                   push esi
// 0072c451  e8ba69ffff           call 0x722e10
// 0072c456  83c40c               add esp, 0xc
// 0072c459  8d4c240c             lea ecx, [esp + 0xc]
// 0072c45d  51                   push ecx
// 0072c45e  8d54240c             lea edx, [esp + 0xc]
// 0072c462  52                   push edx
// 0072c463  8d4c240c             lea ecx, [esp + 0xc]
// 0072c467  51                   push ecx
// 0072c468  8bc8                 mov ecx, eax
// 0072c46a  e811a6e2ff           call 0x556a80
// 0072c46f  d9442404             fld dword ptr [esp + 4]
// 0072c473  83ec08               sub esp, 8
// 0072c476  dd1c24               fstp qword ptr [esp]
// 0072c479  56                   push esi
// 0072c47a  e89150ffff           call 0x721510
// 0072c47f  d9442414             fld dword ptr [esp + 0x14]
// 0072c483  83c404               add esp, 4
// 0072c486  dd1c24               fstp qword ptr [esp]
// 0072c489  56                   push esi
// 0072c48a  e88150ffff           call 0x721510
// 0072c48f  d9442418             fld dword ptr [esp + 0x18]
// 0072c493  83c404               add esp, 4
// 0072c496  dd1c24               fstp qword ptr [esp]
// 0072c499  56                   push esi
// 0072c49a  e87150ffff           call 0x721510
// 0072c49f  83c40c               add esp, 0xc
// 0072c4a2  b803000000           mov eax, 3
// 0072c4a7  5e                   pop esi
// 0072c4a8  83c40c               add esp, 0xc
// 0072c4ab  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_toEulerAnglesXYZ@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
