// roc 2008-06 004901e0  unit: RBX::VBodyColors::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004901e0
//
// 004901e0  6aff                 push -1
// 004901e2  683b467d00           push 0x7d463b
// 004901e7  64a100000000         mov eax, dword ptr fs:[0]
// 004901ed  50                   push eax
// 004901ee  64892500000000       mov dword ptr fs:[0], esp
// 004901f5  83ec08               sub esp, 8
// 004901f8  c7042400000000       mov dword ptr [esp], 0
// 004901ff  6838010000           push 0x138
// 00490204  c644240400           mov byte ptr [esp + 4], 0
// 00490209  ff15b0288000         call dword ptr [0x8028b0]
// 0049020f  83c404               add esp, 4
// 00490212  89442404             mov dword ptr [esp + 4], eax
// 00490216  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0049021e  85c0                 test eax, eax
// 00490220  7409                 je 0x49022b
// 00490222  8bc8                 mov ecx, eax
// 00490224  e897561400           call 0x5d58c0
// 00490229  eb02                 jmp 0x49022d
// 0049022b  33c0                 xor eax, eax
// 0049022d  8b0c24               mov ecx, dword ptr [esp]
// 00490230  56                   push esi
// 00490231  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00490235  51                   push ecx
// 00490236  50                   push eax
// 00490237  8bce                 mov ecx, esi
// 00490239  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00490241  e8eafeffff           call 0x490130
// 00490246  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049024a  8bc6                 mov eax, esi
// 0049024c  5e                   pop esi
// 0049024d  64890d00000000       mov dword ptr fs:[0], ecx
// 00490254  83c414               add esp, 0x14
// 00490257  c3                   ret 
// library openrbx-client/App\v8datamodel\Teams.cpp (function ??$create@VTeams@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VTeams@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Teams.cpp
