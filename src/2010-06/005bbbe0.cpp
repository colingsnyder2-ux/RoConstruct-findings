// roc 2010-06 005bbbe0  unit: RBX::VBodyGyro::?$FactoryProduct::Creator  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005bbbe0
//
// 005bbbe0  6aff                 push -1
// 005bbbe2  689bbf9800           push 0x98bf9b
// 005bbbe7  64a100000000         mov eax, dword ptr fs:[0]
// 005bbbed  50                   push eax
// 005bbbee  64892500000000       mov dword ptr fs:[0], esp
// 005bbbf5  83ec08               sub esp, 8
// 005bbbf8  c7042400000000       mov dword ptr [esp], 0
// 005bbbff  6864010000           push 0x164
// 005bbc04  c644240400           mov byte ptr [esp + 4], 0
// 005bbc09  e892bd1e00           call 0x7a79a0
// 005bbc0e  83c404               add esp, 4
// 005bbc11  89442404             mov dword ptr [esp + 4], eax
// 005bbc15  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bbc1d  85c0                 test eax, eax
// 005bbc1f  7409                 je 0x5bbc2a
// 005bbc21  8bc8                 mov ecx, eax
// 005bbc23  e868cc0f00           call 0x6b8890
// 005bbc28  eb02                 jmp 0x5bbc2c
// 005bbc2a  33c0                 xor eax, eax
// 005bbc2c  8b0c24               mov ecx, dword ptr [esp]
// 005bbc2f  56                   push esi
// 005bbc30  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005bbc34  51                   push ecx
// 005bbc35  50                   push eax
// 005bbc36  8bce                 mov ecx, esi
// 005bbc38  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005bbc40  e8ebfeffff           call 0x5bbb30
// 005bbc45  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005bbc49  8bc6                 mov eax, esi
// 005bbc4b  5e                   pop esi
// 005bbc4c  64890d00000000       mov dword ptr fs:[0], ecx
// 005bbc53  83c414               add esp, 0x14
// 005bbc56  c3                   ret 
// library openrbx-client/App\v8datamodel\Decal.cpp (function ??$create@VTexture@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VTexture@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Decal.cpp
