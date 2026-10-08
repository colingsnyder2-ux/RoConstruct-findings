// roc 2007-08 005c1870  unit: RBX::Lua::LuaArguments  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c1870
//
// 005c1870  83ec0c               sub esp, 0xc
// 005c1873  a178be8a00           mov eax, dword ptr [0x8abe78]
// 005c1878  56                   push esi
// 005c1879  57                   push edi
// 005c187a  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005c187e  50                   push eax
// 005c187f  6a01                 push 1
// 005c1881  57                   push edi
// 005c1882  e8b9d9ffff           call 0x5bf240
// 005c1887  8b0d78be8a00         mov ecx, dword ptr [0x8abe78]
// 005c188d  51                   push ecx
// 005c188e  6a02                 push 2
// 005c1890  57                   push edi
// 005c1891  8bf0                 mov esi, eax
// 005c1893  e8a8d9ffff           call 0x5bf240
// 005c1898  d906                 fld dword ptr [esi]
// 005c189a  d820                 fsub dword ptr [eax]
// 005c189c  6a0c                 push 0xc
// 005c189e  57                   push edi
// 005c189f  d95c2428             fstp dword ptr [esp + 0x28]
// 005c18a3  d94604               fld dword ptr [esi + 4]
// 005c18a6  d86004               fsub dword ptr [eax + 4]
// 005c18a9  d95c242c             fstp dword ptr [esp + 0x2c]
// 005c18ad  d94608               fld dword ptr [esi + 8]
// 005c18b0  d86008               fsub dword ptr [eax + 8]
// 005c18b3  d95c2430             fstp dword ptr [esp + 0x30]
// 005c18b7  e8f4ccffff           call 0x5be5b0
// 005c18bc  83c420               add esp, 0x20
// 005c18bf  85c0                 test eax, eax
// 005c18c1  7414                 je 0x5c18d7
// 005c18c3  d9442408             fld dword ptr [esp + 8]
// 005c18c7  d918                 fstp dword ptr [eax]
// 005c18c9  d944240c             fld dword ptr [esp + 0xc]
// 005c18cd  d95804               fstp dword ptr [eax + 4]
// 005c18d0  d9442410             fld dword ptr [esp + 0x10]
// 005c18d4  d95808               fstp dword ptr [eax + 8]
// 005c18d7  8b1578be8a00         mov edx, dword ptr [0x8abe78]
// 005c18dd  52                   push edx
// 005c18de  68f0d8ffff           push 0xffffd8f0
// 005c18e3  57                   push edi
// 005c18e4  e817c5ffff           call 0x5bde00
// 005c18e9  6afe                 push -2
// 005c18eb  57                   push edi
// 005c18ec  e86fc8ffff           call 0x5be160
// 005c18f1  83c414               add esp, 0x14
// 005c18f4  5f                   pop edi
// 005c18f5  b801000000           mov eax, 1
// 005c18fa  5e                   pop esi
// 005c18fb  83c40c               add esp, 0xc
// 005c18fe  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_sub@Vector3Bridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
