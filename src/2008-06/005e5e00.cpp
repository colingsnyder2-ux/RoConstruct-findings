// roc 2008-06 005e5e00  unit: RBX::MotorJoint  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e5e00
//
// 005e5e00  6aff                 push -1
// 005e5e02  6818687d00           push 0x7d6818
// 005e5e07  64a100000000         mov eax, dword ptr fs:[0]
// 005e5e0d  50                   push eax
// 005e5e0e  64892500000000       mov dword ptr fs:[0], esp
// 005e5e15  51                   push ecx
// 005e5e16  56                   push esi
// 005e5e17  8bf1                 mov esi, ecx
// 005e5e19  57                   push edi
// 005e5e1a  89742408             mov dword ptr [esp + 8], esi
// 005e5e1e  c70664f78300         mov dword ptr [esi], 0x83f764
// 005e5e24  8bbe88000000         mov edi, dword ptr [esi + 0x88]
// 005e5e2a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005e5e32  85ff                 test edi, edi
// 005e5e34  7410                 je 0x5e5e46
// 005e5e36  8bcf                 mov ecx, edi
// 005e5e38  e8d375e9ff           call 0x47d410
// 005e5e3d  57                   push edi
// 005e5e3e  e837a80b00           call 0x6a067a
// 005e5e43  83c404               add esp, 4
// 005e5e46  8bce                 mov ecx, esi
// 005e5e48  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005e5e50  e83bf60500           call 0x645490
// 005e5e55  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e5e59  5f                   pop edi
// 005e5e5a  5e                   pop esi
// 005e5e5b  64890d00000000       mov dword ptr fs:[0], ecx
// 005e5e62  83c410               add esp, 0x10
// 005e5e65  c3                   ret 
// library rbxgs/v8world\MotorJoint.cpp (function ??1MotorJoint@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/MotorJoint.cpp
