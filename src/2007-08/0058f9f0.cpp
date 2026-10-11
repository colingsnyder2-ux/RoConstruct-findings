// roc 2007-08 0058f9f0  unit: RBX::VBodyPosition::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058f9f0
//
// 0058f9f0  6aff                 push -1
// 0058f9f2  68bb6a7500           push 0x756abb
// 0058f9f7  64a100000000         mov eax, dword ptr fs:[0]
// 0058f9fd  50                   push eax
// 0058f9fe  64892500000000       mov dword ptr fs:[0], esp
// 0058fa05  83ec08               sub esp, 8
// 0058fa08  c7042400000000       mov dword ptr [esp], 0
// 0058fa0f  6824010000           push 0x124
// 0058fa14  c644240400           mov byte ptr [esp + 4], 0
// 0058fa19  ff15d0e67700         call dword ptr [0x77e6d0]
// 0058fa1f  83c404               add esp, 4
// 0058fa22  89442404             mov dword ptr [esp + 4], eax
// 0058fa26  85c0                 test eax, eax
// 0058fa28  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058fa30  7409                 je 0x58fa3b
// 0058fa32  8bc8                 mov ecx, eax
// 0058fa34  e8d7f10500           call 0x5eec10
// 0058fa39  eb02                 jmp 0x58fa3d
// 0058fa3b  33c0                 xor eax, eax
// 0058fa3d  8b0c24               mov ecx, dword ptr [esp]
// 0058fa40  56                   push esi
// 0058fa41  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0058fa45  51                   push ecx
// 0058fa46  50                   push eax
// 0058fa47  8bce                 mov ecx, esi
// 0058fa49  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0058fa51  e8eafeffff           call 0x58f940
// 0058fa56  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058fa5a  8bc6                 mov eax, esi
// 0058fa5c  5e                   pop esi
// 0058fa5d  64890d00000000       mov dword ptr fs:[0], ecx
// 0058fa64  83c414               add esp, 0x14
// 0058fa67  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??$create@VShirt@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VShirt@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/CharacterAppearance.cpp
