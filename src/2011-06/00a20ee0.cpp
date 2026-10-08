// from server: 100% by auto
// roc 2011-06 00a20ee0  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20ee0
//
// 00a20ee0  b920a7cc00           mov ecx, 0xcca720
// 00a20ee5  e80659bbff           call 0x5d67f0
// 00a20eea  68408aa300           push 0xa38a40
// 00a20eef  e869a2deff           call 0x80b15d
// 00a20ef4  59                   pop ecx
// 00a20ef5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
