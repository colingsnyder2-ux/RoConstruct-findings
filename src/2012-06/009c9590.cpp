// from server: 100% by auto
// roc 2012-06 009c9590  unit: CXTPToolBar::CControlButtonExpand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9590
//
// 009c9590  b801000000           mov eax, 1
// 009c9595  84058c99e500         test byte ptr [0xe5998c], al
// 009c959b  7510                 jne 0x9c95ad
// 009c959d  09058c99e500         or dword ptr [0xe5998c], eax
// 009c95a3  b9f898e500           mov ecx, 0xe598f8
// 009c95a8  e8b3ffffff           call 0x9c9560
// 009c95ad  b8f898e500           mov eax, 0xe598f8
// 009c95b2  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?box@Shape@G3D@@UAEAAVBox@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
