// roc 2011-06 004096b0  unit: RBX::VTeam::?$FactoryProduct::Creator  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004096b0
//
// 004096b0  6aff                 push -1
// 004096b2  688b579e00           push 0x9e578b
// 004096b7  64a100000000         mov eax, dword ptr fs:[0]
// 004096bd  50                   push eax
// 004096be  64892500000000       mov dword ptr fs:[0], esp
// 004096c5  83ec08               sub esp, 8
// 004096c8  c7042400000000       mov dword ptr [esp], 0
// 004096cf  6860010000           push 0x160
// 004096d4  c644240400           mov byte ptr [esp + 4], 0
// 004096d9  e880094000           call 0x80a05e
// 004096de  83c404               add esp, 4
// 004096e1  89442404             mov dword ptr [esp + 4], eax
// 004096e5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004096ed  85c0                 test eax, eax
// 004096ef  7409                 je 0x4096fa
// 004096f1  8bc8                 mov ecx, eax
// 004096f3  e8f8441a00           call 0x5adbf0
// 004096f8  eb02                 jmp 0x4096fc
// 004096fa  33c0                 xor eax, eax
// 004096fc  8b0c24               mov ecx, dword ptr [esp]
// 004096ff  56                   push esi
// 00409700  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00409704  51                   push ecx
// 00409705  50                   push eax
// 00409706  8bce                 mov ecx, esi
// 00409708  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00409710  e8ebfeffff           call 0x409600
// 00409715  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00409719  8bc6                 mov eax, esi
// 0040971b  5e                   pop esi
// 0040971c  64890d00000000       mov dword ptr fs:[0], ecx
// 00409723  83c414               add esp, 0x14
// 00409726  c3                   ret 
// library rbxgs/v8datamodel\ScriptMouseCommand.cpp (function ??$create@VMouse@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VMouse@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ScriptMouseCommand.cpp
