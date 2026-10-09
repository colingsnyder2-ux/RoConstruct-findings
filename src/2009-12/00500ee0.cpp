// roc 2009-12 00500ee0  unit: RBX::VNetworkSettings::?$FactoryProduct::Creator  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00500ee0
//
// 00500ee0  6aff                 push -1
// 00500ee2  684bad9300           push 0x93ad4b
// 00500ee7  64a100000000         mov eax, dword ptr fs:[0]
// 00500eed  50                   push eax
// 00500eee  64892500000000       mov dword ptr fs:[0], esp
// 00500ef5  83ec08               sub esp, 8
// 00500ef8  c7042400000000       mov dword ptr [esp], 0
// 00500eff  6850010000           push 0x150
// 00500f04  c644240400           mov byte ptr [esp + 4], 0
// 00500f09  e852292f00           call 0x7f3860
// 00500f0e  83c404               add esp, 4
// 00500f11  89442404             mov dword ptr [esp + 4], eax
// 00500f15  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00500f1d  85c0                 test eax, eax
// 00500f1f  7409                 je 0x500f2a
// 00500f21  8bc8                 mov ecx, eax
// 00500f23  e868750200           call 0x528490
// 00500f28  eb02                 jmp 0x500f2c
// 00500f2a  33c0                 xor eax, eax
// 00500f2c  8b0c24               mov ecx, dword ptr [esp]
// 00500f2f  56                   push esi
// 00500f30  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00500f34  51                   push ecx
// 00500f35  50                   push eax
// 00500f36  8bce                 mov ecx, esi
// 00500f38  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00500f40  e8ebfeffff           call 0x500e30
// 00500f45  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00500f49  8bc6                 mov eax, esi
// 00500f4b  5e                   pop esi
// 00500f4c  64890d00000000       mov dword ptr fs:[0], ecx
// 00500f53  83c414               add esp, 0x14
// 00500f56  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??$create@VShirtGraphic@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VShirtGraphic@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/CharacterAppearance.cpp
