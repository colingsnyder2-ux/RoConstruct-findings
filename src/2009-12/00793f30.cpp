// roc 2009-12 00793f30  unit: seg_00790000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00793f30
//
// 00793f30  a1542bb600           mov eax, dword ptr [0xb62b54]
// 00793f35  83ec0c               sub esp, 0xc
// 00793f38  56                   push esi
// 00793f39  8b742414             mov esi, dword ptr [esp + 0x14]
// 00793f3d  50                   push eax
// 00793f3e  6a01                 push 1
// 00793f40  56                   push esi
// 00793f41  e81a67ffff           call 0x78a660
// 00793f46  83c40c               add esp, 0xc
// 00793f49  8d4c240c             lea ecx, [esp + 0xc]
// 00793f4d  51                   push ecx
// 00793f4e  8d54240c             lea edx, [esp + 0xc]
// 00793f52  52                   push edx
// 00793f53  8d4c240c             lea ecx, [esp + 0xc]
// 00793f57  51                   push ecx
// 00793f58  8bc8                 mov ecx, eax
// 00793f5a  e8b101e6ff           call 0x5f4110
// 00793f5f  d9442404             fld dword ptr [esp + 4]
// 00793f63  83ec08               sub esp, 8
// 00793f66  dd1c24               fstp qword ptr [esp]
// 00793f69  56                   push esi
// 00793f6a  e8f14dffff           call 0x788d60
// 00793f6f  d9442414             fld dword ptr [esp + 0x14]
// 00793f73  83c404               add esp, 4
// 00793f76  dd1c24               fstp qword ptr [esp]
// 00793f79  56                   push esi
// 00793f7a  e8e14dffff           call 0x788d60
// 00793f7f  d9442418             fld dword ptr [esp + 0x18]
// 00793f83  83c404               add esp, 4
// 00793f86  dd1c24               fstp qword ptr [esp]
// 00793f89  56                   push esi
// 00793f8a  e8d14dffff           call 0x788d60
// 00793f8f  83c40c               add esp, 0xc
// 00793f92  b803000000           mov eax, 3
// 00793f97  5e                   pop esi
// 00793f98  83c40c               add esp, 0xc
// 00793f9b  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_toEulerAnglesXYZ@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
