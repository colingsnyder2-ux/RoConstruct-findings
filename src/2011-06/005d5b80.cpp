// roc 2011-06 005d5b80  unit: RBX::VBodyGyro::?$FactoryProduct::Creator  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d5b80
//
// 005d5b80  6aff                 push -1
// 005d5b82  688b579e00           push 0x9e578b
// 005d5b87  64a100000000         mov eax, dword ptr fs:[0]
// 005d5b8d  50                   push eax
// 005d5b8e  64892500000000       mov dword ptr fs:[0], esp
// 005d5b95  83ec08               sub esp, 8
// 005d5b98  c7042400000000       mov dword ptr [esp], 0
// 005d5b9f  685c010000           push 0x15c
// 005d5ba4  c644240400           mov byte ptr [esp + 4], 0
// 005d5ba9  e8b0442300           call 0x80a05e
// 005d5bae  83c404               add esp, 4
// 005d5bb1  89442404             mov dword ptr [esp + 4], eax
// 005d5bb5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d5bbd  85c0                 test eax, eax
// 005d5bbf  7409                 je 0x5d5bca
// 005d5bc1  8bc8                 mov ecx, eax
// 005d5bc3  e868dc1200           call 0x703830
// 005d5bc8  eb02                 jmp 0x5d5bcc
// 005d5bca  33c0                 xor eax, eax
// 005d5bcc  8b0c24               mov ecx, dword ptr [esp]
// 005d5bcf  56                   push esi
// 005d5bd0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005d5bd4  51                   push ecx
// 005d5bd5  50                   push eax
// 005d5bd6  8bce                 mov ecx, esi
// 005d5bd8  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005d5be0  e8ebfeffff           call 0x5d5ad0
// 005d5be5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d5be9  8bc6                 mov eax, esi
// 005d5beb  5e                   pop esi
// 005d5bec  64890d00000000       mov dword ptr fs:[0], ecx
// 005d5bf3  83c414               add esp, 0x14
// 005d5bf6  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??$create@VShirt@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VShirt@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/CharacterAppearance.cpp
