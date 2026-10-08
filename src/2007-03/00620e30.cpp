// roc 2007-03 00620e30  unit: seg_00620000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00620e30
//
// 00620e30  6aff                 push -1
// 00620e32  68dede7500           push 0x75dede
// 00620e37  64a100000000         mov eax, dword ptr fs:[0]
// 00620e3d  50                   push eax
// 00620e3e  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00620e43  33c4                 xor eax, esp
// 00620e45  50                   push eax
// 00620e46  8d442404             lea eax, [esp + 4]
// 00620e4a  64a300000000         mov dword ptr fs:[0], eax
// 00620e50  b801000000           mov eax, 1
// 00620e55  840544178c00         test byte ptr [0x8c1744], al
// 00620e5b  7525                 jne 0x620e82
// 00620e5d  090544178c00         or dword ptr [0x8c1744], eax
// 00620e63  b938178c00           mov ecx, 0x8c1738
// 00620e68  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00620e70  e82bf1ffff           call 0x61ffa0
// 00620e75  6810c07700           push 0x77c010
// 00620e7a  e834e3ffff           call 0x61f1b3
// 00620e7f  83c404               add esp, 4
// 00620e82  b838178c00           mov eax, 0x8c1738
// 00620e87  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00620e8b  64890d00000000       mov dword ptr fs:[0], ecx
// 00620e92  59                   pop ecx
// 00620e93  83c40c               add esp, 0xc
// 00620e96  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
