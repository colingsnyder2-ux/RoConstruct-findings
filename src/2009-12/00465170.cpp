// roc 2009-12 00465170  unit: RBX::VVehicleController::?$FactoryProduct::Creator  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00465170
//
// 00465170  6aff                 push -1
// 00465172  684bad9300           push 0x93ad4b
// 00465177  64a100000000         mov eax, dword ptr fs:[0]
// 0046517d  50                   push eax
// 0046517e  64892500000000       mov dword ptr fs:[0], esp
// 00465185  83ec08               sub esp, 8
// 00465188  c7042400000000       mov dword ptr [esp], 0
// 0046518f  683c010000           push 0x13c
// 00465194  c644240400           mov byte ptr [esp + 4], 0
// 00465199  e8c2e63800           call 0x7f3860
// 0046519e  83c404               add esp, 4
// 004651a1  89442404             mov dword ptr [esp + 4], eax
// 004651a5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004651ad  85c0                 test eax, eax
// 004651af  7409                 je 0x4651ba
// 004651b1  8bc8                 mov ecx, eax
// 004651b3  e868602700           call 0x6db220
// 004651b8  eb02                 jmp 0x4651bc
// 004651ba  33c0                 xor eax, eax
// 004651bc  8b0c24               mov ecx, dword ptr [esp]
// 004651bf  56                   push esi
// 004651c0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004651c4  51                   push ecx
// 004651c5  50                   push eax
// 004651c6  8bce                 mov ecx, esi
// 004651c8  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004651d0  e8ebfeffff           call 0x4650c0
// 004651d5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004651d9  8bc6                 mov eax, esi
// 004651db  5e                   pop esi
// 004651dc  64890d00000000       mov dword ptr fs:[0], ecx
// 004651e3  83c414               add esp, 0x14
// 004651e6  c3                   ret 
// library openrbx-client/App\v8datamodel\FlagStand.cpp (function ??$create@VFlagStandService@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VFlagStandService@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/FlagStand.cpp
