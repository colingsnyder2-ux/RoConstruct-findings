// roc 2007-08 005c1ae0  unit: RBX::Lua::LuaArguments  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c1ae0
//
// 005c1ae0  83ec0c               sub esp, 0xc
// 005c1ae3  a178be8a00           mov eax, dword ptr [0x8abe78]
// 005c1ae8  56                   push esi
// 005c1ae9  8b742414             mov esi, dword ptr [esp + 0x14]
// 005c1aed  50                   push eax
// 005c1aee  6a01                 push 1
// 005c1af0  56                   push esi
// 005c1af1  e84ad7ffff           call 0x5bf240
// 005c1af6  d900                 fld dword ptr [eax]
// 005c1af8  d9e0                 fchs 
// 005c1afa  6a0c                 push 0xc
// 005c1afc  d95c2414             fstp dword ptr [esp + 0x14]
// 005c1b00  56                   push esi
// 005c1b01  d94004               fld dword ptr [eax + 4]
// 005c1b04  d9e0                 fchs 
// 005c1b06  d95c241c             fstp dword ptr [esp + 0x1c]
// 005c1b0a  d94008               fld dword ptr [eax + 8]
// 005c1b0d  d9e0                 fchs 
// 005c1b0f  d95c2420             fstp dword ptr [esp + 0x20]
// 005c1b13  e898caffff           call 0x5be5b0
// 005c1b18  83c414               add esp, 0x14
// 005c1b1b  85c0                 test eax, eax
// 005c1b1d  7414                 je 0x5c1b33
// 005c1b1f  d9442404             fld dword ptr [esp + 4]
// 005c1b23  d918                 fstp dword ptr [eax]
// 005c1b25  d9442408             fld dword ptr [esp + 8]
// 005c1b29  d95804               fstp dword ptr [eax + 4]
// 005c1b2c  d944240c             fld dword ptr [esp + 0xc]
// 005c1b30  d95808               fstp dword ptr [eax + 8]
// 005c1b33  8b0d78be8a00         mov ecx, dword ptr [0x8abe78]
// 005c1b39  51                   push ecx
// 005c1b3a  68f0d8ffff           push 0xffffd8f0
// 005c1b3f  56                   push esi
// 005c1b40  e8bbc2ffff           call 0x5bde00
// 005c1b45  6afe                 push -2
// 005c1b47  56                   push esi
// 005c1b48  e813c6ffff           call 0x5be160
// 005c1b4d  83c414               add esp, 0x14
// 005c1b50  b801000000           mov eax, 1
// 005c1b55  5e                   pop esi
// 005c1b56  83c40c               add esp, 0xc
// 005c1b59  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_unm@Vector3Bridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
