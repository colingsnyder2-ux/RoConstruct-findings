// roc 2007-03 00561760  unit: seg_00560000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00561760
//
// 00561760  6aff                 push -1
// 00561762  688b977500           push 0x75978b
// 00561767  64a100000000         mov eax, dword ptr fs:[0]
// 0056176d  50                   push eax
// 0056176e  64892500000000       mov dword ptr fs:[0], esp
// 00561775  83ec08               sub esp, 8
// 00561778  c7042400000000       mov dword ptr [esp], 0
// 0056177f  680c010000           push 0x10c
// 00561784  c644240400           mov byte ptr [esp + 4], 0
// 00561789  ff153ce97700         call dword ptr [0x77e93c]
// 0056178f  83c404               add esp, 4
// 00561792  89442404             mov dword ptr [esp + 4], eax
// 00561796  85c0                 test eax, eax
// 00561798  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005617a0  7409                 je 0x5617ab
// 005617a2  8bc8                 mov ecx, eax
// 005617a4  e847f6ffff           call 0x560df0
// 005617a9  eb02                 jmp 0x5617ad
// 005617ab  33c0                 xor eax, eax
// 005617ad  8b0c24               mov ecx, dword ptr [esp]
// 005617b0  56                   push esi
// 005617b1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005617b5  51                   push ecx
// 005617b6  50                   push eax
// 005617b7  8bce                 mov ecx, esi
// 005617b9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005617c1  e88aefffff           call 0x560750
// 005617c6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005617ca  8bc6                 mov eax, esi
// 005617cc  5e                   pop esi
// 005617cd  64890d00000000       mov dword ptr fs:[0], ecx
// 005617d4  83c414               add esp, 0x14
// 005617d7  c3                   ret 
// library openrbx-client/App\v8datamodel\ForceField.cpp (function ??$create@VForceField@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VForceField@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/ForceField.cpp
