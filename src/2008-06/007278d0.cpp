// roc 2008-06 007278d0  unit: CXTPRibbonBar  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007278d0
//
// 007278d0  b801000000           mov eax, 1
// 007278d5  8405c4ed9700         test byte ptr [0x97edc4], al
// 007278db  751d                 jne 0x7278fa
// 007278dd  0905c4ed9700         or dword ptr [0x97edc4], eax
// 007278e3  b9b4ed9700           mov ecx, 0x97edb4
// 007278e8  e833ffffff           call 0x727820
// 007278ed  68d0188000           push 0x8018d0
// 007278f2  e8b89ef7ff           call 0x6a17af
// 007278f7  83c404               add esp, 4
// 007278fa  b8b4ed9700           mov eax, 0x97edb4
// 007278ff  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
