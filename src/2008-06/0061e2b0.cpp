// roc 2008-06 0061e2b0  unit: RBX::Lua::LuaArguments  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061e2b0
//
// 0061e2b0  55                   push ebp
// 0061e2b1  8bec                 mov ebp, esp
// 0061e2b3  83e4c0               and esp, 0xffffffc0
// 0061e2b6  83ec34               sub esp, 0x34
// 0061e2b9  a1c8b19500           mov eax, dword ptr [0x95b1c8]
// 0061e2be  53                   push ebx
// 0061e2bf  56                   push esi
// 0061e2c0  57                   push edi
// 0061e2c1  8b7d08               mov edi, dword ptr [ebp + 8]
// 0061e2c4  50                   push eax
// 0061e2c5  6a01                 push 1
// 0061e2c7  57                   push edi
// 0061e2c8  e8e332ffff           call 0x6115b0
// 0061e2cd  8bf0                 mov esi, eax
// 0061e2cf  d94624               fld dword ptr [esi + 0x24]
// 0061e2d2  83c404               add esp, 4
// 0061e2d5  dd1c24               fstp qword ptr [esp]
// 0061e2d8  57                   push edi
// 0061e2d9  e8223fffff           call 0x612200
// 0061e2de  d94628               fld dword ptr [esi + 0x28]
// 0061e2e1  83c404               add esp, 4
// 0061e2e4  dd1c24               fstp qword ptr [esp]
// 0061e2e7  57                   push edi
// 0061e2e8  e8133fffff           call 0x612200
// 0061e2ed  d9462c               fld dword ptr [esi + 0x2c]
// 0061e2f0  83c404               add esp, 4
// 0061e2f3  dd1c24               fstp qword ptr [esp]
// 0061e2f6  57                   push edi
// 0061e2f7  e8043fffff           call 0x612200
// 0061e2fc  83c40c               add esp, 0xc
// 0061e2ff  c744243c03000000     mov dword ptr [esp + 0x3c], 3
// 0061e307  bb03000000           mov ebx, 3
// 0061e30c  8d642400             lea esp, [esp]
// 0061e310  d906                 fld dword ptr [esi]
// 0061e312  83ec08               sub esp, 8
// 0061e315  dd1c24               fstp qword ptr [esp]
// 0061e318  57                   push edi
// 0061e319  e8e23effff           call 0x612200
// 0061e31e  83c40c               add esp, 0xc
// 0061e321  83c604               add esi, 4
// 0061e324  83eb01               sub ebx, 1
// 0061e327  75e7                 jne 0x61e310
// 0061e329  836c243c01           sub dword ptr [esp + 0x3c], 1
// 0061e32e  75d7                 jne 0x61e307
// 0061e330  5f                   pop edi
// 0061e331  5e                   pop esi
// 0061e332  8d430c               lea eax, [ebx + 0xc]
// 0061e335  5b                   pop ebx
// 0061e336  8be5                 mov esp, ebp
// 0061e338  5d                   pop ebp
// 0061e339  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_components@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
