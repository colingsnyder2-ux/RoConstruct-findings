// roc 2007-03 005ca130  unit: seg_005c0000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ca130
//
// 005ca130  6aff                 push -1
// 005ca132  688b977500           push 0x75978b
// 005ca137  64a100000000         mov eax, dword ptr fs:[0]
// 005ca13d  50                   push eax
// 005ca13e  64892500000000       mov dword ptr fs:[0], esp
// 005ca145  83ec08               sub esp, 8
// 005ca148  c7042400000000       mov dword ptr [esp], 0
// 005ca14f  680c010000           push 0x10c
// 005ca154  c644240400           mov byte ptr [esp + 4], 0
// 005ca159  ff153ce97700         call dword ptr [0x77e93c]
// 005ca15f  83c404               add esp, 4
// 005ca162  89442404             mov dword ptr [esp + 4], eax
// 005ca166  85c0                 test eax, eax
// 005ca168  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005ca170  7409                 je 0x5ca17b
// 005ca172  8bc8                 mov ecx, eax
// 005ca174  e877fcffff           call 0x5c9df0
// 005ca179  eb02                 jmp 0x5ca17d
// 005ca17b  33c0                 xor eax, eax
// 005ca17d  8b0c24               mov ecx, dword ptr [esp]
// 005ca180  56                   push esi
// 005ca181  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005ca185  51                   push ecx
// 005ca186  50                   push eax
// 005ca187  8bce                 mov ecx, esi
// 005ca189  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005ca191  e86af9ffff           call 0x5c9b00
// 005ca196  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ca19a  8bc6                 mov eax, esi
// 005ca19c  5e                   pop esi
// 005ca19d  64890d00000000       mov dword ptr fs:[0], ecx
// 005ca1a4  83c414               add esp, 0x14
// 005ca1a7  c3                   ret 
// library openrbx-client/App\v8datamodel\ForceField.cpp (function ??$create@VForceField@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VForceField@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/ForceField.cpp
