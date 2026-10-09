// roc 2008-06 00409140  unit: VCRenderSettings::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00409140
//
// 00409140  6aff                 push -1
// 00409142  683b467d00           push 0x7d463b
// 00409147  64a100000000         mov eax, dword ptr fs:[0]
// 0040914d  50                   push eax
// 0040914e  64892500000000       mov dword ptr fs:[0], esp
// 00409155  83ec08               sub esp, 8
// 00409158  c7042400000000       mov dword ptr [esp], 0
// 0040915f  683c010000           push 0x13c
// 00409164  c644240400           mov byte ptr [esp + 4], 0
// 00409169  ff15b0288000         call dword ptr [0x8028b0]
// 0040916f  83c404               add esp, 4
// 00409172  89442404             mov dword ptr [esp + 4], eax
// 00409176  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040917e  85c0                 test eax, eax
// 00409180  7409                 je 0x40918b
// 00409182  8bc8                 mov ecx, eax
// 00409184  e857d41500           call 0x5665e0
// 00409189  eb02                 jmp 0x40918d
// 0040918b  33c0                 xor eax, eax
// 0040918d  8b0c24               mov ecx, dword ptr [esp]
// 00409190  56                   push esi
// 00409191  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00409195  51                   push ecx
// 00409196  50                   push eax
// 00409197  8bce                 mov ecx, esi
// 00409199  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004091a1  e8eafeffff           call 0x409090
// 004091a6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004091aa  8bc6                 mov eax, esi
// 004091ac  5e                   pop esi
// 004091ad  64890d00000000       mov dword ptr fs:[0], ecx
// 004091b4  83c414               add esp, 0x14
// 004091b7  c3                   ret 
// library openrbx-client/App\v8datamodel\Team.cpp (function ??$create@VTeam@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VTeam@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Team.cpp
