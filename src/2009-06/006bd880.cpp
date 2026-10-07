// roc 2009-06 006bd880  unit: RBX::Lua::LuaArguments  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bd880
//
// 006bd880  83ec14               sub esp, 0x14
// 006bd883  55                   push ebp
// 006bd884  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006bd888  55                   push ebp
// 006bd889  e8f2b4ffff           call 0x6b8d80
// 006bd88e  83c404               add esp, 4
// 006bd891  89442404             mov dword ptr [esp + 4], eax
// 006bd895  83f803               cmp eax, 3
// 006bd898  c744240803000000     mov dword ptr [esp + 8], 3
// 006bd8a0  8d442404             lea eax, [esp + 4]
// 006bd8a4  7c04                 jl 0x6bd8aa
// 006bd8a6  8d442408             lea eax, [esp + 8]
// 006bd8aa  53                   push ebx
// 006bd8ab  8b18                 mov ebx, dword ptr [eax]
// 006bd8ad  56                   push esi
// 006bd8ae  33f6                 xor esi, esi
// 006bd8b0  57                   push edi
// 006bd8b1  85db                 test ebx, ebx
// 006bd8b3  7e17                 jle 0x6bd8cc
// 006bd8b5  8d7e01               lea edi, [esi + 1]
// 006bd8b8  57                   push edi
// 006bd8b9  55                   push ebp
// 006bd8ba  e8f1fcffff           call 0x6bd5b0
// 006bd8bf  d95cb420             fstp dword ptr [esp + esi*4 + 0x20]
// 006bd8c3  8bf7                 mov esi, edi
// 006bd8c5  83c408               add esp, 8
// 006bd8c8  3bf3                 cmp esi, ebx
// 006bd8ca  7ce9                 jl 0x6bd8b5
// 006bd8cc  83fb03               cmp ebx, 3
// 006bd8cf  7d0f                 jge 0x6bd8e0
// 006bd8d1  b903000000           mov ecx, 3
// 006bd8d6  2bcb                 sub ecx, ebx
// 006bd8d8  8d7c9c18             lea edi, [esp + ebx*4 + 0x18]
// 006bd8dc  33c0                 xor eax, eax
// 006bd8de  f3ab                 rep stosd dword ptr es:[edi], eax
// 006bd8e0  6a0c                 push 0xc
// 006bd8e2  55                   push ebp
// 006bd8e3  e8e8c4ffff           call 0x6b9dd0
// 006bd8e8  83c408               add esp, 8
// 006bd8eb  5f                   pop edi
// 006bd8ec  5e                   pop esi
// 006bd8ed  5b                   pop ebx
// 006bd8ee  85c0                 test eax, eax
// 006bd8f0  7414                 je 0x6bd906
// 006bd8f2  d944240c             fld dword ptr [esp + 0xc]
// 006bd8f6  d918                 fstp dword ptr [eax]
// 006bd8f8  d9442410             fld dword ptr [esp + 0x10]
// 006bd8fc  d95804               fstp dword ptr [eax + 4]
// 006bd8ff  d9442414             fld dword ptr [esp + 0x14]
// 006bd903  d95808               fstp dword ptr [eax + 8]
// 006bd906  a1ec2aa200           mov eax, dword ptr [0xa22aec]
// 006bd90b  50                   push eax
// 006bd90c  68f0d8ffff           push 0xffffd8f0
// 006bd911  55                   push ebp
// 006bd912  e8b9bcffff           call 0x6b95d0
// 006bd917  6afe                 push -2
// 006bd919  55                   push ebp
// 006bd91a  e841c0ffff           call 0x6b9960
// 006bd91f  83c414               add esp, 0x14
// 006bd922  b801000000           mov eax, 1
// 006bd927  5d                   pop ebp
// 006bd928  83c414               add esp, 0x14
// 006bd92b  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?newColor3@Color3Bridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
