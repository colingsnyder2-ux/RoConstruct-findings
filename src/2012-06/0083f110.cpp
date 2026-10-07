// roc 2012-06 0083f110  unit: seg_00830000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0083f110
//
// 0083f110  55                   push ebp
// 0083f111  8bec                 mov ebp, esp
// 0083f113  83e4c0               and esp, 0xffffffc0
// 0083f116  83ec34               sub esp, 0x34
// 0083f119  a1d413de00           mov eax, dword ptr [0xde13d4]
// 0083f11e  53                   push ebx
// 0083f11f  56                   push esi
// 0083f120  57                   push edi
// 0083f121  8b7d08               mov edi, dword ptr [ebp + 8]
// 0083f124  50                   push eax
// 0083f125  6a01                 push 1
// 0083f127  57                   push edi
// 0083f128  e8e346ffff           call 0x833810
// 0083f12d  8bf0                 mov esi, eax
// 0083f12f  d94624               fld dword ptr [esi + 0x24]
// 0083f132  83c404               add esp, 4
// 0083f135  dd1c24               fstp qword ptr [esp]
// 0083f138  57                   push edi
// 0083f139  e8722fffff           call 0x8320b0
// 0083f13e  d94628               fld dword ptr [esi + 0x28]
// 0083f141  83c404               add esp, 4
// 0083f144  dd1c24               fstp qword ptr [esp]
// 0083f147  57                   push edi
// 0083f148  e8632fffff           call 0x8320b0
// 0083f14d  d9462c               fld dword ptr [esi + 0x2c]
// 0083f150  83c404               add esp, 4
// 0083f153  dd1c24               fstp qword ptr [esp]
// 0083f156  57                   push edi
// 0083f157  e8542fffff           call 0x8320b0
// 0083f15c  83c40c               add esp, 0xc
// 0083f15f  c744243c03000000     mov dword ptr [esp + 0x3c], 3
// 0083f167  bb03000000           mov ebx, 3
// 0083f16c  8d642400             lea esp, [esp]
// 0083f170  d906                 fld dword ptr [esi]
// 0083f172  83ec08               sub esp, 8
// 0083f175  dd1c24               fstp qword ptr [esp]
// 0083f178  57                   push edi
// 0083f179  e8322fffff           call 0x8320b0
// 0083f17e  83c40c               add esp, 0xc
// 0083f181  83c604               add esi, 4
// 0083f184  83eb01               sub ebx, 1
// 0083f187  75e7                 jne 0x83f170
// 0083f189  836c243c01           sub dword ptr [esp + 0x3c], 1
// 0083f18e  75d7                 jne 0x83f167
// 0083f190  5f                   pop edi
// 0083f191  5e                   pop esi
// 0083f192  8d430c               lea eax, [ebx + 0xc]
// 0083f195  5b                   pop ebx
// 0083f196  8be5                 mov esp, ebp
// 0083f198  5d                   pop ebp
// 0083f199  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_components@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
