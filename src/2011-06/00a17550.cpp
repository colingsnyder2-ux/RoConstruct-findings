// from server: 100% by auto
// roc 2011-06 00a17550  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a17550
//
// 00a17550  b92052cb00           mov ecx, 0xcb5220
// 00a17555  e8a65ca8ff           call 0x49d200
// 00a1755a  68101fa300           push 0xa31f10
// 00a1755f  e8f93bdfff           call 0x80b15d
// 00a17564  59                   pop ecx
// 00a17565  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
