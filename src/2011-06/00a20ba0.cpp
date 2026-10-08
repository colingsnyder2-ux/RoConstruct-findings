// from server: 100% by auto
// roc 2011-06 00a20ba0  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20ba0
//
// 00a20ba0  b968a8cc00           mov ecx, 0xcca868
// 00a20ba5  e83613bbff           call 0x5d1ee0
// 00a20baa  686092a300           push 0xa39260
// 00a20baf  e8a9a5deff           call 0x80b15d
// 00a20bb4  59                   pop ecx
// 00a20bb5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
