// roc 2007-08 0058f780  unit: RBX::PAVRunService::?$sp_counted_impl_pd  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058f780
//
// 0058f780  6aff                 push -1
// 0058f782  68bb6a7500           push 0x756abb
// 0058f787  64a100000000         mov eax, dword ptr fs:[0]
// 0058f78d  50                   push eax
// 0058f78e  64892500000000       mov dword ptr fs:[0], esp
// 0058f795  83ec08               sub esp, 8
// 0058f798  c7042400000000       mov dword ptr [esp], 0
// 0058f79f  6828010000           push 0x128
// 0058f7a4  c644240400           mov byte ptr [esp + 4], 0
// 0058f7a9  ff15d0e67700         call dword ptr [0x77e6d0]
// 0058f7af  83c404               add esp, 4
// 0058f7b2  89442404             mov dword ptr [esp + 4], eax
// 0058f7b6  85c0                 test eax, eax
// 0058f7b8  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058f7c0  7409                 je 0x58f7cb
// 0058f7c2  8bc8                 mov ecx, eax
// 0058f7c4  e837f30500           call 0x5eeb00
// 0058f7c9  eb02                 jmp 0x58f7cd
// 0058f7cb  33c0                 xor eax, eax
// 0058f7cd  8b0c24               mov ecx, dword ptr [esp]
// 0058f7d0  56                   push esi
// 0058f7d1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0058f7d5  51                   push ecx
// 0058f7d6  50                   push eax
// 0058f7d7  8bce                 mov ecx, esi
// 0058f7d9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0058f7e1  e8eafeffff           call 0x58f6d0
// 0058f7e6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058f7ea  8bc6                 mov eax, esi
// 0058f7ec  5e                   pop esi
// 0058f7ed  64890d00000000       mov dword ptr fs:[0], ecx
// 0058f7f4  83c414               add esp, 0x14
// 0058f7f7  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??$create@VScript@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VScript@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/Script.cpp
