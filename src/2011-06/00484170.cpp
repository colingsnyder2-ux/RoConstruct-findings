// roc 2011-06 00484170  unit: RBX::VLocalBackpackSwitcher::?$FactoryProduct  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00484170
//
// 00484170  6aff                 push -1
// 00484172  688b579e00           push 0x9e578b
// 00484177  64a100000000         mov eax, dword ptr fs:[0]
// 0048417d  50                   push eax
// 0048417e  64892500000000       mov dword ptr fs:[0], esp
// 00484185  83ec08               sub esp, 8
// 00484188  c7042400000000       mov dword ptr [esp], 0
// 0048418f  685c010000           push 0x15c
// 00484194  c644240400           mov byte ptr [esp + 4], 0
// 00484199  e8c05e3800           call 0x80a05e
// 0048419e  83c404               add esp, 4
// 004841a1  89442404             mov dword ptr [esp + 4], eax
// 004841a5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004841ad  85c0                 test eax, eax
// 004841af  7409                 je 0x4841ba
// 004841b1  8bc8                 mov ecx, eax
// 004841b3  e898731f00           call 0x67b550
// 004841b8  eb02                 jmp 0x4841bc
// 004841ba  33c0                 xor eax, eax
// 004841bc  8b0c24               mov ecx, dword ptr [esp]
// 004841bf  56                   push esi
// 004841c0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004841c4  51                   push ecx
// 004841c5  50                   push eax
// 004841c6  8bce                 mov ecx, esi
// 004841c8  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004841d0  e8ebfeffff           call 0x4840c0
// 004841d5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004841d9  8bc6                 mov eax, esi
// 004841db  5e                   pop esi
// 004841dc  64890d00000000       mov dword ptr fs:[0], ecx
// 004841e3  83c414               add esp, 0x14
// 004841e6  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??$create@VShirt@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VShirt@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/CharacterAppearance.cpp
