// roc 2008-06 004a3850  unit: RBX::Network::Server  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a3850
//
// 004a3850  6aff                 push -1
// 004a3852  683b467d00           push 0x7d463b
// 004a3857  64a100000000         mov eax, dword ptr fs:[0]
// 004a385d  50                   push eax
// 004a385e  64892500000000       mov dword ptr fs:[0], esp
// 004a3865  83ec08               sub esp, 8
// 004a3868  c7042400000000       mov dword ptr [esp], 0
// 004a386f  685c010000           push 0x15c
// 004a3874  c644240400           mov byte ptr [esp + 4], 0
// 004a3879  ff15b0288000         call dword ptr [0x8028b0]
// 004a387f  83c404               add esp, 4
// 004a3882  89442404             mov dword ptr [esp + 4], eax
// 004a3886  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004a388e  85c0                 test eax, eax
// 004a3890  7409                 je 0x4a389b
// 004a3892  8bc8                 mov ecx, eax
// 004a3894  e887981300           call 0x5dd120
// 004a3899  eb02                 jmp 0x4a389d
// 004a389b  33c0                 xor eax, eax
// 004a389d  8b0c24               mov ecx, dword ptr [esp]
// 004a38a0  56                   push esi
// 004a38a1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004a38a5  51                   push ecx
// 004a38a6  50                   push eax
// 004a38a7  8bce                 mov ecx, esi
// 004a38a9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004a38b1  e8eafeffff           call 0x4a37a0
// 004a38b6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a38ba  8bc6                 mov eax, esi
// 004a38bc  5e                   pop esi
// 004a38bd  64890d00000000       mov dword ptr fs:[0], ecx
// 004a38c4  83c414               add esp, 0x14
// 004a38c7  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??$create@VShirt@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VShirt@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/CharacterAppearance.cpp
