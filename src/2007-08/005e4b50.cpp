// roc 2007-08 005e4b50  unit: RBX::VInstance::?$FilteredSelection  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e4b50
//
// 005e4b50  6aff                 push -1
// 005e4b52  68bb6a7500           push 0x756abb
// 005e4b57  64a100000000         mov eax, dword ptr fs:[0]
// 005e4b5d  50                   push eax
// 005e4b5e  64892500000000       mov dword ptr fs:[0], esp
// 005e4b65  83ec08               sub esp, 8
// 005e4b68  c7042400000000       mov dword ptr [esp], 0
// 005e4b6f  6804010000           push 0x104
// 005e4b74  c644240400           mov byte ptr [esp + 4], 0
// 005e4b79  ff15d0e67700         call dword ptr [0x77e6d0]
// 005e4b7f  83c404               add esp, 4
// 005e4b82  89442404             mov dword ptr [esp + 4], eax
// 005e4b86  85c0                 test eax, eax
// 005e4b88  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e4b90  7409                 je 0x5e4b9b
// 005e4b92  8bc8                 mov ecx, eax
// 005e4b94  e897fbffff           call 0x5e4730
// 005e4b99  eb02                 jmp 0x5e4b9d
// 005e4b9b  33c0                 xor eax, eax
// 005e4b9d  8b0c24               mov ecx, dword ptr [esp]
// 005e4ba0  56                   push esi
// 005e4ba1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005e4ba5  51                   push ecx
// 005e4ba6  50                   push eax
// 005e4ba7  8bce                 mov ecx, esi
// 005e4ba9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005e4bb1  e80af8ffff           call 0x5e43c0
// 005e4bb6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e4bba  8bc6                 mov eax, esi
// 005e4bbc  5e                   pop esi
// 005e4bbd  64890d00000000       mov dword ptr fs:[0], ecx
// 005e4bc4  83c414               add esp, 0x14
// 005e4bc7  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??$create@VGuiRoot@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGuiRoot@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
