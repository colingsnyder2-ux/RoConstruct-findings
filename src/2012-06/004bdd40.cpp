// roc 2012-06 004bdd40  unit: RBX::VLighting::?$FactoryProduct::Creator  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004bdd40
//
// 004bdd40  6aff                 push -1
// 004bdd42  68ebd7a900           push 0xa9d7eb
// 004bdd47  64a100000000         mov eax, dword ptr fs:[0]
// 004bdd4d  50                   push eax
// 004bdd4e  64892500000000       mov dword ptr fs:[0], esp
// 004bdd55  83ec08               sub esp, 8
// 004bdd58  c7042400000000       mov dword ptr [esp], 0
// 004bdd5f  6848010000           push 0x148
// 004bdd64  c644240400           mov byte ptr [esp + 4], 0
// 004bdd69  e8ac434c00           call 0x98211a
// 004bdd6e  83c404               add esp, 4
// 004bdd71  89442404             mov dword ptr [esp + 4], eax
// 004bdd75  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004bdd7d  85c0                 test eax, eax
// 004bdd7f  7409                 je 0x4bdd8a
// 004bdd81  8bc8                 mov ecx, eax
// 004bdd83  e8f8f32e00           call 0x7ad180
// 004bdd88  eb02                 jmp 0x4bdd8c
// 004bdd8a  33c0                 xor eax, eax
// 004bdd8c  8b0c24               mov ecx, dword ptr [esp]
// 004bdd8f  56                   push esi
// 004bdd90  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004bdd94  51                   push ecx
// 004bdd95  50                   push eax
// 004bdd96  8bce                 mov ecx, esi
// 004bdd98  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004bdda0  e82bffffff           call 0x4bdcd0
// 004bdda5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004bdda9  8bc6                 mov eax, esi
// 004bddab  5e                   pop esi
// 004bddac  64890d00000000       mov dword ptr fs:[0], ecx
// 004bddb3  83c414               add esp, 0x14
// 004bddb6  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??$create@VBodyColors@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VBodyColors@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/CharacterAppearance.cpp
