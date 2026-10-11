// roc 2008-06 00411f50  unit: ChatEnter  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00411f50
//
// 00411f50  6aff                 push -1
// 00411f52  683b467d00           push 0x7d463b
// 00411f57  64a100000000         mov eax, dword ptr fs:[0]
// 00411f5d  50                   push eax
// 00411f5e  64892500000000       mov dword ptr fs:[0], esp
// 00411f65  83ec08               sub esp, 8
// 00411f68  c7042400000000       mov dword ptr [esp], 0
// 00411f6f  6848010000           push 0x148
// 00411f74  c644240400           mov byte ptr [esp + 4], 0
// 00411f79  ff15b0288000         call dword ptr [0x8028b0]
// 00411f7f  83c404               add esp, 4
// 00411f82  89442404             mov dword ptr [esp + 4], eax
// 00411f86  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00411f8e  85c0                 test eax, eax
// 00411f90  7409                 je 0x411f9b
// 00411f92  8bc8                 mov ecx, eax
// 00411f94  e887f7ffff           call 0x411720
// 00411f99  eb02                 jmp 0x411f9d
// 00411f9b  33c0                 xor eax, eax
// 00411f9d  8b0c24               mov ecx, dword ptr [esp]
// 00411fa0  56                   push esi
// 00411fa1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00411fa5  51                   push ecx
// 00411fa6  50                   push eax
// 00411fa7  8bce                 mov ecx, esi
// 00411fa9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00411fb1  e8dafdffff           call 0x411d90
// 00411fb6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00411fba  8bc6                 mov eax, esi
// 00411fbc  5e                   pop esi
// 00411fbd  64890d00000000       mov dword ptr fs:[0], ecx
// 00411fc4  83c414               add esp, 0x14
// 00411fc7  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??$create@VBodyColors@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VBodyColors@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/CharacterAppearance.cpp
