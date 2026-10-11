// roc 2007-03 005d2950  unit: seg_005d0000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d2950
//
// 005d2950  6aff                 push -1
// 005d2952  688b977500           push 0x75978b
// 005d2957  64a100000000         mov eax, dword ptr fs:[0]
// 005d295d  50                   push eax
// 005d295e  64892500000000       mov dword ptr fs:[0], esp
// 005d2965  83ec08               sub esp, 8
// 005d2968  c7042400000000       mov dword ptr [esp], 0
// 005d296f  6824010000           push 0x124
// 005d2974  c644240400           mov byte ptr [esp + 4], 0
// 005d2979  ff153ce97700         call dword ptr [0x77e93c]
// 005d297f  83c404               add esp, 4
// 005d2982  89442404             mov dword ptr [esp + 4], eax
// 005d2986  85c0                 test eax, eax
// 005d2988  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d2990  7409                 je 0x5d299b
// 005d2992  8bc8                 mov ecx, eax
// 005d2994  e887fdffff           call 0x5d2720
// 005d2999  eb02                 jmp 0x5d299d
// 005d299b  33c0                 xor eax, eax
// 005d299d  8b0c24               mov ecx, dword ptr [esp]
// 005d29a0  56                   push esi
// 005d29a1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005d29a5  51                   push ecx
// 005d29a6  50                   push eax
// 005d29a7  8bce                 mov ecx, esi
// 005d29a9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005d29b1  e80adbffff           call 0x5d04c0
// 005d29b6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d29ba  8bc6                 mov eax, esi
// 005d29bc  5e                   pop esi
// 005d29bd  64890d00000000       mov dword ptr fs:[0], ecx
// 005d29c4  83c414               add esp, 0x14
// 005d29c7  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??$create@VShirt@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VShirt@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/CharacterAppearance.cpp
