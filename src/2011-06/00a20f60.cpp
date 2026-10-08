// from server: 100% by auto
// roc 2011-06 00a20f60  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20f60
//
// 00a20f60  b958a7cc00           mov ecx, 0xcca758
// 00a20f65  e8c663bbff           call 0x5d7330
// 00a20f6a  680089a300           push 0xa38900
// 00a20f6f  e8e9a1deff           call 0x80b15d
// 00a20f74  59                   pop ecx
// 00a20f75  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
