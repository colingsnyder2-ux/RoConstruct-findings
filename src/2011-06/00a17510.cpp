// from server: 100% by auto
// roc 2011-06 00a17510  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a17510
//
// 00a17510  b92852cb00           mov ecx, 0xcb5228
// 00a17515  e84657a8ff           call 0x49cc60
// 00a1751a  68b01fa300           push 0xa31fb0
// 00a1751f  e8393cdfff           call 0x80b15d
// 00a17524  59                   pop ecx
// 00a17525  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
