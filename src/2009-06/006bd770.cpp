// roc 2009-06 006bd770  unit: RBX::Lua::LuaArguments  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bd770
//
// 006bd770  53                   push ebx
// 006bd771  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006bd775  56                   push esi
// 006bd776  57                   push edi
// 006bd777  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006bd77b  53                   push ebx
// 006bd77c  57                   push edi
// 006bd77d  e8debaffff           call 0x6b9260
// 006bd782  8bf0                 mov esi, eax
// 006bd784  83c408               add esp, 8
// 006bd787  85f6                 test esi, esi
// 006bd789  7460                 je 0x6bd7eb
// 006bd78b  53                   push ebx
// 006bd78c  57                   push edi
// 006bd78d  e87ebfffff           call 0x6b9710
// 006bd792  83c408               add esp, 8
// 006bd795  85c0                 test eax, eax
// 006bd797  7447                 je 0x6bd7e0
// 006bd799  a1f02aa200           mov eax, dword ptr [0xa22af0]
// 006bd79e  50                   push eax
// 006bd79f  68f0d8ffff           push 0xffffd8f0
// 006bd7a4  57                   push edi
// 006bd7a5  e826beffff           call 0x6b95d0
// 006bd7aa  6afe                 push -2
// 006bd7ac  6aff                 push -1
// 006bd7ae  57                   push edi
// 006bd7af  e89cb8ffff           call 0x6b9050
// 006bd7b4  83c418               add esp, 0x18
// 006bd7b7  85c0                 test eax, eax
// 006bd7b9  7430                 je 0x6bd7eb
// 006bd7bb  6afd                 push -3
// 006bd7bd  57                   push edi
// 006bd7be  e8cdb5ffff           call 0x6b8d90
// 006bd7c3  d906                 fld dword ptr [esi]
// 006bd7c5  8b442420             mov eax, dword ptr [esp + 0x20]
// 006bd7c9  d918                 fstp dword ptr [eax]
// 006bd7cb  83c408               add esp, 8
// 006bd7ce  d94604               fld dword ptr [esi + 4]
// 006bd7d1  5f                   pop edi
// 006bd7d2  d95804               fstp dword ptr [eax + 4]
// 006bd7d5  d94608               fld dword ptr [esi + 8]
// 006bd7d8  5e                   pop esi
// 006bd7d9  d95808               fstp dword ptr [eax + 8]
// 006bd7dc  b001                 mov al, 1
// 006bd7de  5b                   pop ebx
// 006bd7df  c3                   ret 
// 006bd7e0  6afe                 push -2
// 006bd7e2  57                   push edi
// 006bd7e3  e8a8b5ffff           call 0x6b8d90
// 006bd7e8  83c408               add esp, 8
// 006bd7eb  5f                   pop edi
// 006bd7ec  5e                   pop esi
// 006bd7ed  32c0                 xor al, al
// 006bd7ef  5b                   pop ebx
// 006bd7f0  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$getValue@VVector3@G3D@@@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@SA_NPAUlua_State@@IAAVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
