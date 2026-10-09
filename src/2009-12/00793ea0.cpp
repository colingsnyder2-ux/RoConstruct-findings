// roc 2009-12 00793ea0  unit: seg_00790000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00793ea0
//
// 00793ea0  55                   push ebp
// 00793ea1  8bec                 mov ebp, esp
// 00793ea3  83e4c0               and esp, 0xffffffc0
// 00793ea6  83ec34               sub esp, 0x34
// 00793ea9  a1542bb600           mov eax, dword ptr [0xb62b54]
// 00793eae  53                   push ebx
// 00793eaf  56                   push esi
// 00793eb0  57                   push edi
// 00793eb1  8b7d08               mov edi, dword ptr [ebp + 8]
// 00793eb4  50                   push eax
// 00793eb5  6a01                 push 1
// 00793eb7  57                   push edi
// 00793eb8  e8a367ffff           call 0x78a660
// 00793ebd  8bf0                 mov esi, eax
// 00793ebf  d94624               fld dword ptr [esi + 0x24]
// 00793ec2  83c404               add esp, 4
// 00793ec5  dd1c24               fstp qword ptr [esp]
// 00793ec8  57                   push edi
// 00793ec9  e8924effff           call 0x788d60
// 00793ece  d94628               fld dword ptr [esi + 0x28]
// 00793ed1  83c404               add esp, 4
// 00793ed4  dd1c24               fstp qword ptr [esp]
// 00793ed7  57                   push edi
// 00793ed8  e8834effff           call 0x788d60
// 00793edd  d9462c               fld dword ptr [esi + 0x2c]
// 00793ee0  83c404               add esp, 4
// 00793ee3  dd1c24               fstp qword ptr [esp]
// 00793ee6  57                   push edi
// 00793ee7  e8744effff           call 0x788d60
// 00793eec  83c40c               add esp, 0xc
// 00793eef  c744243c03000000     mov dword ptr [esp + 0x3c], 3
// 00793ef7  bb03000000           mov ebx, 3
// 00793efc  8d642400             lea esp, [esp]
// 00793f00  d906                 fld dword ptr [esi]
// 00793f02  83ec08               sub esp, 8
// 00793f05  dd1c24               fstp qword ptr [esp]
// 00793f08  57                   push edi
// 00793f09  e8524effff           call 0x788d60
// 00793f0e  83c40c               add esp, 0xc
// 00793f11  83c604               add esi, 4
// 00793f14  83eb01               sub ebx, 1
// 00793f17  75e7                 jne 0x793f00
// 00793f19  836c243c01           sub dword ptr [esp + 0x3c], 1
// 00793f1e  75d7                 jne 0x793ef7
// 00793f20  5f                   pop edi
// 00793f21  5e                   pop esi
// 00793f22  8d430c               lea eax, [ebx + 0xc]
// 00793f25  5b                   pop ebx
// 00793f26  8be5                 mov esp, ebp
// 00793f28  5d                   pop ebp
// 00793f29  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_components@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
