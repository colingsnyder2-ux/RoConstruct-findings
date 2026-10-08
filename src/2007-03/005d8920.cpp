// roc 2007-03 005d8920  unit: seg_005d0000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d8920
//
// 005d8920  51                   push ecx
// 005d8921  8b4118               mov eax, dword ptr [ecx + 0x18]
// 005d8924  85c0                 test eax, eax
// 005d8926  c7042400000000       mov dword ptr [esp], 0
// 005d892d  7407                 je 0x5d8936
// 005d892f  0530020000           add eax, 0x230
// 005d8934  eb02                 jmp 0x5d8938
// 005d8936  33c0                 xor eax, eax
// 005d8938  56                   push esi
// 005d8939  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005d893d  50                   push eax
// 005d893e  8b442414             mov eax, dword ptr [esp + 0x14]
// 005d8942  50                   push eax
// 005d8943  56                   push esi
// 005d8944  e807ffffff           call 0x5d8850
// 005d8949  83c40c               add esp, 0xc
// 005d894c  8bc6                 mov eax, esi
// 005d894e  5e                   pop esi
// 005d894f  59                   pop ecx
// 005d8950  c20800               ret 8
// library rbxgs/v8datamodel\MouseCommand.cpp (function ?getUnitMouseRay@MouseCommand@RBX@@QBE?AVRay@G3D@@ABVUIEvent@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/MouseCommand.cpp
