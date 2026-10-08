// roc 2007-08 0058f4f0  unit: RBX::VBodyForce::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058f4f0
//
// 0058f4f0  6aff                 push -1
// 0058f4f2  68bb6a7500           push 0x756abb
// 0058f4f7  64a100000000         mov eax, dword ptr fs:[0]
// 0058f4fd  50                   push eax
// 0058f4fe  64892500000000       mov dword ptr fs:[0], esp
// 0058f505  83ec08               sub esp, 8
// 0058f508  c7042400000000       mov dword ptr [esp], 0
// 0058f50f  6814010000           push 0x114
// 0058f514  c644240400           mov byte ptr [esp + 4], 0
// 0058f519  ff15d0e67700         call dword ptr [0x77e6d0]
// 0058f51f  83c404               add esp, 4
// 0058f522  89442404             mov dword ptr [esp + 4], eax
// 0058f526  85c0                 test eax, eax
// 0058f528  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058f530  7409                 je 0x58f53b
// 0058f532  8bc8                 mov ecx, eax
// 0058f534  e867f90500           call 0x5eeea0
// 0058f539  eb02                 jmp 0x58f53d
// 0058f53b  33c0                 xor eax, eax
// 0058f53d  8b0c24               mov ecx, dword ptr [esp]
// 0058f540  56                   push esi
// 0058f541  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0058f545  51                   push ecx
// 0058f546  50                   push eax
// 0058f547  8bce                 mov ecx, esi
// 0058f549  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0058f551  e8eafeffff           call 0x58f440
// 0058f556  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058f55a  8bc6                 mov eax, esi
// 0058f55c  5e                   pop esi
// 0058f55d  64890d00000000       mov dword ptr fs:[0], ecx
// 0058f564  83c414               add esp, 0x14
// 0058f567  c3                   ret 
// library rbxgs/v8datamodel\Seat.cpp (function ??$create@VWeld@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VWeld@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Seat.cpp
