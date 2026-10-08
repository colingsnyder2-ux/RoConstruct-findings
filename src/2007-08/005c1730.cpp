// roc 2007-08 005c1730  unit: RBX::Lua::LuaArguments  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c1730
//
// 005c1730  83ec14               sub esp, 0x14
// 005c1733  55                   push ebp
// 005c1734  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005c1738  55                   push ebp
// 005c1739  e842beffff           call 0x5bd580
// 005c173e  83c404               add esp, 4
// 005c1741  89442404             mov dword ptr [esp + 4], eax
// 005c1745  83f803               cmp eax, 3
// 005c1748  c744240803000000     mov dword ptr [esp + 8], 3
// 005c1750  8d442404             lea eax, [esp + 4]
// 005c1754  7c04                 jl 0x5c175a
// 005c1756  8d442408             lea eax, [esp + 8]
// 005c175a  53                   push ebx
// 005c175b  8b18                 mov ebx, dword ptr [eax]
// 005c175d  56                   push esi
// 005c175e  33f6                 xor esi, esi
// 005c1760  85db                 test ebx, ebx
// 005c1762  57                   push edi
// 005c1763  7e17                 jle 0x5c177c
// 005c1765  8d7e01               lea edi, [esi + 1]
// 005c1768  57                   push edi
// 005c1769  55                   push ebp
// 005c176a  e861c1ffff           call 0x5bd8d0
// 005c176f  d95cb420             fstp dword ptr [esp + esi*4 + 0x20]
// 005c1773  8bf7                 mov esi, edi
// 005c1775  83c408               add esp, 8
// 005c1778  3bf3                 cmp esi, ebx
// 005c177a  7ce9                 jl 0x5c1765
// 005c177c  83fb03               cmp ebx, 3
// 005c177f  7d0f                 jge 0x5c1790
// 005c1781  b903000000           mov ecx, 3
// 005c1786  2bcb                 sub ecx, ebx
// 005c1788  8d7c9c18             lea edi, [esp + ebx*4 + 0x18]
// 005c178c  33c0                 xor eax, eax
// 005c178e  f3ab                 rep stosd dword ptr es:[edi], eax
// 005c1790  6a0c                 push 0xc
// 005c1792  55                   push ebp
// 005c1793  e818ceffff           call 0x5be5b0
// 005c1798  83c408               add esp, 8
// 005c179b  85c0                 test eax, eax
// 005c179d  5f                   pop edi
// 005c179e  5e                   pop esi
// 005c179f  5b                   pop ebx
// 005c17a0  7414                 je 0x5c17b6
// 005c17a2  d944240c             fld dword ptr [esp + 0xc]
// 005c17a6  d918                 fstp dword ptr [eax]
// 005c17a8  d9442410             fld dword ptr [esp + 0x10]
// 005c17ac  d95804               fstp dword ptr [eax + 4]
// 005c17af  d9442414             fld dword ptr [esp + 0x14]
// 005c17b3  d95808               fstp dword ptr [eax + 8]
// 005c17b6  a174be8a00           mov eax, dword ptr [0x8abe74]
// 005c17bb  50                   push eax
// 005c17bc  68f0d8ffff           push 0xffffd8f0
// 005c17c1  55                   push ebp
// 005c17c2  e839c6ffff           call 0x5bde00
// 005c17c7  6afe                 push -2
// 005c17c9  55                   push ebp
// 005c17ca  e891c9ffff           call 0x5be160
// 005c17cf  83c414               add esp, 0x14
// 005c17d2  b801000000           mov eax, 1
// 005c17d7  5d                   pop ebp
// 005c17d8  83c414               add esp, 0x14
// 005c17db  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?newColor3@Color3Bridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
