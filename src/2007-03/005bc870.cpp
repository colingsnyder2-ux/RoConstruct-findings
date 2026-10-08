// roc 2007-03 005bc870  unit: seg_005b0000  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bc870
//
// 005bc870  53                   push ebx
// 005bc871  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005bc875  56                   push esi
// 005bc876  57                   push edi
// 005bc877  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005bc87b  53                   push ebx
// 005bc87c  57                   push edi
// 005bc87d  e8dec6ffff           call 0x5b8f60
// 005bc882  8bf0                 mov esi, eax
// 005bc884  83c408               add esp, 8
// 005bc887  85f6                 test esi, esi
// 005bc889  7460                 je 0x5bc8eb
// 005bc88b  53                   push ebx
// 005bc88c  57                   push edi
// 005bc88d  e85ecbffff           call 0x5b93f0
// 005bc892  83c408               add esp, 8
// 005bc895  85c0                 test eax, eax
// 005bc897  7447                 je 0x5bc8e0
// 005bc899  a148828a00           mov eax, dword ptr [0x8a8248]
// 005bc89e  50                   push eax
// 005bc89f  68f0d8ffff           push 0xffffd8f0
// 005bc8a4  57                   push edi
// 005bc8a5  e826caffff           call 0x5b92d0
// 005bc8aa  6afe                 push -2
// 005bc8ac  6aff                 push -1
// 005bc8ae  57                   push edi
// 005bc8af  e86cc4ffff           call 0x5b8d20
// 005bc8b4  83c418               add esp, 0x18
// 005bc8b7  85c0                 test eax, eax
// 005bc8b9  7430                 je 0x5bc8eb
// 005bc8bb  6afd                 push -3
// 005bc8bd  57                   push edi
// 005bc8be  e89dc1ffff           call 0x5b8a60
// 005bc8c3  d906                 fld dword ptr [esi]
// 005bc8c5  8b442420             mov eax, dword ptr [esp + 0x20]
// 005bc8c9  d918                 fstp dword ptr [eax]
// 005bc8cb  83c408               add esp, 8
// 005bc8ce  d94604               fld dword ptr [esi + 4]
// 005bc8d1  5f                   pop edi
// 005bc8d2  d95804               fstp dword ptr [eax + 4]
// 005bc8d5  d94608               fld dword ptr [esi + 8]
// 005bc8d8  5e                   pop esi
// 005bc8d9  d95808               fstp dword ptr [eax + 8]
// 005bc8dc  b001                 mov al, 1
// 005bc8de  5b                   pop ebx
// 005bc8df  c3                   ret 
// 005bc8e0  6afe                 push -2
// 005bc8e2  57                   push edi
// 005bc8e3  e878c1ffff           call 0x5b8a60
// 005bc8e8  83c408               add esp, 8
// 005bc8eb  5f                   pop edi
// 005bc8ec  5e                   pop esi
// 005bc8ed  32c0                 xor al, al
// 005bc8ef  5b                   pop ebx
// 005bc8f0  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$getValue@VVector3@G3D@@@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@SA_NPAUlua_State@@IAAVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
