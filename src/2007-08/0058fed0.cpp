// roc 2007-08 0058fed0  unit: RBX::VRocket::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058fed0
//
// 0058fed0  6aff                 push -1
// 0058fed2  68bb6a7500           push 0x756abb
// 0058fed7  64a100000000         mov eax, dword ptr fs:[0]
// 0058fedd  50                   push eax
// 0058fede  64892500000000       mov dword ptr fs:[0], esp
// 0058fee5  83ec08               sub esp, 8
// 0058fee8  c7042400000000       mov dword ptr [esp], 0
// 0058feef  6814010000           push 0x114
// 0058fef4  c644240400           mov byte ptr [esp + 4], 0
// 0058fef9  ff15d0e67700         call dword ptr [0x77e6d0]
// 0058feff  83c404               add esp, 4
// 0058ff02  89442404             mov dword ptr [esp + 4], eax
// 0058ff06  85c0                 test eax, eax
// 0058ff08  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058ff10  7409                 je 0x58ff1b
// 0058ff12  8bc8                 mov ecx, eax
// 0058ff14  e867010600           call 0x5f0080
// 0058ff19  eb02                 jmp 0x58ff1d
// 0058ff1b  33c0                 xor eax, eax
// 0058ff1d  8b0c24               mov ecx, dword ptr [esp]
// 0058ff20  56                   push esi
// 0058ff21  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0058ff25  51                   push ecx
// 0058ff26  50                   push eax
// 0058ff27  8bce                 mov ecx, esi
// 0058ff29  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0058ff31  e8eafeffff           call 0x58fe20
// 0058ff36  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058ff3a  8bc6                 mov eax, esi
// 0058ff3c  5e                   pop esi
// 0058ff3d  64890d00000000       mov dword ptr fs:[0], ecx
// 0058ff44  83c414               add esp, 0x14
// 0058ff47  c3                   ret 
// library rbxgs/v8datamodel\Seat.cpp (function ??$create@VWeld@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VWeld@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Seat.cpp
