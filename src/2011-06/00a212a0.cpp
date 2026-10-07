// roc 2011-06 00a212a0  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a212a0
//
// 00a212a0  b9c8a5cc00           mov ecx, 0xcca5c8
// 00a212a5  e846afbbff           call 0x5dc1f0
// 00a212aa  68e080a300           push 0xa380e0
// 00a212af  e8a99edeff           call 0x80b15d
// 00a212b4  59                   pop ecx
// 00a212b5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
