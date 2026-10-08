// roc 2007-08 005617b0  unit: RBX::VHole::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005617b0
//
// 005617b0  6aff                 push -1
// 005617b2  68bb6a7500           push 0x756abb
// 005617b7  64a100000000         mov eax, dword ptr fs:[0]
// 005617bd  50                   push eax
// 005617be  64892500000000       mov dword ptr fs:[0], esp
// 005617c5  83ec08               sub esp, 8
// 005617c8  c7042400000000       mov dword ptr [esp], 0
// 005617cf  6818010000           push 0x118
// 005617d4  c644240400           mov byte ptr [esp + 4], 0
// 005617d9  ff15d0e67700         call dword ptr [0x77e6d0]
// 005617df  83c404               add esp, 4
// 005617e2  89442404             mov dword ptr [esp + 4], eax
// 005617e6  85c0                 test eax, eax
// 005617e8  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005617f0  7409                 je 0x5617fb
// 005617f2  8bc8                 mov ecx, eax
// 005617f4  e8c7b90700           call 0x5dd1c0
// 005617f9  eb02                 jmp 0x5617fd
// 005617fb  33c0                 xor eax, eax
// 005617fd  8b0c24               mov ecx, dword ptr [esp]
// 00561800  56                   push esi
// 00561801  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00561805  51                   push ecx
// 00561806  50                   push eax
// 00561807  8bce                 mov ecx, esi
// 00561809  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00561811  e8eafeffff           call 0x561700
// 00561816  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056181a  8bc6                 mov eax, esi
// 0056181c  5e                   pop esi
// 0056181d  64890d00000000       mov dword ptr fs:[0], ecx
// 00561824  83c414               add esp, 0x14
// 00561827  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??$create@VHole@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VHole@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
