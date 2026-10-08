// roc 2007-08 005c17e0  unit: RBX::Lua::LuaArguments  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c17e0
//
// 005c17e0  83ec0c               sub esp, 0xc
// 005c17e3  a178be8a00           mov eax, dword ptr [0x8abe78]
// 005c17e8  56                   push esi
// 005c17e9  57                   push edi
// 005c17ea  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005c17ee  50                   push eax
// 005c17ef  6a01                 push 1
// 005c17f1  57                   push edi
// 005c17f2  e849daffff           call 0x5bf240
// 005c17f7  8b0d78be8a00         mov ecx, dword ptr [0x8abe78]
// 005c17fd  51                   push ecx
// 005c17fe  6a02                 push 2
// 005c1800  57                   push edi
// 005c1801  8bf0                 mov esi, eax
// 005c1803  e838daffff           call 0x5bf240
// 005c1808  d900                 fld dword ptr [eax]
// 005c180a  d806                 fadd dword ptr [esi]
// 005c180c  6a0c                 push 0xc
// 005c180e  57                   push edi
// 005c180f  d95c2428             fstp dword ptr [esp + 0x28]
// 005c1813  d94004               fld dword ptr [eax + 4]
// 005c1816  d84604               fadd dword ptr [esi + 4]
// 005c1819  d95c242c             fstp dword ptr [esp + 0x2c]
// 005c181d  d94008               fld dword ptr [eax + 8]
// 005c1820  d84608               fadd dword ptr [esi + 8]
// 005c1823  d95c2430             fstp dword ptr [esp + 0x30]
// 005c1827  e884cdffff           call 0x5be5b0
// 005c182c  83c420               add esp, 0x20
// 005c182f  85c0                 test eax, eax
// 005c1831  7414                 je 0x5c1847
// 005c1833  d9442408             fld dword ptr [esp + 8]
// 005c1837  d918                 fstp dword ptr [eax]
// 005c1839  d944240c             fld dword ptr [esp + 0xc]
// 005c183d  d95804               fstp dword ptr [eax + 4]
// 005c1840  d9442410             fld dword ptr [esp + 0x10]
// 005c1844  d95808               fstp dword ptr [eax + 8]
// 005c1847  8b1578be8a00         mov edx, dword ptr [0x8abe78]
// 005c184d  52                   push edx
// 005c184e  68f0d8ffff           push 0xffffd8f0
// 005c1853  57                   push edi
// 005c1854  e8a7c5ffff           call 0x5bde00
// 005c1859  6afe                 push -2
// 005c185b  57                   push edi
// 005c185c  e8ffc8ffff           call 0x5be160
// 005c1861  83c414               add esp, 0x14
// 005c1864  5f                   pop edi
// 005c1865  b801000000           mov eax, 1
// 005c186a  5e                   pop esi
// 005c186b  83c40c               add esp, 0xc
// 005c186e  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_add@Vector3Bridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
