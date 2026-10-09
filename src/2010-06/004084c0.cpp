// roc 2010-06 004084c0  unit: VCApp::?$CComObject  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004084c0
//
// 004084c0  6aff                 push -1
// 004084c2  689bbf9800           push 0x98bf9b
// 004084c7  64a100000000         mov eax, dword ptr fs:[0]
// 004084cd  50                   push eax
// 004084ce  64892500000000       mov dword ptr fs:[0], esp
// 004084d5  83ec08               sub esp, 8
// 004084d8  c7042400000000       mov dword ptr [esp], 0
// 004084df  6838010000           push 0x138
// 004084e4  c644240400           mov byte ptr [esp + 4], 0
// 004084e9  e8b2f43900           call 0x7a79a0
// 004084ee  83c404               add esp, 4
// 004084f1  89442404             mov dword ptr [esp + 4], eax
// 004084f5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004084fd  85c0                 test eax, eax
// 004084ff  7409                 je 0x40850a
// 00408501  8bc8                 mov ecx, eax
// 00408503  e8482f0400           call 0x44b450
// 00408508  eb02                 jmp 0x40850c
// 0040850a  33c0                 xor eax, eax
// 0040850c  8b0c24               mov ecx, dword ptr [esp]
// 0040850f  56                   push esi
// 00408510  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00408514  51                   push ecx
// 00408515  50                   push eax
// 00408516  8bce                 mov ecx, esi
// 00408518  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00408520  e8ebfeffff           call 0x408410
// 00408525  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00408529  8bc6                 mov eax, esi
// 0040852b  5e                   pop esi
// 0040852c  64890d00000000       mov dword ptr fs:[0], ecx
// 00408533  83c414               add esp, 0x14
// 00408536  c3                   ret 
// library openrbx-client/App\v8datamodel\Teams.cpp (function ??$create@VTeams@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VTeams@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Teams.cpp
