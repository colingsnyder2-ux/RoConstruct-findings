// roc 2009-06 0045d1a0  unit: RBX::VVehicleController::?$FactoryProduct::Creator  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0045d1a0
//
// 0045d1a0  6aff                 push -1
// 0045d1a2  686b088500           push 0x85086b
// 0045d1a7  64a100000000         mov eax, dword ptr fs:[0]
// 0045d1ad  50                   push eax
// 0045d1ae  64892500000000       mov dword ptr fs:[0], esp
// 0045d1b5  83ec08               sub esp, 8
// 0045d1b8  c7042400000000       mov dword ptr [esp], 0
// 0045d1bf  6848010000           push 0x148
// 0045d1c4  c644240400           mov byte ptr [esp + 4], 0
// 0045d1c9  e86ab82b00           call 0x718a38
// 0045d1ce  83c404               add esp, 4
// 0045d1d1  89442404             mov dword ptr [esp + 4], eax
// 0045d1d5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0045d1dd  85c0                 test eax, eax
// 0045d1df  7409                 je 0x45d1ea
// 0045d1e1  8bc8                 mov ecx, eax
// 0045d1e3  e8b8d81f00           call 0x65aaa0
// 0045d1e8  eb02                 jmp 0x45d1ec
// 0045d1ea  33c0                 xor eax, eax
// 0045d1ec  8b0c24               mov ecx, dword ptr [esp]
// 0045d1ef  56                   push esi
// 0045d1f0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0045d1f4  51                   push ecx
// 0045d1f5  50                   push eax
// 0045d1f6  8bce                 mov ecx, esi
// 0045d1f8  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0045d200  e8ebfeffff           call 0x45d0f0
// 0045d205  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0045d209  8bc6                 mov eax, esi
// 0045d20b  5e                   pop esi
// 0045d20c  64890d00000000       mov dword ptr fs:[0], ecx
// 0045d213  83c414               add esp, 0x14
// 0045d216  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??$create@VBodyColors@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VBodyColors@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/CharacterAppearance.cpp
