// from server: 98% by colin
// roc 2007-08 005f72c0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f72c0
//
// 005f72c0  6aff                 push -1
// 005f72c2  68bb6a7500           push 0x756abb
// 005f72c7  64a100000000         mov eax, dword ptr fs:[0]
// 005f72cd  50                   push eax
// 005f72ce  64892500000000       mov dword ptr fs:[0], esp
// 005f72d5  83ec08               sub esp, 8
// 005f72d8  c7042400000000       mov dword ptr [esp], 0
// 005f72df  6818010000           push 0xf4
// 005f72e4  c644240400           mov byte ptr [esp + 4], 0
// 005f72e9  ff15d0e67700         call dword ptr [0x77e6d0]
// 005f72ef  83c404               add esp, 4
// 005f72f2  89442404             mov dword ptr [esp + 4], eax
// 005f72f6  85c0                 test eax, eax
// 005f72f8  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f7300  7409                 je 0x5f738b
// 005f7302  8bc8                 mov ecx, eax
// 005f7304  e857f6ffff           call 0x5f6ac0
// 005f7309  eb02                 jmp 0x5f738d
// 005f730b  33c0                 xor eax, eax
// 005f730d  8b0c24               mov ecx, dword ptr [esp]
// 005f7310  56                   push esi
// 005f7311  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005f7315  51                   push ecx
// 005f7316  50                   push eax
// 005f7317  8bce                 mov ecx, esi
// 005f7319  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005f7321  e8caa1ffff           call 0x5f15a0
// 005f7326  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f732a  8bc6                 mov eax, esi
// 005f732c  5e                   pop esi
// 005f732d  64890d00000000       mov dword ptr fs:[0], ecx
// 005f7334  83c414               add esp, 0x14
// 005f7337  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??$create@VHole@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VHole@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp