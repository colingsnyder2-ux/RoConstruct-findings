// from server: 100% by auto
// roc 2011-06 00a21060  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a21060
//
// 00a21060  b978a8cc00           mov ecx, 0xcca878
// 00a21065  e8267cbbff           call 0x5d8c90
// 00a2106a  688086a300           push 0xa38680
// 00a2106f  e8e9a0deff           call 0x80b15d
// 00a21074  59                   pop ecx
// 00a21075  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
