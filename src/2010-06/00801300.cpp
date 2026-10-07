// roc 2010-06 00801300  unit: CXTPCompatibleDC  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00801300
//
// 00801300  b801000000           mov eax, 1
// 00801305  8405945dc200         test byte ptr [0xc25d94], al
// 0080130b  751d                 jne 0x80132a
// 0080130d  0905945dc200         or dword ptr [0xc25d94], eax
// 00801313  b9805dc200           mov ecx, 0xc25d80
// 00801318  e8c3cfffff           call 0x7fe2e0
// 0080131d  68b0909e00           push 0x9e90b0
// 00801322  e83c77faff           call 0x7a8a63
// 00801327  83c404               add esp, 4
// 0080132a  b8805dc200           mov eax, 0xc25d80
// 0080132f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
