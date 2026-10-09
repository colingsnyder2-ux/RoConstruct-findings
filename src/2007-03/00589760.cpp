// roc 2007-03 00589760  unit: seg_00580000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00589760
//
// 00589760  6aff                 push -1
// 00589762  688b977500           push 0x75978b
// 00589767  64a100000000         mov eax, dword ptr fs:[0]
// 0058976d  50                   push eax
// 0058976e  64892500000000       mov dword ptr fs:[0], esp
// 00589775  83ec08               sub esp, 8
// 00589778  c7042400000000       mov dword ptr [esp], 0
// 0058977f  681c010000           push 0x11c
// 00589784  c644240400           mov byte ptr [esp + 4], 0
// 00589789  ff153ce97700         call dword ptr [0x77e93c]
// 0058978f  83c404               add esp, 4
// 00589792  89442404             mov dword ptr [esp + 4], eax
// 00589796  85c0                 test eax, eax
// 00589798  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005897a0  7409                 je 0x5897ab
// 005897a2  8bc8                 mov ecx, eax
// 005897a4  e8e74b0500           call 0x5de390
// 005897a9  eb02                 jmp 0x5897ad
// 005897ab  33c0                 xor eax, eax
// 005897ad  8b0c24               mov ecx, dword ptr [esp]
// 005897b0  56                   push esi
// 005897b1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005897b5  51                   push ecx
// 005897b6  50                   push eax
// 005897b7  8bce                 mov ecx, esi
// 005897b9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005897c1  e8eafeffff           call 0x5896b0
// 005897c6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005897ca  8bc6                 mov eax, esi
// 005897cc  5e                   pop esi
// 005897cd  64890d00000000       mov dword ptr fs:[0], ecx
// 005897d4  83c414               add esp, 0x14
// 005897d7  c3                   ret 
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$create@VGlue@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGlue@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
