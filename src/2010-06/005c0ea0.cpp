// roc 2010-06 005c0ea0  unit: RBX::VGuiTextButton::?$FactoryProduct::Creator  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c0ea0
//
// 005c0ea0  6aff                 push -1
// 005c0ea2  689bbf9800           push 0x98bf9b
// 005c0ea7  64a100000000         mov eax, dword ptr fs:[0]
// 005c0ead  50                   push eax
// 005c0eae  64892500000000       mov dword ptr fs:[0], esp
// 005c0eb5  83ec08               sub esp, 8
// 005c0eb8  c7042400000000       mov dword ptr [esp], 0
// 005c0ebf  68d8010000           push 0x1d8
// 005c0ec4  c644240400           mov byte ptr [esp + 4], 0
// 005c0ec9  e8d26a1e00           call 0x7a79a0
// 005c0ece  83c404               add esp, 4
// 005c0ed1  89442404             mov dword ptr [esp + 4], eax
// 005c0ed5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c0edd  85c0                 test eax, eax
// 005c0edf  7409                 je 0x5c0eea
// 005c0ee1  8bc8                 mov ecx, eax
// 005c0ee3  e868051200           call 0x6e1450
// 005c0ee8  eb02                 jmp 0x5c0eec
// 005c0eea  33c0                 xor eax, eax
// 005c0eec  8b0c24               mov ecx, dword ptr [esp]
// 005c0eef  56                   push esi
// 005c0ef0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005c0ef4  51                   push ecx
// 005c0ef5  50                   push eax
// 005c0ef6  8bce                 mov ecx, esi
// 005c0ef8  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005c0f00  e8ebfeffff           call 0x5c0df0
// 005c0f05  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c0f09  8bc6                 mov eax, esi
// 005c0f0b  5e                   pop esi
// 005c0f0c  64890d00000000       mov dword ptr fs:[0], ecx
// 005c0f13  83c414               add esp, 0x14
// 005c0f16  c3                   ret 
// library openrbx-client/App\v8datamodel\Accoutrement.cpp (function ??$create@VAccoutrement@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VAccoutrement@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Accoutrement.cpp
