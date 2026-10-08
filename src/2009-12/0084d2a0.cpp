// roc 2009-12 0084d2a0  unit: CXTPCompatibleDC  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084d2a0
//
// 0084d2a0  b801000000           mov eax, 1
// 0084d2a5  840564b6b900         test byte ptr [0xb9b664], al
// 0084d2ab  751d                 jne 0x84d2ca
// 0084d2ad  090564b6b900         or dword ptr [0xb9b664], eax
// 0084d2b3  b950b6b900           mov ecx, 0xb9b650
// 0084d2b8  e883cfffff           call 0x84a240
// 0084d2bd  68b0a69800           push 0x98a6b0
// 0084d2c2  e86276faff           call 0x7f4929
// 0084d2c7  83c404               add esp, 4
// 0084d2ca  b850b6b900           mov eax, 0xb9b650
// 0084d2cf  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
