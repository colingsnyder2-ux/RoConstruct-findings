// roc 2008-06 00490450  unit: RBX::VSkin::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00490450
//
// 00490450  6aff                 push -1
// 00490452  683b467d00           push 0x7d463b
// 00490457  64a100000000         mov eax, dword ptr fs:[0]
// 0049045d  50                   push eax
// 0049045e  64892500000000       mov dword ptr fs:[0], esp
// 00490465  83ec08               sub esp, 8
// 00490468  c7042400000000       mov dword ptr [esp], 0
// 0049046f  6838010000           push 0x138
// 00490474  c644240400           mov byte ptr [esp + 4], 0
// 00490479  ff15b0288000         call dword ptr [0x8028b0]
// 0049047f  83c404               add esp, 4
// 00490482  89442404             mov dword ptr [esp + 4], eax
// 00490486  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0049048e  85c0                 test eax, eax
// 00490490  7409                 je 0x49049b
// 00490492  8bc8                 mov ecx, eax
// 00490494  e8b7631400           call 0x5d6850
// 00490499  eb02                 jmp 0x49049d
// 0049049b  33c0                 xor eax, eax
// 0049049d  8b0c24               mov ecx, dword ptr [esp]
// 004904a0  56                   push esi
// 004904a1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004904a5  51                   push ecx
// 004904a6  50                   push eax
// 004904a7  8bce                 mov ecx, esi
// 004904a9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004904b1  e8eafeffff           call 0x4903a0
// 004904b6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004904ba  8bc6                 mov eax, esi
// 004904bc  5e                   pop esi
// 004904bd  64890d00000000       mov dword ptr fs:[0], ecx
// 004904c4  83c414               add esp, 0x14
// 004904c7  c3                   ret 
// library openrbx-client/App\v8datamodel\Teams.cpp (function ??$create@VTeams@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VTeams@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/Teams.cpp
