// roc 2008-06 005c1c70  unit: RBX::VBodyGyro::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c1c70
//
// 005c1c70  6aff                 push -1
// 005c1c72  683b467d00           push 0x7d463b
// 005c1c77  64a100000000         mov eax, dword ptr fs:[0]
// 005c1c7d  50                   push eax
// 005c1c7e  64892500000000       mov dword ptr fs:[0], esp
// 005c1c85  83ec08               sub esp, 8
// 005c1c88  c7042400000000       mov dword ptr [esp], 0
// 005c1c8f  6854010000           push 0x154
// 005c1c94  c644240400           mov byte ptr [esp + 4], 0
// 005c1c99  ff15b0288000         call dword ptr [0x8028b0]
// 005c1c9f  83c404               add esp, 4
// 005c1ca2  89442404             mov dword ptr [esp + 4], eax
// 005c1ca6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c1cae  85c0                 test eax, eax
// 005c1cb0  7409                 je 0x5c1cbb
// 005c1cb2  8bc8                 mov ecx, eax
// 005c1cb4  e837080700           call 0x6324f0
// 005c1cb9  eb02                 jmp 0x5c1cbd
// 005c1cbb  33c0                 xor eax, eax
// 005c1cbd  8b0c24               mov ecx, dword ptr [esp]
// 005c1cc0  56                   push esi
// 005c1cc1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005c1cc5  51                   push ecx
// 005c1cc6  50                   push eax
// 005c1cc7  8bce                 mov ecx, esi
// 005c1cc9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005c1cd1  e8eafeffff           call 0x5c1bc0
// 005c1cd6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c1cda  8bc6                 mov eax, esi
// 005c1cdc  5e                   pop esi
// 005c1cdd  64890d00000000       mov dword ptr fs:[0], ecx
// 005c1ce4  83c414               add esp, 0x14
// 005c1ce7  c3                   ret 
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$create@VGlue@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGlue@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
