// roc 2008-06 0061e340  unit: RBX::Lua::LuaArguments  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061e340
//
// 0061e340  a1c8b19500           mov eax, dword ptr [0x95b1c8]
// 0061e345  83ec0c               sub esp, 0xc
// 0061e348  56                   push esi
// 0061e349  8b742414             mov esi, dword ptr [esp + 0x14]
// 0061e34d  50                   push eax
// 0061e34e  6a01                 push 1
// 0061e350  56                   push esi
// 0061e351  e85a32ffff           call 0x6115b0
// 0061e356  83c40c               add esp, 0xc
// 0061e359  8d4c240c             lea ecx, [esp + 0xc]
// 0061e35d  51                   push ecx
// 0061e35e  8d54240c             lea edx, [esp + 0xc]
// 0061e362  52                   push edx
// 0061e363  8d4c240c             lea ecx, [esp + 0xc]
// 0061e367  51                   push ecx
// 0061e368  8bc8                 mov ecx, eax
// 0061e36a  e8b153efff           call 0x513720
// 0061e36f  d9442404             fld dword ptr [esp + 4]
// 0061e373  83ec08               sub esp, 8
// 0061e376  dd1c24               fstp qword ptr [esp]
// 0061e379  56                   push esi
// 0061e37a  e8813effff           call 0x612200
// 0061e37f  d9442414             fld dword ptr [esp + 0x14]
// 0061e383  83c404               add esp, 4
// 0061e386  dd1c24               fstp qword ptr [esp]
// 0061e389  56                   push esi
// 0061e38a  e8713effff           call 0x612200
// 0061e38f  d9442418             fld dword ptr [esp + 0x18]
// 0061e393  83c404               add esp, 4
// 0061e396  dd1c24               fstp qword ptr [esp]
// 0061e399  56                   push esi
// 0061e39a  e8613effff           call 0x612200
// 0061e39f  83c40c               add esp, 0xc
// 0061e3a2  b803000000           mov eax, 3
// 0061e3a7  5e                   pop esi
// 0061e3a8  83c40c               add esp, 0xc
// 0061e3ab  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_toEulerAnglesXYZ@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
