// roc 2008-06 005c0dd0  unit: RBX::VClickDetector::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c0dd0
//
// 005c0dd0  6aff                 push -1
// 005c0dd2  683b467d00           push 0x7d463b
// 005c0dd7  64a100000000         mov eax, dword ptr fs:[0]
// 005c0ddd  50                   push eax
// 005c0dde  64892500000000       mov dword ptr fs:[0], esp
// 005c0de5  83ec08               sub esp, 8
// 005c0de8  c7042400000000       mov dword ptr [esp], 0
// 005c0def  685c010000           push 0x15c
// 005c0df4  c644240400           mov byte ptr [esp + 4], 0
// 005c0df9  ff15b0288000         call dword ptr [0x8028b0]
// 005c0dff  83c404               add esp, 4
// 005c0e02  89442404             mov dword ptr [esp + 4], eax
// 005c0e06  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c0e0e  85c0                 test eax, eax
// 005c0e10  7409                 je 0x5c0e1b
// 005c0e12  8bc8                 mov ecx, eax
// 005c0e14  e8979f0600           call 0x62adb0
// 005c0e19  eb02                 jmp 0x5c0e1d
// 005c0e1b  33c0                 xor eax, eax
// 005c0e1d  8b0c24               mov ecx, dword ptr [esp]
// 005c0e20  56                   push esi
// 005c0e21  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005c0e25  51                   push ecx
// 005c0e26  50                   push eax
// 005c0e27  8bce                 mov ecx, esi
// 005c0e29  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005c0e31  e8eafeffff           call 0x5c0d20
// 005c0e36  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c0e3a  8bc6                 mov eax, esi
// 005c0e3c  5e                   pop esi
// 005c0e3d  64890d00000000       mov dword ptr fs:[0], ecx
// 005c0e44  83c414               add esp, 0x14
// 005c0e47  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??$create@VShirt@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VShirt@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/CharacterAppearance.cpp
