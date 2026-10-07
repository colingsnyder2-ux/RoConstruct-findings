// roc 2010-06 007f08d0  unit: CXTPAccessible  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f08d0
//
// 007f08d0  6aff                 push -1
// 007f08d2  682e259b00           push 0x9b252e
// 007f08d7  64a100000000         mov eax, dword ptr fs:[0]
// 007f08dd  50                   push eax
// 007f08de  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007f08e3  33c4                 xor eax, esp
// 007f08e5  50                   push eax
// 007f08e6  8d442404             lea eax, [esp + 4]
// 007f08ea  64a300000000         mov dword ptr fs:[0], eax
// 007f08f0  b801000000           mov eax, 1
// 007f08f5  8405745bc200         test byte ptr [0xc25b74], al
// 007f08fb  7525                 jne 0x7f0922
// 007f08fd  0905745bc200         or dword ptr [0xc25b74], eax
// 007f0903  b93c5bc200           mov ecx, 0xc25b3c
// 007f0908  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 007f0910  e8dbfdffff           call 0x7f06f0
// 007f0915  6880909e00           push 0x9e9080
// 007f091a  e84481fbff           call 0x7a8a63
// 007f091f  83c404               add esp, 4
// 007f0922  b83c5bc200           mov eax, 0xc25b3c
// 007f0927  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007f092b  64890d00000000       mov dword ptr fs:[0], ecx
// 007f0932  59                   pop ecx
// 007f0933  83c40c               add esp, 0xc
// 007f0936  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
