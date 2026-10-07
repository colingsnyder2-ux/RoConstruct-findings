// roc 2010-06 007a6480  unit: seg_007a0000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a6480
//
// 007a6480  b801000000           mov eax, 1
// 007a6485  84050451c200         test byte ptr [0xc25104], al
// 007a648b  751d                 jne 0x7a64aa
// 007a648d  09050451c200         or dword ptr [0xc25104], eax
// 007a6493  b9a850c200           mov ecx, 0xc250a8
// 007a6498  e873f3ffff           call 0x7a5810
// 007a649d  68e08e9e00           push 0x9e8ee0
// 007a64a2  e8bc250000           call 0x7a8a63
// 007a64a7  83c404               add esp, 4
// 007a64aa  b8a850c200           mov eax, 0xc250a8
// 007a64af  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
