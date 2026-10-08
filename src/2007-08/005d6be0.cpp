// roc 2007-08 005d6be0  unit: RBX::UnifiedImageWidget  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d6be0
//
// 005d6be0  6aff                 push -1
// 005d6be2  68bb6a7500           push 0x756abb
// 005d6be7  64a100000000         mov eax, dword ptr fs:[0]
// 005d6bed  50                   push eax
// 005d6bee  64892500000000       mov dword ptr fs:[0], esp
// 005d6bf5  83ec08               sub esp, 8
// 005d6bf8  c7042400000000       mov dword ptr [esp], 0
// 005d6bff  6804010000           push 0x104
// 005d6c04  c644240400           mov byte ptr [esp + 4], 0
// 005d6c09  ff15d0e67700         call dword ptr [0x77e6d0]
// 005d6c0f  83c404               add esp, 4
// 005d6c12  89442404             mov dword ptr [esp + 4], eax
// 005d6c16  85c0                 test eax, eax
// 005d6c18  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d6c20  7409                 je 0x5d6c2b
// 005d6c22  8bc8                 mov ecx, eax
// 005d6c24  e8a7bd0400           call 0x6229d0
// 005d6c29  eb02                 jmp 0x5d6c2d
// 005d6c2b  33c0                 xor eax, eax
// 005d6c2d  8b0c24               mov ecx, dword ptr [esp]
// 005d6c30  56                   push esi
// 005d6c31  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005d6c35  51                   push ecx
// 005d6c36  50                   push eax
// 005d6c37  8bce                 mov ecx, esi
// 005d6c39  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005d6c41  e85af4ffff           call 0x5d60a0
// 005d6c46  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d6c4a  8bc6                 mov eax, esi
// 005d6c4c  5e                   pop esi
// 005d6c4d  64890d00000000       mov dword ptr fs:[0], ecx
// 005d6c54  83c414               add esp, 0x14
// 005d6c57  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??$create@VGuiRoot@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGuiRoot@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
