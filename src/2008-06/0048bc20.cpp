// roc 2008-06 0048bc20  unit: G3D::VVector2int16::?$TypedPropertyDescriptor  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048bc20
//
// 0048bc20  6aff                 push -1
// 0048bc22  683b467d00           push 0x7d463b
// 0048bc27  64a100000000         mov eax, dword ptr fs:[0]
// 0048bc2d  50                   push eax
// 0048bc2e  64892500000000       mov dword ptr fs:[0], esp
// 0048bc35  83ec08               sub esp, 8
// 0048bc38  c7042400000000       mov dword ptr [esp], 0
// 0048bc3f  686c010000           push 0x16c
// 0048bc44  c644240400           mov byte ptr [esp + 4], 0
// 0048bc49  ff15b0288000         call dword ptr [0x8028b0]
// 0048bc4f  83c404               add esp, 4
// 0048bc52  89442404             mov dword ptr [esp + 4], eax
// 0048bc56  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0048bc5e  85c0                 test eax, eax
// 0048bc60  7409                 je 0x48bc6b
// 0048bc62  8bc8                 mov ecx, eax
// 0048bc64  e8175e1400           call 0x5d1a80
// 0048bc69  eb02                 jmp 0x48bc6d
// 0048bc6b  33c0                 xor eax, eax
// 0048bc6d  8b0c24               mov ecx, dword ptr [esp]
// 0048bc70  56                   push esi
// 0048bc71  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0048bc75  51                   push ecx
// 0048bc76  50                   push eax
// 0048bc77  8bce                 mov ecx, esi
// 0048bc79  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0048bc81  e85af8ffff           call 0x48b4e0
// 0048bc86  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048bc8a  8bc6                 mov eax, esi
// 0048bc8c  5e                   pop esi
// 0048bc8d  64890d00000000       mov dword ptr fs:[0], ecx
// 0048bc94  83c414               add esp, 0x14
// 0048bc97  c3                   ret 
// library openrbx-client/App\v8datamodel\Gyro.cpp (function ??$create@VBodyVelocity@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VBodyVelocity@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Gyro.cpp
