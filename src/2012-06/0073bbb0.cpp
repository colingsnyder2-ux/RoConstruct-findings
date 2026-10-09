// roc 2012-06 0073bbb0  unit: RBX::VButton::?$FactoryProduct  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0073bbb0
//
// 0073bbb0  6aff                 push -1
// 0073bbb2  68ebd7a900           push 0xa9d7eb
// 0073bbb7  64a100000000         mov eax, dword ptr fs:[0]
// 0073bbbd  50                   push eax
// 0073bbbe  64892500000000       mov dword ptr fs:[0], esp
// 0073bbc5  83ec08               sub esp, 8
// 0073bbc8  c7042400000000       mov dword ptr [esp], 0
// 0073bbcf  6838010000           push 0x138
// 0073bbd4  c644240400           mov byte ptr [esp + 4], 0
// 0073bbd9  e83c652400           call 0x98211a
// 0073bbde  83c404               add esp, 4
// 0073bbe1  89442404             mov dword ptr [esp + 4], eax
// 0073bbe5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0073bbed  85c0                 test eax, eax
// 0073bbef  7409                 je 0x73bbfa
// 0073bbf1  8bc8                 mov ecx, eax
// 0073bbf3  e8e8541700           call 0x8b10e0
// 0073bbf8  eb02                 jmp 0x73bbfc
// 0073bbfa  33c0                 xor eax, eax
// 0073bbfc  8b0c24               mov ecx, dword ptr [esp]
// 0073bbff  56                   push esi
// 0073bc00  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0073bc04  51                   push ecx
// 0073bc05  50                   push eax
// 0073bc06  8bce                 mov ecx, esi
// 0073bc08  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0073bc10  e8dbfdffff           call 0x73b9f0
// 0073bc15  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0073bc19  8bc6                 mov eax, esi
// 0073bc1b  5e                   pop esi
// 0073bc1c  64890d00000000       mov dword ptr fs:[0], ecx
// 0073bc23  83c414               add esp, 0x14
// 0073bc26  c3                   ret 
// library openrbx-client/App\v8datamodel\Teams.cpp (function ??$create@VTeams@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VTeams@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Teams.cpp
