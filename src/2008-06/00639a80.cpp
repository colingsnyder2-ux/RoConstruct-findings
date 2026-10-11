// roc 2008-06 00639a80  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00639a80
//
// 00639a80  6aff                 push -1
// 00639a82  683b467d00           push 0x7d463b
// 00639a87  64a100000000         mov eax, dword ptr fs:[0]
// 00639a8d  50                   push eax
// 00639a8e  64892500000000       mov dword ptr fs:[0], esp
// 00639a95  83ec08               sub esp, 8
// 00639a98  c7042400000000       mov dword ptr [esp], 0
// 00639a9f  6834010000           push 0x134
// 00639aa4  c644240400           mov byte ptr [esp + 4], 0
// 00639aa9  ff15b0288000         call dword ptr [0x8028b0]
// 00639aaf  83c404               add esp, 4
// 00639ab2  89442404             mov dword ptr [esp + 4], eax
// 00639ab6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00639abe  85c0                 test eax, eax
// 00639ac0  7409                 je 0x639acb
// 00639ac2  8bc8                 mov ecx, eax
// 00639ac4  e827efffff           call 0x6389f0
// 00639ac9  eb02                 jmp 0x639acd
// 00639acb  33c0                 xor eax, eax
// 00639acd  8b0c24               mov ecx, dword ptr [esp]
// 00639ad0  56                   push esi
// 00639ad1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00639ad5  51                   push ecx
// 00639ad6  50                   push eax
// 00639ad7  8bce                 mov ecx, esi
// 00639ad9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00639ae1  e8bac7ffff           call 0x6362a0
// 00639ae6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00639aea  8bc6                 mov eax, esi
// 00639aec  5e                   pop esi
// 00639aed  64890d00000000       mov dword ptr fs:[0], ecx
// 00639af4  83c414               add esp, 0x14
// 00639af7  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??$create@VSkin@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VSkin@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/CharacterAppearance.cpp
