// from server: 99% by colin
// roc 2007-08 00560510  unit: RBX::VModelInstance::?$FilteredSelection  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00560510
//
// 00560510  6aff                 push -1
// 00560512  68bb6a7500           push 0x756abb
// 00560517  64a100000000         mov eax, dword ptr fs:[0]
// 0056051d  50                   push eax
// 0056051e  64892500000000       mov dword ptr fs:[0], esp
// 00560525  83ec08               sub esp, 8
// 00560528  c7042400000000       mov dword ptr [esp], 0
// 0056052f  6804010000           push 0x108
// 00560534  c644240400           mov byte ptr [esp + 4], 0
// 00560539  ff15d0e67700         call dword ptr [0x77e6d0]
// 0056053f  83c404               add esp, 4
// 00560542  89442404             mov dword ptr [esp + 4], eax
// 00560546  85c0                 test eax, eax
// 00560548  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00560550  7409                 je 0x56131b
// 00560552  8bc8                 mov ecx, eax
// 00560554  e8d7f2ffff           call 0x5dde20
// 00560559  eb02                 jmp 0x56131d
// 0056055b  33c0                 xor eax, eax
// 0056055d  8b0c24               mov ecx, dword ptr [esp]
// 00560560  56                   push esi
// 00560561  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00560565  51                   push ecx
// 00560566  50                   push eax
// 00560567  8bce                 mov ecx, esi
// 00560569  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00560571  e84aecffff           call 0x561220
// 00560576  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056057a  8bc6                 mov eax, esi
// 0056057c  5e                   pop esi
// 0056057d  64890d00000000       mov dword ptr fs:[0], ecx
// 00560584  83c414               add esp, 0x14
// 00560587  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??$create@VGuiRoot@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGuiRoot@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp