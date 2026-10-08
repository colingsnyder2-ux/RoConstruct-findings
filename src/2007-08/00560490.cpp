// roc 2007-08 00560490  unit: RBX::VModelInstance::?$FilteredSelection  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00560490
//
// 00560490  6aff                 push -1
// 00560492  68bb6a7500           push 0x756abb
// 00560497  64a100000000         mov eax, dword ptr fs:[0]
// 0056049d  50                   push eax
// 0056049e  64892500000000       mov dword ptr fs:[0], esp
// 005604a5  83ec08               sub esp, 8
// 005604a8  c7042400000000       mov dword ptr [esp], 0
// 005604af  6804010000           push 0x104
// 005604b4  c644240400           mov byte ptr [esp + 4], 0
// 005604b9  ff15d0e67700         call dword ptr [0x77e6d0]
// 005604bf  83c404               add esp, 4
// 005604c2  89442404             mov dword ptr [esp + 4], eax
// 005604c6  85c0                 test eax, eax
// 005604c8  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005604d0  7409                 je 0x5604db
// 005604d2  8bc8                 mov ecx, eax
// 005604d4  e8b7f1ffff           call 0x55f690
// 005604d9  eb02                 jmp 0x5604dd
// 005604db  33c0                 xor eax, eax
// 005604dd  8b0c24               mov ecx, dword ptr [esp]
// 005604e0  56                   push esi
// 005604e1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005604e5  51                   push ecx
// 005604e6  50                   push eax
// 005604e7  8bce                 mov ecx, esi
// 005604e9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005604f1  e81aecffff           call 0x55f110
// 005604f6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005604fa  8bc6                 mov eax, esi
// 005604fc  5e                   pop esi
// 005604fd  64890d00000000       mov dword ptr fs:[0], ecx
// 00560504  83c414               add esp, 0x14
// 00560507  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??$create@VGuiRoot@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGuiRoot@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
