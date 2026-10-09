// roc 2010-06 005bbe50  unit: RBX::VBodyForce::?$FactoryProduct::Creator  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005bbe50
//
// 005bbe50  6aff                 push -1
// 005bbe52  689bbf9800           push 0x98bf9b
// 005bbe57  64a100000000         mov eax, dword ptr fs:[0]
// 005bbe5d  50                   push eax
// 005bbe5e  64892500000000       mov dword ptr fs:[0], esp
// 005bbe65  83ec08               sub esp, 8
// 005bbe68  c7042400000000       mov dword ptr [esp], 0
// 005bbe6f  6870010000           push 0x170
// 005bbe74  c644240400           mov byte ptr [esp + 4], 0
// 005bbe79  e822bb1e00           call 0x7a79a0
// 005bbe7e  83c404               add esp, 4
// 005bbe81  89442404             mov dword ptr [esp + 4], eax
// 005bbe85  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bbe8d  85c0                 test eax, eax
// 005bbe8f  7409                 je 0x5bbe9a
// 005bbe91  8bc8                 mov ecx, eax
// 005bbe93  e838cb0f00           call 0x6b89d0
// 005bbe98  eb02                 jmp 0x5bbe9c
// 005bbe9a  33c0                 xor eax, eax
// 005bbe9c  8b0c24               mov ecx, dword ptr [esp]
// 005bbe9f  56                   push esi
// 005bbea0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005bbea4  51                   push ecx
// 005bbea5  50                   push eax
// 005bbea6  8bce                 mov ecx, esi
// 005bbea8  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005bbeb0  e8ebfeffff           call 0x5bbda0
// 005bbeb5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005bbeb9  8bc6                 mov eax, esi
// 005bbebb  5e                   pop esi
// 005bbebc  64890d00000000       mov dword ptr fs:[0], ecx
// 005bbec3  83c414               add esp, 0x14
// 005bbec6  c3                   ret 
// library openrbx-client/App\v8datamodel\Gyro.cpp (function ??$create@VBodyPosition@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VBodyPosition@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Gyro.cpp
