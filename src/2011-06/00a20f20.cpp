// from server: 100% by auto
// roc 2011-06 00a20f20  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20f20
//
// 00a20f20  b94ca8cc00           mov ecx, 0xcca84c
// 00a20f25  e8665ebbff           call 0x5d6d90
// 00a20f2a  68a089a300           push 0xa389a0
// 00a20f2f  e829a2deff           call 0x80b15d
// 00a20f34  59                   pop ecx
// 00a20f35  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
