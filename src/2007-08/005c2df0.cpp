// roc 2007-08 005c2df0  unit: RBX::Lua::LuaArguments  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c2df0
//
// 005c2df0  55                   push ebp
// 005c2df1  8bec                 mov ebp, esp
// 005c2df3  83e4c0               and esp, 0xffffffc0
// 005c2df6  83ec34               sub esp, 0x34
// 005c2df9  a180be8a00           mov eax, dword ptr [0x8abe80]
// 005c2dfe  53                   push ebx
// 005c2dff  56                   push esi
// 005c2e00  57                   push edi
// 005c2e01  8b7d08               mov edi, dword ptr [ebp + 8]
// 005c2e04  50                   push eax
// 005c2e05  6a01                 push 1
// 005c2e07  57                   push edi
// 005c2e08  e833c4ffff           call 0x5bf240
// 005c2e0d  8bf0                 mov esi, eax
// 005c2e0f  d94624               fld dword ptr [esi + 0x24]
// 005c2e12  83c404               add esp, 4
// 005c2e15  dd1c24               fstp qword ptr [esp]
// 005c2e18  57                   push edi
// 005c2e19  e852adffff           call 0x5bdb70
// 005c2e1e  d94628               fld dword ptr [esi + 0x28]
// 005c2e21  83c404               add esp, 4
// 005c2e24  dd1c24               fstp qword ptr [esp]
// 005c2e27  57                   push edi
// 005c2e28  e843adffff           call 0x5bdb70
// 005c2e2d  d9462c               fld dword ptr [esi + 0x2c]
// 005c2e30  83c404               add esp, 4
// 005c2e33  dd1c24               fstp qword ptr [esp]
// 005c2e36  57                   push edi
// 005c2e37  e834adffff           call 0x5bdb70
// 005c2e3c  83c40c               add esp, 0xc
// 005c2e3f  c744243c03000000     mov dword ptr [esp + 0x3c], 3
// 005c2e47  bb03000000           mov ebx, 3
// 005c2e4c  8d642400             lea esp, [esp]
// 005c2e50  d906                 fld dword ptr [esi]
// 005c2e52  83ec08               sub esp, 8
// 005c2e55  dd1c24               fstp qword ptr [esp]
// 005c2e58  57                   push edi
// 005c2e59  e812adffff           call 0x5bdb70
// 005c2e5e  83c40c               add esp, 0xc
// 005c2e61  83c604               add esi, 4
// 005c2e64  83eb01               sub ebx, 1
// 005c2e67  75e7                 jne 0x5c2e50
// 005c2e69  836c243c01           sub dword ptr [esp + 0x3c], 1
// 005c2e6e  75d7                 jne 0x5c2e47
// 005c2e70  5f                   pop edi
// 005c2e71  5e                   pop esi
// 005c2e72  b80c000000           mov eax, 0xc
// 005c2e77  5b                   pop ebx
// 005c2e78  8be5                 mov esp, ebp
// 005c2e7a  5d                   pop ebp
// 005c2e7b  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_components@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
