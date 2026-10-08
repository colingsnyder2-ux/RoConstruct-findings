// roc 2007-08 005d4350  unit: RBX::Mouse  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d4350
//
// 005d4350  6aff                 push -1
// 005d4352  68bb6a7500           push 0x756abb
// 005d4357  64a100000000         mov eax, dword ptr fs:[0]
// 005d435d  50                   push eax
// 005d435e  64892500000000       mov dword ptr fs:[0], esp
// 005d4365  83ec08               sub esp, 8
// 005d4368  c7042400000000       mov dword ptr [esp], 0
// 005d436f  681c010000           push 0x11c
// 005d4374  c644240400           mov byte ptr [esp + 4], 0
// 005d4379  ff15d0e67700         call dword ptr [0x77e6d0]
// 005d437f  83c404               add esp, 4
// 005d4382  89442404             mov dword ptr [esp + 4], eax
// 005d4386  85c0                 test eax, eax
// 005d4388  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d4390  7409                 je 0x5d439b
// 005d4392  8bc8                 mov ecx, eax
// 005d4394  e8a7fdffff           call 0x5d4140
// 005d4399  eb02                 jmp 0x5d439d
// 005d439b  33c0                 xor eax, eax
// 005d439d  8b0c24               mov ecx, dword ptr [esp]
// 005d43a0  56                   push esi
// 005d43a1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005d43a5  51                   push ecx
// 005d43a6  50                   push eax
// 005d43a7  8bce                 mov ecx, esi
// 005d43a9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005d43b1  e89ae1ffff           call 0x5d2550
// 005d43b6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d43ba  8bc6                 mov eax, esi
// 005d43bc  5e                   pop esi
// 005d43bd  64890d00000000       mov dword ptr fs:[0], ecx
// 005d43c4  83c414               add esp, 0x14
// 005d43c7  c3                   ret 
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$create@VGlue@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGlue@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
