// roc 2009-06 006bdc10  unit: RBX::Lua::LuaArguments  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bdc10
//
// 006bdc10  83ec14               sub esp, 0x14
// 006bdc13  55                   push ebp
// 006bdc14  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006bdc18  55                   push ebp
// 006bdc19  e862b1ffff           call 0x6b8d80
// 006bdc1e  83c404               add esp, 4
// 006bdc21  89442404             mov dword ptr [esp + 4], eax
// 006bdc25  83f803               cmp eax, 3
// 006bdc28  c744240803000000     mov dword ptr [esp + 8], 3
// 006bdc30  8d442404             lea eax, [esp + 4]
// 006bdc34  7c04                 jl 0x6bdc3a
// 006bdc36  8d442408             lea eax, [esp + 8]
// 006bdc3a  53                   push ebx
// 006bdc3b  8b18                 mov ebx, dword ptr [eax]
// 006bdc3d  56                   push esi
// 006bdc3e  33f6                 xor esi, esi
// 006bdc40  57                   push edi
// 006bdc41  85db                 test ebx, ebx
// 006bdc43  7e17                 jle 0x6bdc5c
// 006bdc45  8d7e01               lea edi, [esi + 1]
// 006bdc48  57                   push edi
// 006bdc49  55                   push ebp
// 006bdc4a  e861f9ffff           call 0x6bd5b0
// 006bdc4f  d95cb420             fstp dword ptr [esp + esi*4 + 0x20]
// 006bdc53  8bf7                 mov esi, edi
// 006bdc55  83c408               add esp, 8
// 006bdc58  3bf3                 cmp esi, ebx
// 006bdc5a  7ce9                 jl 0x6bdc45
// 006bdc5c  83fb03               cmp ebx, 3
// 006bdc5f  7d0f                 jge 0x6bdc70
// 006bdc61  b903000000           mov ecx, 3
// 006bdc66  2bcb                 sub ecx, ebx
// 006bdc68  8d7c9c18             lea edi, [esp + ebx*4 + 0x18]
// 006bdc6c  33c0                 xor eax, eax
// 006bdc6e  f3ab                 rep stosd dword ptr es:[edi], eax
// 006bdc70  6a0c                 push 0xc
// 006bdc72  55                   push ebp
// 006bdc73  e858c1ffff           call 0x6b9dd0
// 006bdc78  83c408               add esp, 8
// 006bdc7b  5f                   pop edi
// 006bdc7c  5e                   pop esi
// 006bdc7d  5b                   pop ebx
// 006bdc7e  85c0                 test eax, eax
// 006bdc80  7414                 je 0x6bdc96
// 006bdc82  d944240c             fld dword ptr [esp + 0xc]
// 006bdc86  d918                 fstp dword ptr [eax]
// 006bdc88  d9442410             fld dword ptr [esp + 0x10]
// 006bdc8c  d95804               fstp dword ptr [eax + 4]
// 006bdc8f  d9442414             fld dword ptr [esp + 0x14]
// 006bdc93  d95808               fstp dword ptr [eax + 8]
// 006bdc96  a1f02aa200           mov eax, dword ptr [0xa22af0]
// 006bdc9b  50                   push eax
// 006bdc9c  68f0d8ffff           push 0xffffd8f0
// 006bdca1  55                   push ebp
// 006bdca2  e829b9ffff           call 0x6b95d0
// 006bdca7  6afe                 push -2
// 006bdca9  55                   push ebp
// 006bdcaa  e8b1bcffff           call 0x6b9960
// 006bdcaf  83c414               add esp, 0x14
// 006bdcb2  b801000000           mov eax, 1
// 006bdcb7  5d                   pop ebp
// 006bdcb8  83c414               add esp, 0x14
// 006bdcbb  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?newColor3@Color3Bridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
