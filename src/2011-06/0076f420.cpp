// roc 2011-06 0076f420  unit: seg_00760000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0076f420
//
// 0076f420  a1dcefc800           mov eax, dword ptr [0xc8efdc]
// 0076f425  83ec0c               sub esp, 0xc
// 0076f428  56                   push esi
// 0076f429  8b742414             mov esi, dword ptr [esp + 0x14]
// 0076f42d  50                   push eax
// 0076f42e  6a01                 push 1
// 0076f430  56                   push esi
// 0076f431  e84a4cffff           call 0x764080
// 0076f436  83c40c               add esp, 0xc
// 0076f439  8d4c240c             lea ecx, [esp + 0xc]
// 0076f43d  51                   push ecx
// 0076f43e  8d54240c             lea edx, [esp + 0xc]
// 0076f442  52                   push edx
// 0076f443  8d4c240c             lea ecx, [esp + 0xc]
// 0076f447  51                   push ecx
// 0076f448  8bc8                 mov ecx, eax
// 0076f44a  e81116ddff           call 0x540a60
// 0076f44f  d9442404             fld dword ptr [esp + 4]
// 0076f453  83ec08               sub esp, 8
// 0076f456  dd1c24               fstp qword ptr [esp]
// 0076f459  56                   push esi
// 0076f45a  e8c134ffff           call 0x762920
// 0076f45f  d9442414             fld dword ptr [esp + 0x14]
// 0076f463  83c404               add esp, 4
// 0076f466  dd1c24               fstp qword ptr [esp]
// 0076f469  56                   push esi
// 0076f46a  e8b134ffff           call 0x762920
// 0076f46f  d9442418             fld dword ptr [esp + 0x18]
// 0076f473  83c404               add esp, 4
// 0076f476  dd1c24               fstp qword ptr [esp]
// 0076f479  56                   push esi
// 0076f47a  e8a134ffff           call 0x762920
// 0076f47f  83c40c               add esp, 0xc
// 0076f482  b803000000           mov eax, 3
// 0076f487  5e                   pop esi
// 0076f488  83c40c               add esp, 0xc
// 0076f48b  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_toEulerAnglesXYZ@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
