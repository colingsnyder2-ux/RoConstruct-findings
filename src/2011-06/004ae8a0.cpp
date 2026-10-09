// roc 2011-06 004ae8a0  unit: RBX::VNetworkSettings::?$FactoryProduct::Creator  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ae8a0
//
// 004ae8a0  6aff                 push -1
// 004ae8a2  688b579e00           push 0x9e578b
// 004ae8a7  64a100000000         mov eax, dword ptr fs:[0]
// 004ae8ad  50                   push eax
// 004ae8ae  64892500000000       mov dword ptr fs:[0], esp
// 004ae8b5  83ec08               sub esp, 8
// 004ae8b8  c7042400000000       mov dword ptr [esp], 0
// 004ae8bf  6850010000           push 0x150
// 004ae8c4  c644240400           mov byte ptr [esp + 4], 0
// 004ae8c9  e890b73500           call 0x80a05e
// 004ae8ce  83c404               add esp, 4
// 004ae8d1  89442404             mov dword ptr [esp + 4], eax
// 004ae8d5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004ae8dd  85c0                 test eax, eax
// 004ae8df  7409                 je 0x4ae8ea
// 004ae8e1  8bc8                 mov ecx, eax
// 004ae8e3  e8a8400300           call 0x4e2990
// 004ae8e8  eb02                 jmp 0x4ae8ec
// 004ae8ea  33c0                 xor eax, eax
// 004ae8ec  8b0c24               mov ecx, dword ptr [esp]
// 004ae8ef  56                   push esi
// 004ae8f0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004ae8f4  51                   push ecx
// 004ae8f5  50                   push eax
// 004ae8f6  8bce                 mov ecx, esi
// 004ae8f8  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004ae900  e8ebfeffff           call 0x4ae7f0
// 004ae905  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ae909  8bc6                 mov eax, esi
// 004ae90b  5e                   pop esi
// 004ae90c  64890d00000000       mov dword ptr fs:[0], ecx
// 004ae913  83c414               add esp, 0x14
// 004ae916  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??$create@VShirtGraphic@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VShirtGraphic@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/CharacterAppearance.cpp
