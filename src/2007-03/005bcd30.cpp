// roc 2007-03 005bcd30  unit: seg_005b0000  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bcd30
//
// 005bcd30  83ec14               sub esp, 0x14
// 005bcd33  55                   push ebp
// 005bcd34  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005bcd38  55                   push ebp
// 005bcd39  e812bdffff           call 0x5b8a50
// 005bcd3e  83c404               add esp, 4
// 005bcd41  89442404             mov dword ptr [esp + 4], eax
// 005bcd45  83f803               cmp eax, 3
// 005bcd48  c744240803000000     mov dword ptr [esp + 8], 3
// 005bcd50  8d442404             lea eax, [esp + 4]
// 005bcd54  7c04                 jl 0x5bcd5a
// 005bcd56  8d442408             lea eax, [esp + 8]
// 005bcd5a  53                   push ebx
// 005bcd5b  8b18                 mov ebx, dword ptr [eax]
// 005bcd5d  56                   push esi
// 005bcd5e  33f6                 xor esi, esi
// 005bcd60  85db                 test ebx, ebx
// 005bcd62  57                   push edi
// 005bcd63  7e17                 jle 0x5bcd7c
// 005bcd65  8d7e01               lea edi, [esi + 1]
// 005bcd68  57                   push edi
// 005bcd69  55                   push ebp
// 005bcd6a  e831c0ffff           call 0x5b8da0
// 005bcd6f  d95cb420             fstp dword ptr [esp + esi*4 + 0x20]
// 005bcd73  8bf7                 mov esi, edi
// 005bcd75  83c408               add esp, 8
// 005bcd78  3bf3                 cmp esi, ebx
// 005bcd7a  7ce9                 jl 0x5bcd65
// 005bcd7c  83fb03               cmp ebx, 3
// 005bcd7f  7d0f                 jge 0x5bcd90
// 005bcd81  b903000000           mov ecx, 3
// 005bcd86  2bcb                 sub ecx, ebx
// 005bcd88  8d7c9c18             lea edi, [esp + ebx*4 + 0x18]
// 005bcd8c  33c0                 xor eax, eax
// 005bcd8e  f3ab                 rep stosd dword ptr es:[edi], eax
// 005bcd90  6a0c                 push 0xc
// 005bcd92  55                   push ebp
// 005bcd93  e8e8ccffff           call 0x5b9a80
// 005bcd98  83c408               add esp, 8
// 005bcd9b  85c0                 test eax, eax
// 005bcd9d  5f                   pop edi
// 005bcd9e  5e                   pop esi
// 005bcd9f  5b                   pop ebx
// 005bcda0  7414                 je 0x5bcdb6
// 005bcda2  d944240c             fld dword ptr [esp + 0xc]
// 005bcda6  d918                 fstp dword ptr [eax]
// 005bcda8  d9442410             fld dword ptr [esp + 0x10]
// 005bcdac  d95804               fstp dword ptr [eax + 4]
// 005bcdaf  d9442414             fld dword ptr [esp + 0x14]
// 005bcdb3  d95808               fstp dword ptr [eax + 8]
// 005bcdb6  a148828a00           mov eax, dword ptr [0x8a8248]
// 005bcdbb  50                   push eax
// 005bcdbc  68f0d8ffff           push 0xffffd8f0
// 005bcdc1  55                   push ebp
// 005bcdc2  e809c5ffff           call 0x5b92d0
// 005bcdc7  6afe                 push -2
// 005bcdc9  55                   push ebp
// 005bcdca  e861c8ffff           call 0x5b9630
// 005bcdcf  83c414               add esp, 0x14
// 005bcdd2  b801000000           mov eax, 1
// 005bcdd7  5d                   pop ebp
// 005bcdd8  83c414               add esp, 0x14
// 005bcddb  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?newColor3@Color3Bridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
