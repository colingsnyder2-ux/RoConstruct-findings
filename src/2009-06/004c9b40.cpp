// roc 2009-06 004c9b40  unit: RBX::Network::VGuidRegistryService::?$FactoryProduct::Creator  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c9b40
//
// 004c9b40  6aff                 push -1
// 004c9b42  686b088500           push 0x85086b
// 004c9b47  64a100000000         mov eax, dword ptr fs:[0]
// 004c9b4d  50                   push eax
// 004c9b4e  64892500000000       mov dword ptr fs:[0], esp
// 004c9b55  83ec08               sub esp, 8
// 004c9b58  c7042400000000       mov dword ptr [esp], 0
// 004c9b5f  6870010000           push 0x170
// 004c9b64  c644240400           mov byte ptr [esp + 4], 0
// 004c9b69  e8caee2400           call 0x718a38
// 004c9b6e  83c404               add esp, 4
// 004c9b71  89442404             mov dword ptr [esp + 4], eax
// 004c9b75  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004c9b7d  85c0                 test eax, eax
// 004c9b7f  7409                 je 0x4c9b8a
// 004c9b81  8bc8                 mov ecx, eax
// 004c9b83  e8b8ea0000           call 0x4d8640
// 004c9b88  eb02                 jmp 0x4c9b8c
// 004c9b8a  33c0                 xor eax, eax
// 004c9b8c  8b0c24               mov ecx, dword ptr [esp]
// 004c9b8f  56                   push esi
// 004c9b90  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004c9b94  51                   push ecx
// 004c9b95  50                   push eax
// 004c9b96  8bce                 mov ecx, esi
// 004c9b98  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004c9ba0  e8ebfeffff           call 0x4c9a90
// 004c9ba5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c9ba9  8bc6                 mov eax, esi
// 004c9bab  5e                   pop esi
// 004c9bac  64890d00000000       mov dword ptr fs:[0], ecx
// 004c9bb3  83c414               add esp, 0x14
// 004c9bb6  c3                   ret 
// library openrbx-client/App\v8datamodel\Gyro.cpp (function ??$create@VBodyPosition@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VBodyPosition@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Gyro.cpp
