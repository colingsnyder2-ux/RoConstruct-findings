// roc 2007-03 005bc900  unit: seg_005b0000  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bc900
//
// 005bc900  83ec14               sub esp, 0x14
// 005bc903  55                   push ebp
// 005bc904  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005bc908  55                   push ebp
// 005bc909  e842c1ffff           call 0x5b8a50
// 005bc90e  83c404               add esp, 4
// 005bc911  89442404             mov dword ptr [esp + 4], eax
// 005bc915  83f803               cmp eax, 3
// 005bc918  c744240803000000     mov dword ptr [esp + 8], 3
// 005bc920  8d442404             lea eax, [esp + 4]
// 005bc924  7c04                 jl 0x5bc92a
// 005bc926  8d442408             lea eax, [esp + 8]
// 005bc92a  53                   push ebx
// 005bc92b  8b18                 mov ebx, dword ptr [eax]
// 005bc92d  56                   push esi
// 005bc92e  33f6                 xor esi, esi
// 005bc930  85db                 test ebx, ebx
// 005bc932  57                   push edi
// 005bc933  7e17                 jle 0x5bc94c
// 005bc935  8d7e01               lea edi, [esi + 1]
// 005bc938  57                   push edi
// 005bc939  55                   push ebp
// 005bc93a  e861c4ffff           call 0x5b8da0
// 005bc93f  d95cb420             fstp dword ptr [esp + esi*4 + 0x20]
// 005bc943  8bf7                 mov esi, edi
// 005bc945  83c408               add esp, 8
// 005bc948  3bf3                 cmp esi, ebx
// 005bc94a  7ce9                 jl 0x5bc935
// 005bc94c  83fb03               cmp ebx, 3
// 005bc94f  7d0f                 jge 0x5bc960
// 005bc951  b903000000           mov ecx, 3
// 005bc956  2bcb                 sub ecx, ebx
// 005bc958  8d7c9c18             lea edi, [esp + ebx*4 + 0x18]
// 005bc95c  33c0                 xor eax, eax
// 005bc95e  f3ab                 rep stosd dword ptr es:[edi], eax
// 005bc960  6a0c                 push 0xc
// 005bc962  55                   push ebp
// 005bc963  e818d1ffff           call 0x5b9a80
// 005bc968  83c408               add esp, 8
// 005bc96b  85c0                 test eax, eax
// 005bc96d  5f                   pop edi
// 005bc96e  5e                   pop esi
// 005bc96f  5b                   pop ebx
// 005bc970  7414                 je 0x5bc986
// 005bc972  d944240c             fld dword ptr [esp + 0xc]
// 005bc976  d918                 fstp dword ptr [eax]
// 005bc978  d9442410             fld dword ptr [esp + 0x10]
// 005bc97c  d95804               fstp dword ptr [eax + 4]
// 005bc97f  d9442414             fld dword ptr [esp + 0x14]
// 005bc983  d95808               fstp dword ptr [eax + 8]
// 005bc986  a144828a00           mov eax, dword ptr [0x8a8244]
// 005bc98b  50                   push eax
// 005bc98c  68f0d8ffff           push 0xffffd8f0
// 005bc991  55                   push ebp
// 005bc992  e839c9ffff           call 0x5b92d0
// 005bc997  6afe                 push -2
// 005bc999  55                   push ebp
// 005bc99a  e891ccffff           call 0x5b9630
// 005bc99f  83c414               add esp, 0x14
// 005bc9a2  b801000000           mov eax, 1
// 005bc9a7  5d                   pop ebp
// 005bc9a8  83c414               add esp, 0x14
// 005bc9ab  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?newColor3@Color3Bridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
