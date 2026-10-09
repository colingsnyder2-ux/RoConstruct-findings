// roc 2008-06 004b3250  unit: RBX::VRotateV::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b3250
//
// 004b3250  6aff                 push -1
// 004b3252  683b467d00           push 0x7d463b
// 004b3257  64a100000000         mov eax, dword ptr fs:[0]
// 004b325d  50                   push eax
// 004b325e  64892500000000       mov dword ptr fs:[0], esp
// 004b3265  83ec08               sub esp, 8
// 004b3268  c7042400000000       mov dword ptr [esp], 0
// 004b326f  6854010000           push 0x154
// 004b3274  c644240400           mov byte ptr [esp + 4], 0
// 004b3279  ff15b0288000         call dword ptr [0x8028b0]
// 004b327f  83c404               add esp, 4
// 004b3282  89442404             mov dword ptr [esp + 4], eax
// 004b3286  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004b328e  85c0                 test eax, eax
// 004b3290  7409                 je 0x4b329b
// 004b3292  8bc8                 mov ecx, eax
// 004b3294  e8471c1300           call 0x5e4ee0
// 004b3299  eb02                 jmp 0x4b329d
// 004b329b  33c0                 xor eax, eax
// 004b329d  8b0c24               mov ecx, dword ptr [esp]
// 004b32a0  56                   push esi
// 004b32a1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004b32a5  51                   push ecx
// 004b32a6  50                   push eax
// 004b32a7  8bce                 mov ecx, esi
// 004b32a9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004b32b1  e8eafeffff           call 0x4b31a0
// 004b32b6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b32ba  8bc6                 mov eax, esi
// 004b32bc  5e                   pop esi
// 004b32bd  64890d00000000       mov dword ptr fs:[0], ecx
// 004b32c4  83c414               add esp, 0x14
// 004b32c7  c3                   ret 
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$create@VGlue@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGlue@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
