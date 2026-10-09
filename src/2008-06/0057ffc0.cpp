// roc 2008-06 0057ffc0  unit: RBX::VModelInstance::?$FilteredSelection  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057ffc0
//
// 0057ffc0  6aff                 push -1
// 0057ffc2  683b467d00           push 0x7d463b
// 0057ffc7  64a100000000         mov eax, dword ptr fs:[0]
// 0057ffcd  50                   push eax
// 0057ffce  64892500000000       mov dword ptr fs:[0], esp
// 0057ffd5  83ec08               sub esp, 8
// 0057ffd8  c7042400000000       mov dword ptr [esp], 0
// 0057ffdf  6850010000           push 0x150
// 0057ffe4  c644240400           mov byte ptr [esp + 4], 0
// 0057ffe9  ff15b0288000         call dword ptr [0x8028b0]
// 0057ffef  83c404               add esp, 4
// 0057fff2  89442404             mov dword ptr [esp + 4], eax
// 0057fff6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0057fffe  85c0                 test eax, eax
// 00580000  7409                 je 0x58000b
// 00580002  8bc8                 mov ecx, eax
// 00580004  e807c90800           call 0x60c910
// 00580009  eb02                 jmp 0x58000d
// 0058000b  33c0                 xor eax, eax
// 0058000d  8b0c24               mov ecx, dword ptr [esp]
// 00580010  56                   push esi
// 00580011  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00580015  51                   push ecx
// 00580016  50                   push eax
// 00580017  8bce                 mov ecx, esi
// 00580019  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00580021  e8eafeffff           call 0x57ff10
// 00580026  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058002a  8bc6                 mov eax, esi
// 0058002c  5e                   pop esi
// 0058002d  64890d00000000       mov dword ptr fs:[0], ecx
// 00580034  83c414               add esp, 0x14
// 00580037  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??$create@VHole@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VHole@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
