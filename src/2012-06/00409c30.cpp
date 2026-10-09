// roc 2012-06 00409c30  unit: RBX::VTeam::?$FactoryProduct::Creator  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00409c30
//
// 00409c30  6aff                 push -1
// 00409c32  68ebd7a900           push 0xa9d7eb
// 00409c37  64a100000000         mov eax, dword ptr fs:[0]
// 00409c3d  50                   push eax
// 00409c3e  64892500000000       mov dword ptr fs:[0], esp
// 00409c45  83ec08               sub esp, 8
// 00409c48  c7042400000000       mov dword ptr [esp], 0
// 00409c4f  6850010000           push 0x150
// 00409c54  c644240400           mov byte ptr [esp + 4], 0
// 00409c59  e8bc845700           call 0x98211a
// 00409c5e  83c404               add esp, 4
// 00409c61  89442404             mov dword ptr [esp + 4], eax
// 00409c65  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00409c6d  85c0                 test eax, eax
// 00409c6f  7409                 je 0x409c7a
// 00409c71  8bc8                 mov ecx, eax
// 00409c73  e8b8782900           call 0x6a1530
// 00409c78  eb02                 jmp 0x409c7c
// 00409c7a  33c0                 xor eax, eax
// 00409c7c  8b0c24               mov ecx, dword ptr [esp]
// 00409c7f  56                   push esi
// 00409c80  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00409c84  51                   push ecx
// 00409c85  50                   push eax
// 00409c86  8bce                 mov ecx, esi
// 00409c88  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00409c90  e82bffffff           call 0x409bc0
// 00409c95  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00409c99  8bc6                 mov eax, esi
// 00409c9b  5e                   pop esi
// 00409c9c  64890d00000000       mov dword ptr fs:[0], ecx
// 00409ca3  83c414               add esp, 0x14
// 00409ca6  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??$create@VShirtGraphic@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VShirtGraphic@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/CharacterAppearance.cpp
