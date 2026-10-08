// from server: 100% by auto
// roc 2007-08 00671140  unit: CXTPToolBar::CControlButtonExpand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671140
//
// 00671140  b801000000           mov eax, 1
// 00671145  84050c8d8c00         test byte ptr [0x8c8d0c], al
// 0067114b  7510                 jne 0x67115d
// 0067114d  09050c8d8c00         or dword ptr [0x8c8d0c], eax
// 00671153  b9788c8c00           mov ecx, 0x8c8c78
// 00671158  e8b3ffffff           call 0x671110
// 0067115d  b8788c8c00           mov eax, 0x8c8c78
// 00671162  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?box@Shape@G3D@@UAEAAVBox@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
