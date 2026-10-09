// roc 2008-06 0044bdc0  unit: CRobloxModule  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044bdc0
//
// 0044bdc0  6aff                 push -1
// 0044bdc2  683b467d00           push 0x7d463b
// 0044bdc7  64a100000000         mov eax, dword ptr fs:[0]
// 0044bdcd  50                   push eax
// 0044bdce  64892500000000       mov dword ptr fs:[0], esp
// 0044bdd5  83ec08               sub esp, 8
// 0044bdd8  c7042400000000       mov dword ptr [esp], 0
// 0044bddf  683c010000           push 0x13c
// 0044bde4  c644240400           mov byte ptr [esp + 4], 0
// 0044bde9  ff15b0288000         call dword ptr [0x8028b0]
// 0044bdef  83c404               add esp, 4
// 0044bdf2  89442404             mov dword ptr [esp + 4], eax
// 0044bdf6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0044bdfe  85c0                 test eax, eax
// 0044be00  7409                 je 0x44be0b
// 0044be02  8bc8                 mov ecx, eax
// 0044be04  e877381700           call 0x5bf680
// 0044be09  eb02                 jmp 0x44be0d
// 0044be0b  33c0                 xor eax, eax
// 0044be0d  8b0c24               mov ecx, dword ptr [esp]
// 0044be10  56                   push esi
// 0044be11  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0044be15  51                   push ecx
// 0044be16  50                   push eax
// 0044be17  8bce                 mov ecx, esi
// 0044be19  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0044be21  e82afaffff           call 0x44b850
// 0044be26  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044be2a  8bc6                 mov eax, esi
// 0044be2c  5e                   pop esi
// 0044be2d  64890d00000000       mov dword ptr fs:[0], ecx
// 0044be34  83c414               add esp, 0x14
// 0044be37  c3                   ret 
// library openrbx-client/App\v8datamodel\Team.cpp (function ??$create@VTeam@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VTeam@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Team.cpp
