// roc 2010-06 00528460  unit: G3D::VVector3::?$Table  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00528460
//
// 00528460  6aff                 push -1
// 00528462  689bbf9800           push 0x98bf9b
// 00528467  64a100000000         mov eax, dword ptr fs:[0]
// 0052846d  50                   push eax
// 0052846e  64892500000000       mov dword ptr fs:[0], esp
// 00528475  83ec08               sub esp, 8
// 00528478  c7042400000000       mov dword ptr [esp], 0
// 0052847f  685c010000           push 0x15c
// 00528484  c644240400           mov byte ptr [esp + 4], 0
// 00528489  e812f52700           call 0x7a79a0
// 0052848e  83c404               add esp, 4
// 00528491  89442404             mov dword ptr [esp + 4], eax
// 00528495  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0052849d  85c0                 test eax, eax
// 0052849f  7409                 je 0x5284aa
// 005284a1  8bc8                 mov ecx, eax
// 005284a3  e8c8391700           call 0x69be70
// 005284a8  eb02                 jmp 0x5284ac
// 005284aa  33c0                 xor eax, eax
// 005284ac  8b0c24               mov ecx, dword ptr [esp]
// 005284af  56                   push esi
// 005284b0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005284b4  51                   push ecx
// 005284b5  50                   push eax
// 005284b6  8bce                 mov ecx, esi
// 005284b8  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005284c0  e8ebfeffff           call 0x5283b0
// 005284c5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005284c9  8bc6                 mov eax, esi
// 005284cb  5e                   pop esi
// 005284cc  64890d00000000       mov dword ptr fs:[0], ecx
// 005284d3  83c414               add esp, 0x14
// 005284d6  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??$create@VShirt@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VShirt@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/CharacterAppearance.cpp
