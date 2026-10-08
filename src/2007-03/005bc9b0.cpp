// roc 2007-03 005bc9b0  unit: seg_005b0000  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bc9b0
//
// 005bc9b0  83ec0c               sub esp, 0xc
// 005bc9b3  a148828a00           mov eax, dword ptr [0x8a8248]
// 005bc9b8  56                   push esi
// 005bc9b9  57                   push edi
// 005bc9ba  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005bc9be  50                   push eax
// 005bc9bf  6a01                 push 1
// 005bc9c1  57                   push edi
// 005bc9c2  e8e9daffff           call 0x5ba4b0
// 005bc9c7  8b0d48828a00         mov ecx, dword ptr [0x8a8248]
// 005bc9cd  51                   push ecx
// 005bc9ce  6a02                 push 2
// 005bc9d0  57                   push edi
// 005bc9d1  8bf0                 mov esi, eax
// 005bc9d3  e8d8daffff           call 0x5ba4b0
// 005bc9d8  d900                 fld dword ptr [eax]
// 005bc9da  d806                 fadd dword ptr [esi]
// 005bc9dc  6a0c                 push 0xc
// 005bc9de  57                   push edi
// 005bc9df  d95c2428             fstp dword ptr [esp + 0x28]
// 005bc9e3  d94004               fld dword ptr [eax + 4]
// 005bc9e6  d84604               fadd dword ptr [esi + 4]
// 005bc9e9  d95c242c             fstp dword ptr [esp + 0x2c]
// 005bc9ed  d94008               fld dword ptr [eax + 8]
// 005bc9f0  d84608               fadd dword ptr [esi + 8]
// 005bc9f3  d95c2430             fstp dword ptr [esp + 0x30]
// 005bc9f7  e884d0ffff           call 0x5b9a80
// 005bc9fc  83c420               add esp, 0x20
// 005bc9ff  85c0                 test eax, eax
// 005bca01  7414                 je 0x5bca17
// 005bca03  d9442408             fld dword ptr [esp + 8]
// 005bca07  d918                 fstp dword ptr [eax]
// 005bca09  d944240c             fld dword ptr [esp + 0xc]
// 005bca0d  d95804               fstp dword ptr [eax + 4]
// 005bca10  d9442410             fld dword ptr [esp + 0x10]
// 005bca14  d95808               fstp dword ptr [eax + 8]
// 005bca17  8b1548828a00         mov edx, dword ptr [0x8a8248]
// 005bca1d  52                   push edx
// 005bca1e  68f0d8ffff           push 0xffffd8f0
// 005bca23  57                   push edi
// 005bca24  e8a7c8ffff           call 0x5b92d0
// 005bca29  6afe                 push -2
// 005bca2b  57                   push edi
// 005bca2c  e8ffcbffff           call 0x5b9630
// 005bca31  83c414               add esp, 0x14
// 005bca34  5f                   pop edi
// 005bca35  b801000000           mov eax, 1
// 005bca3a  5e                   pop esi
// 005bca3b  83c40c               add esp, 0xc
// 005bca3e  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_add@Vector3Bridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
