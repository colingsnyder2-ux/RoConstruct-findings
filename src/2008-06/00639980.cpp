// roc 2008-06 00639980  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00639980
//
// 00639980  6aff                 push -1
// 00639982  683b467d00           push 0x7d463b
// 00639987  64a100000000         mov eax, dword ptr fs:[0]
// 0063998d  50                   push eax
// 0063998e  64892500000000       mov dword ptr fs:[0], esp
// 00639995  83ec08               sub esp, 8
// 00639998  c7042400000000       mov dword ptr [esp], 0
// 0063999f  6860010000           push 0x160
// 006399a4  c644240400           mov byte ptr [esp + 4], 0
// 006399a9  ff15b0288000         call dword ptr [0x8028b0]
// 006399af  83c404               add esp, 4
// 006399b2  89442404             mov dword ptr [esp + 4], eax
// 006399b6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006399be  85c0                 test eax, eax
// 006399c0  7409                 je 0x6399cb
// 006399c2  8bc8                 mov ecx, eax
// 006399c4  e8e7edffff           call 0x6387b0
// 006399c9  eb02                 jmp 0x6399cd
// 006399cb  33c0                 xor eax, eax
// 006399cd  8b0c24               mov ecx, dword ptr [esp]
// 006399d0  56                   push esi
// 006399d1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006399d5  51                   push ecx
// 006399d6  50                   push eax
// 006399d7  8bce                 mov ecx, esi
// 006399d9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 006399e1  e81ac4ffff           call 0x635e00
// 006399e6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006399ea  8bc6                 mov eax, esi
// 006399ec  5e                   pop esi
// 006399ed  64890d00000000       mov dword ptr fs:[0], ecx
// 006399f4  83c414               add esp, 0x14
// 006399f7  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??$create@VScript@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VScript@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
