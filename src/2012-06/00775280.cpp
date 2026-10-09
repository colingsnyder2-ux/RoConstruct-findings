// roc 2012-06 00775280  unit: RBX::VBodyThrust::?$FactoryProduct::Creator  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00775280
//
// 00775280  6aff                 push -1
// 00775282  68ebd7a900           push 0xa9d7eb
// 00775287  64a100000000         mov eax, dword ptr fs:[0]
// 0077528d  50                   push eax
// 0077528e  64892500000000       mov dword ptr fs:[0], esp
// 00775295  83ec08               sub esp, 8
// 00775298  c7042400000000       mov dword ptr [esp], 0
// 0077529f  686c010000           push 0x16c
// 007752a4  c644240400           mov byte ptr [esp + 4], 0
// 007752a9  e86cce2000           call 0x98211a
// 007752ae  83c404               add esp, 4
// 007752b1  89442404             mov dword ptr [esp + 4], eax
// 007752b5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007752bd  85c0                 test eax, eax
// 007752bf  7409                 je 0x7752ca
// 007752c1  8bc8                 mov ecx, eax
// 007752c3  e8a8cf1500           call 0x8d2270
// 007752c8  eb02                 jmp 0x7752cc
// 007752ca  33c0                 xor eax, eax
// 007752cc  8b0c24               mov ecx, dword ptr [esp]
// 007752cf  56                   push esi
// 007752d0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 007752d4  51                   push ecx
// 007752d5  50                   push eax
// 007752d6  8bce                 mov ecx, esi
// 007752d8  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 007752e0  e82bffffff           call 0x775210
// 007752e5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007752e9  8bc6                 mov eax, esi
// 007752eb  5e                   pop esi
// 007752ec  64890d00000000       mov dword ptr fs:[0], ecx
// 007752f3  83c414               add esp, 0x14
// 007752f6  c3                   ret 
// library openrbx-client/App\v8datamodel\Gyro.cpp (function ??$create@VBodyVelocity@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VBodyVelocity@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Gyro.cpp
