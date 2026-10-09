// roc 2010-06 004698d0  unit: RBX::VVehicleController::?$FactoryProduct::Creator  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004698d0
//
// 004698d0  6aff                 push -1
// 004698d2  689bbf9800           push 0x98bf9b
// 004698d7  64a100000000         mov eax, dword ptr fs:[0]
// 004698dd  50                   push eax
// 004698de  64892500000000       mov dword ptr fs:[0], esp
// 004698e5  83ec08               sub esp, 8
// 004698e8  c7042400000000       mov dword ptr [esp], 0
// 004698ef  683c010000           push 0x13c
// 004698f4  c644240400           mov byte ptr [esp + 4], 0
// 004698f9  e8a2e03300           call 0x7a79a0
// 004698fe  83c404               add esp, 4
// 00469901  89442404             mov dword ptr [esp + 4], eax
// 00469905  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0046990d  85c0                 test eax, eax
// 0046990f  7409                 je 0x46991a
// 00469911  8bc8                 mov ecx, eax
// 00469913  e8e8711e00           call 0x650b00
// 00469918  eb02                 jmp 0x46991c
// 0046991a  33c0                 xor eax, eax
// 0046991c  8b0c24               mov ecx, dword ptr [esp]
// 0046991f  56                   push esi
// 00469920  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00469924  51                   push ecx
// 00469925  50                   push eax
// 00469926  8bce                 mov ecx, esi
// 00469928  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00469930  e8ebfeffff           call 0x469820
// 00469935  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00469939  8bc6                 mov eax, esi
// 0046993b  5e                   pop esi
// 0046993c  64890d00000000       mov dword ptr fs:[0], ecx
// 00469943  83c414               add esp, 0x14
// 00469946  c3                   ret 
// library openrbx-client/App\v8datamodel\FlagStand.cpp (function ??$create@VFlagStandService@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VFlagStandService@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/FlagStand.cpp
