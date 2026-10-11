// roc 2008-06 004a4d40  unit: RBX::VHint::?$FactoryProduct  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a4d40
//
// 004a4d40  6aff                 push -1
// 004a4d42  683b467d00           push 0x7d463b
// 004a4d47  64a100000000         mov eax, dword ptr fs:[0]
// 004a4d4d  50                   push eax
// 004a4d4e  64892500000000       mov dword ptr fs:[0], esp
// 004a4d55  83ec08               sub esp, 8
// 004a4d58  c7042400000000       mov dword ptr [esp], 0
// 004a4d5f  685c010000           push 0x15c
// 004a4d64  c644240400           mov byte ptr [esp + 4], 0
// 004a4d69  ff15b0288000         call dword ptr [0x8028b0]
// 004a4d6f  83c404               add esp, 4
// 004a4d72  89442404             mov dword ptr [esp + 4], eax
// 004a4d76  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004a4d7e  85c0                 test eax, eax
// 004a4d80  7409                 je 0x4a4d8b
// 004a4d82  8bc8                 mov ecx, eax
// 004a4d84  e8f7feffff           call 0x4a4c80
// 004a4d89  eb02                 jmp 0x4a4d8d
// 004a4d8b  33c0                 xor eax, eax
// 004a4d8d  8b0c24               mov ecx, dword ptr [esp]
// 004a4d90  56                   push esi
// 004a4d91  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004a4d95  51                   push ecx
// 004a4d96  50                   push eax
// 004a4d97  8bce                 mov ecx, esi
// 004a4d99  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004a4da1  e8daedffff           call 0x4a3b80
// 004a4da6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a4daa  8bc6                 mov eax, esi
// 004a4dac  5e                   pop esi
// 004a4dad  64890d00000000       mov dword ptr fs:[0], ecx
// 004a4db4  83c414               add esp, 0x14
// 004a4db7  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??$create@VShirt@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VShirt@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/CharacterAppearance.cpp
