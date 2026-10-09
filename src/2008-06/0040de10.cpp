// roc 2008-06 0040de10  unit: RBX::Reflection::Metadata::VClass::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040de10
//
// 0040de10  6aff                 push -1
// 0040de12  683b467d00           push 0x7d463b
// 0040de17  64a100000000         mov eax, dword ptr fs:[0]
// 0040de1d  50                   push eax
// 0040de1e  64892500000000       mov dword ptr fs:[0], esp
// 0040de25  83ec08               sub esp, 8
// 0040de28  c7042400000000       mov dword ptr [esp], 0
// 0040de2f  6850010000           push 0x150
// 0040de34  c644240400           mov byte ptr [esp + 4], 0
// 0040de39  ff15b0288000         call dword ptr [0x8028b0]
// 0040de3f  83c404               add esp, 4
// 0040de42  89442404             mov dword ptr [esp + 4], eax
// 0040de46  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040de4e  85c0                 test eax, eax
// 0040de50  7409                 je 0x40de5b
// 0040de52  8bc8                 mov ecx, eax
// 0040de54  e897feffff           call 0x40dcf0
// 0040de59  eb02                 jmp 0x40de5d
// 0040de5b  33c0                 xor eax, eax
// 0040de5d  8b0c24               mov ecx, dword ptr [esp]
// 0040de60  56                   push esi
// 0040de61  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0040de65  51                   push ecx
// 0040de66  50                   push eax
// 0040de67  8bce                 mov ecx, esi
// 0040de69  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0040de71  e8dae6ffff           call 0x40c550
// 0040de76  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040de7a  8bc6                 mov eax, esi
// 0040de7c  5e                   pop esi
// 0040de7d  64890d00000000       mov dword ptr fs:[0], ecx
// 0040de84  83c414               add esp, 0x14
// 0040de87  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??$create@VHole@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VHole@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
