// roc 2009-06 00760950  unit: CXTPToolBar::CControlButtonExpand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00760950
//
// 00760950  b801000000           mov eax, 1
// 00760955  8405ac1fa500         test byte ptr [0xa51fac], al
// 0076095b  7510                 jne 0x76096d
// 0076095d  0905ac1fa500         or dword ptr [0xa51fac], eax
// 00760963  b9181fa500           mov ecx, 0xa51f18
// 00760968  e8b3ffffff           call 0x760920
// 0076096d  b8181fa500           mov eax, 0xa51f18
// 00760972  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?box@Shape@G3D@@UAEAAVBox@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
