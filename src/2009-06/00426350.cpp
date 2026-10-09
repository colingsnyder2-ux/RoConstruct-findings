// roc 2009-06 00426350  unit: boost::any::H::?$holder  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00426350
//
// 00426350  6aff                 push -1
// 00426352  686b088500           push 0x85086b
// 00426357  64a100000000         mov eax, dword ptr fs:[0]
// 0042635d  50                   push eax
// 0042635e  64892500000000       mov dword ptr fs:[0], esp
// 00426365  83ec08               sub esp, 8
// 00426368  c7042400000000       mov dword ptr [esp], 0
// 0042636f  6848010000           push 0x148
// 00426374  c644240400           mov byte ptr [esp + 4], 0
// 00426379  e8ba262f00           call 0x718a38
// 0042637e  83c404               add esp, 4
// 00426381  89442404             mov dword ptr [esp + 4], eax
// 00426385  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0042638d  85c0                 test eax, eax
// 0042638f  7409                 je 0x42639a
// 00426391  8bc8                 mov ecx, eax
// 00426393  e8c8372100           call 0x639b60
// 00426398  eb02                 jmp 0x42639c
// 0042639a  33c0                 xor eax, eax
// 0042639c  8b0c24               mov ecx, dword ptr [esp]
// 0042639f  56                   push esi
// 004263a0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004263a4  51                   push ecx
// 004263a5  50                   push eax
// 004263a6  8bce                 mov ecx, esi
// 004263a8  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004263b0  e84bfdffff           call 0x426100
// 004263b5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004263b9  8bc6                 mov eax, esi
// 004263bb  5e                   pop esi
// 004263bc  64890d00000000       mov dword ptr fs:[0], ecx
// 004263c3  83c414               add esp, 0x14
// 004263c6  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??$create@VBodyColors@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VBodyColors@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/CharacterAppearance.cpp
