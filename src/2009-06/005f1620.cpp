// roc 2009-06 005f1620  unit: RBX::VBodyGyro::?$FactoryProduct::Creator  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f1620
//
// 005f1620  6aff                 push -1
// 005f1622  686b088500           push 0x85086b
// 005f1627  64a100000000         mov eax, dword ptr fs:[0]
// 005f162d  50                   push eax
// 005f162e  64892500000000       mov dword ptr fs:[0], esp
// 005f1635  83ec08               sub esp, 8
// 005f1638  c7042400000000       mov dword ptr [esp], 0
// 005f163f  685c010000           push 0x15c
// 005f1644  c644240400           mov byte ptr [esp + 4], 0
// 005f1649  e8ea731200           call 0x718a38
// 005f164e  83c404               add esp, 4
// 005f1651  89442404             mov dword ptr [esp + 4], eax
// 005f1655  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f165d  85c0                 test eax, eax
// 005f165f  7409                 je 0x5f166a
// 005f1661  8bc8                 mov ecx, eax
// 005f1663  e8582c0a00           call 0x6942c0
// 005f1668  eb02                 jmp 0x5f166c
// 005f166a  33c0                 xor eax, eax
// 005f166c  8b0c24               mov ecx, dword ptr [esp]
// 005f166f  56                   push esi
// 005f1670  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005f1674  51                   push ecx
// 005f1675  50                   push eax
// 005f1676  8bce                 mov ecx, esi
// 005f1678  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005f1680  e8ebfeffff           call 0x5f1570
// 005f1685  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f1689  8bc6                 mov eax, esi
// 005f168b  5e                   pop esi
// 005f168c  64890d00000000       mov dword ptr fs:[0], ecx
// 005f1693  83c414               add esp, 0x14
// 005f1696  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??$create@VShirt@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VShirt@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/CharacterAppearance.cpp
