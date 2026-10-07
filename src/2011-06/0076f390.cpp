// roc 2011-06 0076f390  unit: seg_00760000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0076f390
//
// 0076f390  55                   push ebp
// 0076f391  8bec                 mov ebp, esp
// 0076f393  83e4c0               and esp, 0xffffffc0
// 0076f396  83ec34               sub esp, 0x34
// 0076f399  a1dcefc800           mov eax, dword ptr [0xc8efdc]
// 0076f39e  53                   push ebx
// 0076f39f  56                   push esi
// 0076f3a0  57                   push edi
// 0076f3a1  8b7d08               mov edi, dword ptr [ebp + 8]
// 0076f3a4  50                   push eax
// 0076f3a5  6a01                 push 1
// 0076f3a7  57                   push edi
// 0076f3a8  e8d34cffff           call 0x764080
// 0076f3ad  8bf0                 mov esi, eax
// 0076f3af  d94624               fld dword ptr [esi + 0x24]
// 0076f3b2  83c404               add esp, 4
// 0076f3b5  dd1c24               fstp qword ptr [esp]
// 0076f3b8  57                   push edi
// 0076f3b9  e86235ffff           call 0x762920
// 0076f3be  d94628               fld dword ptr [esi + 0x28]
// 0076f3c1  83c404               add esp, 4
// 0076f3c4  dd1c24               fstp qword ptr [esp]
// 0076f3c7  57                   push edi
// 0076f3c8  e85335ffff           call 0x762920
// 0076f3cd  d9462c               fld dword ptr [esi + 0x2c]
// 0076f3d0  83c404               add esp, 4
// 0076f3d3  dd1c24               fstp qword ptr [esp]
// 0076f3d6  57                   push edi
// 0076f3d7  e84435ffff           call 0x762920
// 0076f3dc  83c40c               add esp, 0xc
// 0076f3df  c744243c03000000     mov dword ptr [esp + 0x3c], 3
// 0076f3e7  bb03000000           mov ebx, 3
// 0076f3ec  8d642400             lea esp, [esp]
// 0076f3f0  d906                 fld dword ptr [esi]
// 0076f3f2  83ec08               sub esp, 8
// 0076f3f5  dd1c24               fstp qword ptr [esp]
// 0076f3f8  57                   push edi
// 0076f3f9  e82235ffff           call 0x762920
// 0076f3fe  83c40c               add esp, 0xc
// 0076f401  83c604               add esi, 4
// 0076f404  83eb01               sub ebx, 1
// 0076f407  75e7                 jne 0x76f3f0
// 0076f409  836c243c01           sub dword ptr [esp + 0x3c], 1
// 0076f40e  75d7                 jne 0x76f3e7
// 0076f410  5f                   pop edi
// 0076f411  5e                   pop esi
// 0076f412  8d430c               lea eax, [ebx + 0xc]
// 0076f415  5b                   pop ebx
// 0076f416  8be5                 mov esp, ebp
// 0076f418  5d                   pop ebp
// 0076f419  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_components@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
