// roc 2007-03 005bca40  unit: seg_005b0000  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bca40
//
// 005bca40  83ec0c               sub esp, 0xc
// 005bca43  a148828a00           mov eax, dword ptr [0x8a8248]
// 005bca48  56                   push esi
// 005bca49  57                   push edi
// 005bca4a  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005bca4e  50                   push eax
// 005bca4f  6a01                 push 1
// 005bca51  57                   push edi
// 005bca52  e859daffff           call 0x5ba4b0
// 005bca57  8b0d48828a00         mov ecx, dword ptr [0x8a8248]
// 005bca5d  51                   push ecx
// 005bca5e  6a02                 push 2
// 005bca60  57                   push edi
// 005bca61  8bf0                 mov esi, eax
// 005bca63  e848daffff           call 0x5ba4b0
// 005bca68  d906                 fld dword ptr [esi]
// 005bca6a  d820                 fsub dword ptr [eax]
// 005bca6c  6a0c                 push 0xc
// 005bca6e  57                   push edi
// 005bca6f  d95c2428             fstp dword ptr [esp + 0x28]
// 005bca73  d94604               fld dword ptr [esi + 4]
// 005bca76  d86004               fsub dword ptr [eax + 4]
// 005bca79  d95c242c             fstp dword ptr [esp + 0x2c]
// 005bca7d  d94608               fld dword ptr [esi + 8]
// 005bca80  d86008               fsub dword ptr [eax + 8]
// 005bca83  d95c2430             fstp dword ptr [esp + 0x30]
// 005bca87  e8f4cfffff           call 0x5b9a80
// 005bca8c  83c420               add esp, 0x20
// 005bca8f  85c0                 test eax, eax
// 005bca91  7414                 je 0x5bcaa7
// 005bca93  d9442408             fld dword ptr [esp + 8]
// 005bca97  d918                 fstp dword ptr [eax]
// 005bca99  d944240c             fld dword ptr [esp + 0xc]
// 005bca9d  d95804               fstp dword ptr [eax + 4]
// 005bcaa0  d9442410             fld dword ptr [esp + 0x10]
// 005bcaa4  d95808               fstp dword ptr [eax + 8]
// 005bcaa7  8b1548828a00         mov edx, dword ptr [0x8a8248]
// 005bcaad  52                   push edx
// 005bcaae  68f0d8ffff           push 0xffffd8f0
// 005bcab3  57                   push edi
// 005bcab4  e817c8ffff           call 0x5b92d0
// 005bcab9  6afe                 push -2
// 005bcabb  57                   push edi
// 005bcabc  e86fcbffff           call 0x5b9630
// 005bcac1  83c414               add esp, 0x14
// 005bcac4  5f                   pop edi
// 005bcac5  b801000000           mov eax, 1
// 005bcaca  5e                   pop esi
// 005bcacb  83c40c               add esp, 0xc
// 005bcace  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_sub@Vector3Bridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
