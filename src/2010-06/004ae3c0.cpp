// roc 2010-06 004ae3c0  unit: RBX::VNetworkSettings::?$FactoryProduct::Creator  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004ae3c0
//
// 004ae3c0  6aff                 push -1
// 004ae3c2  689bbf9800           push 0x98bf9b
// 004ae3c7  64a100000000         mov eax, dword ptr fs:[0]
// 004ae3cd  50                   push eax
// 004ae3ce  64892500000000       mov dword ptr fs:[0], esp
// 004ae3d5  83ec08               sub esp, 8
// 004ae3d8  c7042400000000       mov dword ptr [esp], 0
// 004ae3df  6850010000           push 0x150
// 004ae3e4  c644240400           mov byte ptr [esp + 4], 0
// 004ae3e9  e8b2952f00           call 0x7a79a0
// 004ae3ee  83c404               add esp, 4
// 004ae3f1  89442404             mov dword ptr [esp + 4], eax
// 004ae3f5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004ae3fd  85c0                 test eax, eax
// 004ae3ff  7409                 je 0x4ae40a
// 004ae401  8bc8                 mov ecx, eax
// 004ae403  e8287c0200           call 0x4d6030
// 004ae408  eb02                 jmp 0x4ae40c
// 004ae40a  33c0                 xor eax, eax
// 004ae40c  8b0c24               mov ecx, dword ptr [esp]
// 004ae40f  56                   push esi
// 004ae410  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004ae414  51                   push ecx
// 004ae415  50                   push eax
// 004ae416  8bce                 mov ecx, esi
// 004ae418  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004ae420  e8ebfeffff           call 0x4ae310
// 004ae425  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ae429  8bc6                 mov eax, esi
// 004ae42b  5e                   pop esi
// 004ae42c  64890d00000000       mov dword ptr fs:[0], ecx
// 004ae433  83c414               add esp, 0x14
// 004ae436  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??$create@VShirtGraphic@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VShirtGraphic@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/CharacterAppearance.cpp
