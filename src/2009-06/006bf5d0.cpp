// roc 2009-06 006bf5d0  unit: RBX::Lua::LuaArguments  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bf5d0
//
// 006bf5d0  a1fc2aa200           mov eax, dword ptr [0xa22afc]
// 006bf5d5  83ec0c               sub esp, 0xc
// 006bf5d8  56                   push esi
// 006bf5d9  8b742414             mov esi, dword ptr [esp + 0x14]
// 006bf5dd  50                   push eax
// 006bf5de  6a01                 push 1
// 006bf5e0  56                   push esi
// 006bf5e1  e8cab5ffff           call 0x6babb0
// 006bf5e6  83c40c               add esp, 0xc
// 006bf5e9  8d4c240c             lea ecx, [esp + 0xc]
// 006bf5ed  51                   push ecx
// 006bf5ee  8d54240c             lea edx, [esp + 0xc]
// 006bf5f2  52                   push edx
// 006bf5f3  8d4c240c             lea ecx, [esp + 0xc]
// 006bf5f7  51                   push ecx
// 006bf5f8  8bc8                 mov ecx, eax
// 006bf5fa  e8918aebff           call 0x578090
// 006bf5ff  d9442404             fld dword ptr [esp + 4]
// 006bf603  83ec08               sub esp, 8
// 006bf606  dd1c24               fstp qword ptr [esp]
// 006bf609  56                   push esi
// 006bf60a  e8319dffff           call 0x6b9340
// 006bf60f  d9442414             fld dword ptr [esp + 0x14]
// 006bf613  83c404               add esp, 4
// 006bf616  dd1c24               fstp qword ptr [esp]
// 006bf619  56                   push esi
// 006bf61a  e8219dffff           call 0x6b9340
// 006bf61f  d9442418             fld dword ptr [esp + 0x18]
// 006bf623  83c404               add esp, 4
// 006bf626  dd1c24               fstp qword ptr [esp]
// 006bf629  56                   push esi
// 006bf62a  e8119dffff           call 0x6b9340
// 006bf62f  83c40c               add esp, 0xc
// 006bf632  b803000000           mov eax, 3
// 006bf637  5e                   pop esi
// 006bf638  83c40c               add esp, 0xc
// 006bf63b  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_toEulerAnglesXYZ@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
