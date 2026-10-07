// roc 2010-06 0072c3b0  unit: seg_00720000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0072c3b0
//
// 0072c3b0  55                   push ebp
// 0072c3b1  8bec                 mov ebp, esp
// 0072c3b3  83e4c0               and esp, 0xffffffc0
// 0072c3b6  83ec34               sub esp, 0x34
// 0072c3b9  a1602abe00           mov eax, dword ptr [0xbe2a60]
// 0072c3be  53                   push ebx
// 0072c3bf  56                   push esi
// 0072c3c0  57                   push edi
// 0072c3c1  8b7d08               mov edi, dword ptr [ebp + 8]
// 0072c3c4  50                   push eax
// 0072c3c5  6a01                 push 1
// 0072c3c7  57                   push edi
// 0072c3c8  e8436affff           call 0x722e10
// 0072c3cd  8bf0                 mov esi, eax
// 0072c3cf  d94624               fld dword ptr [esi + 0x24]
// 0072c3d2  83c404               add esp, 4
// 0072c3d5  dd1c24               fstp qword ptr [esp]
// 0072c3d8  57                   push edi
// 0072c3d9  e83251ffff           call 0x721510
// 0072c3de  d94628               fld dword ptr [esi + 0x28]
// 0072c3e1  83c404               add esp, 4
// 0072c3e4  dd1c24               fstp qword ptr [esp]
// 0072c3e7  57                   push edi
// 0072c3e8  e82351ffff           call 0x721510
// 0072c3ed  d9462c               fld dword ptr [esi + 0x2c]
// 0072c3f0  83c404               add esp, 4
// 0072c3f3  dd1c24               fstp qword ptr [esp]
// 0072c3f6  57                   push edi
// 0072c3f7  e81451ffff           call 0x721510
// 0072c3fc  83c40c               add esp, 0xc
// 0072c3ff  c744243c03000000     mov dword ptr [esp + 0x3c], 3
// 0072c407  bb03000000           mov ebx, 3
// 0072c40c  8d642400             lea esp, [esp]
// 0072c410  d906                 fld dword ptr [esi]
// 0072c412  83ec08               sub esp, 8
// 0072c415  dd1c24               fstp qword ptr [esp]
// 0072c418  57                   push edi
// 0072c419  e8f250ffff           call 0x721510
// 0072c41e  83c40c               add esp, 0xc
// 0072c421  83c604               add esi, 4
// 0072c424  83eb01               sub ebx, 1
// 0072c427  75e7                 jne 0x72c410
// 0072c429  836c243c01           sub dword ptr [esp + 0x3c], 1
// 0072c42e  75d7                 jne 0x72c407
// 0072c430  5f                   pop edi
// 0072c431  5e                   pop esi
// 0072c432  8d430c               lea eax, [ebx + 0xc]
// 0072c435  5b                   pop ebx
// 0072c436  8be5                 mov esp, ebp
// 0072c438  5d                   pop ebp
// 0072c439  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_components@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
