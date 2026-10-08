// roc 2011-06 004ac510  unit: RBX::Network::Player::W4ChatMode::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ac510
//
// 004ac510  6aff                 push -1
// 004ac512  6848b99e00           push 0x9eb948
// 004ac517  64a100000000         mov eax, dword ptr fs:[0]
// 004ac51d  50                   push eax
// 004ac51e  64892500000000       mov dword ptr fs:[0], esp
// 004ac525  51                   push ecx
// 004ac526  56                   push esi
// 004ac527  57                   push edi
// 004ac528  8bf9                 mov edi, ecx
// 004ac52a  897c2408             mov dword ptr [esp + 8], edi
// 004ac52e  8d7718               lea esi, [edi + 0x18]
// 004ac531  8bce                 mov ecx, esi
// 004ac533  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004ac53b  e850c6ffff           call 0x4a8b90
// 004ac540  8b4604               mov eax, dword ptr [esi + 4]
// 004ac543  50                   push eax
// 004ac544  e80fdb3500           call 0x80a058
// 004ac549  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ac54d  c7460400000000       mov dword ptr [esi + 4], 0
// 004ac554  83c404               add esp, 4
// 004ac557  c707e0bea500         mov dword ptr [edi], 0xa5bee0
// 004ac55d  5f                   pop edi
// 004ac55e  5e                   pop esi
// 004ac55f  64890d00000000       mov dword ptr fs:[0], ecx
// 004ac566  83c410               add esp, 0x10
// 004ac569  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??1FunctionDescriptor@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
