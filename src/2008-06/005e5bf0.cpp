// roc 2008-06 005e5bf0  unit: RBX::JointsService  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e5bf0
//
// 005e5bf0  6aff                 push -1
// 005e5bf2  6803687d00           push 0x7d6803
// 005e5bf7  64a100000000         mov eax, dword ptr fs:[0]
// 005e5bfd  50                   push eax
// 005e5bfe  64892500000000       mov dword ptr fs:[0], esp
// 005e5c05  83ec08               sub esp, 8
// 005e5c08  56                   push esi
// 005e5c09  8bf1                 mov esi, ecx
// 005e5c0b  57                   push edi
// 005e5c0c  89742408             mov dword ptr [esp + 8], esi
// 005e5c10  e88bfa0500           call 0x6456a0
// 005e5c15  68d0000000           push 0xd0
// 005e5c1a  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005e5c22  c70664f78300         mov dword ptr [esi], 0x83f764
// 005e5c28  e8f3ac0b00           call 0x6a0920
// 005e5c2d  8bf8                 mov edi, eax
// 005e5c2f  83c404               add esp, 4
// 005e5c32  897c240c             mov dword ptr [esp + 0xc], edi
// 005e5c36  d9ee                 fldz 
// 005e5c38  c644241801           mov byte ptr [esp + 0x18], 1
// 005e5c3d  85ff                 test edi, edi
// 005e5c3f  7419                 je 0x5e5c5a
// 005e5c41  8bcf                 mov ecx, edi
// 005e5c43  ddd8                 fstp st(0)
// 005e5c45  e8d6e00200           call 0x613d20
// 005e5c4a  d9ee                 fldz 
// 005e5c4c  d997cc000000         fst dword ptr [edi + 0xcc]
// 005e5c52  c7075cf78300         mov dword ptr [edi], 0x83f75c
// 005e5c58  eb02                 jmp 0x5e5c5c
// 005e5c5a  33ff                 xor edi, edi
// 005e5c5c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005e5c60  d9968c000000         fst dword ptr [esi + 0x8c]
// 005e5c66  89be88000000         mov dword ptr [esi + 0x88], edi
// 005e5c6c  d99690000000         fst dword ptr [esi + 0x90]
// 005e5c72  d99e94000000         fstp dword ptr [esi + 0x94]
// 005e5c78  5f                   pop edi
// 005e5c79  8bc6                 mov eax, esi
// 005e5c7b  5e                   pop esi
// 005e5c7c  64890d00000000       mov dword ptr fs:[0], ecx
// 005e5c83  83c414               add esp, 0x14
// 005e5c86  c3                   ret 
// library openrbx-client/App\v8world\MotorJoint.cpp (function ??0MotorJoint@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/MotorJoint.cpp
