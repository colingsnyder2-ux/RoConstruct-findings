// roc 2007-08 00710f20  unit: CXTPOffice2007Image  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00710f20
//
// 00710f20  6aff                 push -1
// 00710f22  68dea57600           push 0x76a5de
// 00710f27  64a100000000         mov eax, dword ptr fs:[0]
// 00710f2d  50                   push eax
// 00710f2e  a188518b00           mov eax, dword ptr [0x8b5188]
// 00710f33  33c4                 xor eax, esp
// 00710f35  50                   push eax
// 00710f36  8d442404             lea eax, [esp + 4]
// 00710f3a  64a300000000         mov dword ptr fs:[0], eax
// 00710f40  b801000000           mov eax, 1
// 00710f45  8405a0978c00         test byte ptr [0x8c97a0], al
// 00710f4b  7525                 jne 0x710f72
// 00710f4d  0905a0978c00         or dword ptr [0x8c97a0], eax
// 00710f53  b958978c00           mov ecx, 0x8c9758
// 00710f58  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00710f60  e89bf7ffff           call 0x710700
// 00710f65  6810cd7700           push 0x77cd10
// 00710f6a  e8b4fdf1ff           call 0x630d23
// 00710f6f  83c404               add esp, 4
// 00710f72  b858978c00           mov eax, 0x8c9758
// 00710f77  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00710f7b  64890d00000000       mov dword ptr fs:[0], ecx
// 00710f82  59                   pop ecx
// 00710f83  83c40c               add esp, 0xc
// 00710f86  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
