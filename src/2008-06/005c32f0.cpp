// roc 2008-06 005c32f0  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c32f0
//
// 005c32f0  6aff                 push -1
// 005c32f2  683b467d00           push 0x7d463b
// 005c32f7  64a100000000         mov eax, dword ptr fs:[0]
// 005c32fd  50                   push eax
// 005c32fe  64892500000000       mov dword ptr fs:[0], esp
// 005c3305  83ec08               sub esp, 8
// 005c3308  c7042400000000       mov dword ptr [esp], 0
// 005c330f  6848010000           push 0x148
// 005c3314  c644240400           mov byte ptr [esp + 4], 0
// 005c3319  ff15b0288000         call dword ptr [0x8028b0]
// 005c331f  83c404               add esp, 4
// 005c3322  89442404             mov dword ptr [esp + 4], eax
// 005c3326  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c332e  85c0                 test eax, eax
// 005c3330  7409                 je 0x5c333b
// 005c3332  8bc8                 mov ecx, eax
// 005c3334  e857a70700           call 0x63da90
// 005c3339  eb02                 jmp 0x5c333d
// 005c333b  33c0                 xor eax, eax
// 005c333d  8b0c24               mov ecx, dword ptr [esp]
// 005c3340  56                   push esi
// 005c3341  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005c3345  51                   push ecx
// 005c3346  50                   push eax
// 005c3347  8bce                 mov ecx, esi
// 005c3349  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005c3351  e8eafeffff           call 0x5c3240
// 005c3356  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c335a  8bc6                 mov eax, esi
// 005c335c  5e                   pop esi
// 005c335d  64890d00000000       mov dword ptr fs:[0], ecx
// 005c3364  83c414               add esp, 0x14
// 005c3367  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??$create@VBodyColors@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VBodyColors@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/CharacterAppearance.cpp
