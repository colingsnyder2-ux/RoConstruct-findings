// roc 2008-06 00639700  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00639700
//
// 00639700  6aff                 push -1
// 00639702  683b467d00           push 0x7d463b
// 00639707  64a100000000         mov eax, dword ptr fs:[0]
// 0063970d  50                   push eax
// 0063970e  64892500000000       mov dword ptr fs:[0], esp
// 00639715  83ec08               sub esp, 8
// 00639718  c7042400000000       mov dword ptr [esp], 0
// 0063971f  6834010000           push 0x134
// 00639724  c644240400           mov byte ptr [esp + 4], 0
// 00639729  ff15b0288000         call dword ptr [0x8028b0]
// 0063972f  83c404               add esp, 4
// 00639732  89442404             mov dword ptr [esp + 4], eax
// 00639736  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0063973e  85c0                 test eax, eax
// 00639740  7409                 je 0x63974b
// 00639742  8bc8                 mov ecx, eax
// 00639744  e827eaffff           call 0x638170
// 00639749  eb02                 jmp 0x63974d
// 0063974b  33c0                 xor eax, eax
// 0063974d  8b0c24               mov ecx, dword ptr [esp]
// 00639750  56                   push esi
// 00639751  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00639755  51                   push ecx
// 00639756  50                   push eax
// 00639757  8bce                 mov ecx, esi
// 00639759  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00639761  e87abaffff           call 0x6351e0
// 00639766  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063976a  8bc6                 mov eax, esi
// 0063976c  5e                   pop esi
// 0063976d  64890d00000000       mov dword ptr fs:[0], ecx
// 00639774  83c414               add esp, 0x14
// 00639777  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??$create@VSkin@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VSkin@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/CharacterAppearance.cpp
