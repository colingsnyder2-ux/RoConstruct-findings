// roc 2009-06 006bf540  unit: RBX::Lua::LuaArguments  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bf540
//
// 006bf540  55                   push ebp
// 006bf541  8bec                 mov ebp, esp
// 006bf543  83e4c0               and esp, 0xffffffc0
// 006bf546  83ec34               sub esp, 0x34
// 006bf549  a1fc2aa200           mov eax, dword ptr [0xa22afc]
// 006bf54e  53                   push ebx
// 006bf54f  56                   push esi
// 006bf550  57                   push edi
// 006bf551  8b7d08               mov edi, dword ptr [ebp + 8]
// 006bf554  50                   push eax
// 006bf555  6a01                 push 1
// 006bf557  57                   push edi
// 006bf558  e853b6ffff           call 0x6babb0
// 006bf55d  8bf0                 mov esi, eax
// 006bf55f  d94624               fld dword ptr [esi + 0x24]
// 006bf562  83c404               add esp, 4
// 006bf565  dd1c24               fstp qword ptr [esp]
// 006bf568  57                   push edi
// 006bf569  e8d29dffff           call 0x6b9340
// 006bf56e  d94628               fld dword ptr [esi + 0x28]
// 006bf571  83c404               add esp, 4
// 006bf574  dd1c24               fstp qword ptr [esp]
// 006bf577  57                   push edi
// 006bf578  e8c39dffff           call 0x6b9340
// 006bf57d  d9462c               fld dword ptr [esi + 0x2c]
// 006bf580  83c404               add esp, 4
// 006bf583  dd1c24               fstp qword ptr [esp]
// 006bf586  57                   push edi
// 006bf587  e8b49dffff           call 0x6b9340
// 006bf58c  83c40c               add esp, 0xc
// 006bf58f  c744243c03000000     mov dword ptr [esp + 0x3c], 3
// 006bf597  bb03000000           mov ebx, 3
// 006bf59c  8d642400             lea esp, [esp]
// 006bf5a0  d906                 fld dword ptr [esi]
// 006bf5a2  83ec08               sub esp, 8
// 006bf5a5  dd1c24               fstp qword ptr [esp]
// 006bf5a8  57                   push edi
// 006bf5a9  e8929dffff           call 0x6b9340
// 006bf5ae  83c40c               add esp, 0xc
// 006bf5b1  83c604               add esi, 4
// 006bf5b4  83eb01               sub ebx, 1
// 006bf5b7  75e7                 jne 0x6bf5a0
// 006bf5b9  836c243c01           sub dword ptr [esp + 0x3c], 1
// 006bf5be  75d7                 jne 0x6bf597
// 006bf5c0  5f                   pop edi
// 006bf5c1  5e                   pop esi
// 006bf5c2  8d430c               lea eax, [ebx + 0xc]
// 006bf5c5  5b                   pop ebx
// 006bf5c6  8be5                 mov esp, ebp
// 006bf5c8  5d                   pop ebp
// 006bf5c9  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_components@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
