// roc 2008-06 00639800  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00639800
//
// 00639800  6aff                 push -1
// 00639802  683b467d00           push 0x7d463b
// 00639807  64a100000000         mov eax, dword ptr fs:[0]
// 0063980d  50                   push eax
// 0063980e  64892500000000       mov dword ptr fs:[0], esp
// 00639815  83ec08               sub esp, 8
// 00639818  c7042400000000       mov dword ptr [esp], 0
// 0063981f  6838010000           push 0x138
// 00639824  c644240400           mov byte ptr [esp + 4], 0
// 00639829  ff15b0288000         call dword ptr [0x8028b0]
// 0063982f  83c404               add esp, 4
// 00639832  89442404             mov dword ptr [esp + 4], eax
// 00639836  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0063983e  85c0                 test eax, eax
// 00639840  7409                 je 0x63984b
// 00639842  8bc8                 mov ecx, eax
// 00639844  e837ebffff           call 0x638380
// 00639849  eb02                 jmp 0x63984d
// 0063984b  33c0                 xor eax, eax
// 0063984d  8b0c24               mov ecx, dword ptr [esp]
// 00639850  56                   push esi
// 00639851  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00639855  51                   push ecx
// 00639856  50                   push eax
// 00639857  8bce                 mov ecx, esi
// 00639859  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00639861  e86abeffff           call 0x6356d0
// 00639866  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063986a  8bc6                 mov eax, esi
// 0063986c  5e                   pop esi
// 0063986d  64890d00000000       mov dword ptr fs:[0], ecx
// 00639874  83c414               add esp, 0x14
// 00639877  c3                   ret 
// library openrbx-client/App\v8datamodel\Teams.cpp (function ??$create@VTeams@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VTeams@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Teams.cpp
