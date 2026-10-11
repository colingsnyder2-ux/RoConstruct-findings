// roc 2007-03 005617e0  unit: seg_00560000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005617e0
//
// 005617e0  6aff                 push -1
// 005617e2  688b977500           push 0x75978b
// 005617e7  64a100000000         mov eax, dword ptr fs:[0]
// 005617ed  50                   push eax
// 005617ee  64892500000000       mov dword ptr fs:[0], esp
// 005617f5  83ec08               sub esp, 8
// 005617f8  c7042400000000       mov dword ptr [esp], 0
// 005617ff  680c010000           push 0x10c
// 00561804  c644240400           mov byte ptr [esp + 4], 0
// 00561809  ff153ce97700         call dword ptr [0x77e93c]
// 0056180f  83c404               add esp, 4
// 00561812  89442404             mov dword ptr [esp + 4], eax
// 00561816  85c0                 test eax, eax
// 00561818  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00561820  7409                 je 0x56182b
// 00561822  8bc8                 mov ecx, eax
// 00561824  e837f7ffff           call 0x560f60
// 00561829  eb02                 jmp 0x56182d
// 0056182b  33c0                 xor eax, eax
// 0056182d  8b0c24               mov ecx, dword ptr [esp]
// 00561830  56                   push esi
// 00561831  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00561835  51                   push ecx
// 00561836  50                   push eax
// 00561837  8bce                 mov ecx, esi
// 00561839  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00561841  e8baefffff           call 0x560800
// 00561846  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056184a  8bc6                 mov eax, esi
// 0056184c  5e                   pop esi
// 0056184d  64890d00000000       mov dword ptr fs:[0], ecx
// 00561854  83c414               add esp, 0x14
// 00561857  c3                   ret 
// library openrbx-client/App\v8datamodel\ForceField.cpp (function ??$create@VForceField@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VForceField@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/ForceField.cpp
