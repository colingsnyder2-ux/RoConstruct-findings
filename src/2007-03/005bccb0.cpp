// roc 2007-03 005bccb0  unit: seg_005b0000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bccb0
//
// 005bccb0  83ec0c               sub esp, 0xc
// 005bccb3  a148828a00           mov eax, dword ptr [0x8a8248]
// 005bccb8  56                   push esi
// 005bccb9  8b742414             mov esi, dword ptr [esp + 0x14]
// 005bccbd  50                   push eax
// 005bccbe  6a01                 push 1
// 005bccc0  56                   push esi
// 005bccc1  e8ead7ffff           call 0x5ba4b0
// 005bccc6  d900                 fld dword ptr [eax]
// 005bccc8  d9e0                 fchs 
// 005bccca  6a0c                 push 0xc
// 005bcccc  d95c2414             fstp dword ptr [esp + 0x14]
// 005bccd0  56                   push esi
// 005bccd1  d94004               fld dword ptr [eax + 4]
// 005bccd4  d9e0                 fchs 
// 005bccd6  d95c241c             fstp dword ptr [esp + 0x1c]
// 005bccda  d94008               fld dword ptr [eax + 8]
// 005bccdd  d9e0                 fchs 
// 005bccdf  d95c2420             fstp dword ptr [esp + 0x20]
// 005bcce3  e898cdffff           call 0x5b9a80
// 005bcce8  83c414               add esp, 0x14
// 005bcceb  85c0                 test eax, eax
// 005bcced  7414                 je 0x5bcd03
// 005bccef  d9442404             fld dword ptr [esp + 4]
// 005bccf3  d918                 fstp dword ptr [eax]
// 005bccf5  d9442408             fld dword ptr [esp + 8]
// 005bccf9  d95804               fstp dword ptr [eax + 4]
// 005bccfc  d944240c             fld dword ptr [esp + 0xc]
// 005bcd00  d95808               fstp dword ptr [eax + 8]
// 005bcd03  8b0d48828a00         mov ecx, dword ptr [0x8a8248]
// 005bcd09  51                   push ecx
// 005bcd0a  68f0d8ffff           push 0xffffd8f0
// 005bcd0f  56                   push esi
// 005bcd10  e8bbc5ffff           call 0x5b92d0
// 005bcd15  6afe                 push -2
// 005bcd17  56                   push esi
// 005bcd18  e813c9ffff           call 0x5b9630
// 005bcd1d  83c414               add esp, 0x14
// 005bcd20  b801000000           mov eax, 1
// 005bcd25  5e                   pop esi
// 005bcd26  83c40c               add esp, 0xc
// 005bcd29  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_unm@Vector3Bridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
