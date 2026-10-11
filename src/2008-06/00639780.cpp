// roc 2008-06 00639780  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00639780
//
// 00639780  6aff                 push -1
// 00639782  683b467d00           push 0x7d463b
// 00639787  64a100000000         mov eax, dword ptr fs:[0]
// 0063978d  50                   push eax
// 0063978e  64892500000000       mov dword ptr fs:[0], esp
// 00639795  83ec08               sub esp, 8
// 00639798  c7042400000000       mov dword ptr [esp], 0
// 0063979f  6834010000           push 0x134
// 006397a4  c644240400           mov byte ptr [esp + 4], 0
// 006397a9  ff15b0288000         call dword ptr [0x8028b0]
// 006397af  83c404               add esp, 4
// 006397b2  89442404             mov dword ptr [esp + 4], eax
// 006397b6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006397be  85c0                 test eax, eax
// 006397c0  7409                 je 0x6397cb
// 006397c2  8bc8                 mov ecx, eax
// 006397c4  e897eaffff           call 0x638260
// 006397c9  eb02                 jmp 0x6397cd
// 006397cb  33c0                 xor eax, eax
// 006397cd  8b0c24               mov ecx, dword ptr [esp]
// 006397d0  56                   push esi
// 006397d1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006397d5  51                   push ecx
// 006397d6  50                   push eax
// 006397d7  8bce                 mov ecx, esi
// 006397d9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 006397e1  e86abcffff           call 0x635450
// 006397e6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006397ea  8bc6                 mov eax, esi
// 006397ec  5e                   pop esi
// 006397ed  64890d00000000       mov dword ptr fs:[0], ecx
// 006397f4  83c414               add esp, 0x14
// 006397f7  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??$create@VSkin@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VSkin@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/CharacterAppearance.cpp
