// roc 2007-03 005d5390  unit: seg_005d0000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d5390
//
// 005d5390  6aff                 push -1
// 005d5392  688b977500           push 0x75978b
// 005d5397  64a100000000         mov eax, dword ptr fs:[0]
// 005d539d  50                   push eax
// 005d539e  64892500000000       mov dword ptr fs:[0], esp
// 005d53a5  83ec08               sub esp, 8
// 005d53a8  c7042400000000       mov dword ptr [esp], 0
// 005d53af  680c010000           push 0x10c
// 005d53b4  c644240400           mov byte ptr [esp + 4], 0
// 005d53b9  ff153ce97700         call dword ptr [0x77e93c]
// 005d53bf  83c404               add esp, 4
// 005d53c2  89442404             mov dword ptr [esp + 4], eax
// 005d53c6  85c0                 test eax, eax
// 005d53c8  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d53d0  7409                 je 0x5d53db
// 005d53d2  8bc8                 mov ecx, eax
// 005d53d4  e867800300           call 0x60d440
// 005d53d9  eb02                 jmp 0x5d53dd
// 005d53db  33c0                 xor eax, eax
// 005d53dd  8b0c24               mov ecx, dword ptr [esp]
// 005d53e0  56                   push esi
// 005d53e1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005d53e5  51                   push ecx
// 005d53e6  50                   push eax
// 005d53e7  8bce                 mov ecx, esi
// 005d53e9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005d53f1  e81af4ffff           call 0x5d4810
// 005d53f6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d53fa  8bc6                 mov eax, esi
// 005d53fc  5e                   pop esi
// 005d53fd  64890d00000000       mov dword ptr fs:[0], ecx
// 005d5404  83c414               add esp, 0x14
// 005d5407  c3                   ret 
// library openrbx-client/App\v8datamodel\ForceField.cpp (function ??$create@VForceField@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VForceField@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/ForceField.cpp
