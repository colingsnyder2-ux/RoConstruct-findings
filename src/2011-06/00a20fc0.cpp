// from server: 100% by auto
// roc 2011-06 00a20fc0  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20fc0
//
// 00a20fc0  b9e8a3cc00           mov ecx, 0xcca3e8
// 00a20fc5  e8b66ebbff           call 0x5d7e80
// 00a20fca  681088a300           push 0xa38810
// 00a20fcf  e889a1deff           call 0x80b15d
// 00a20fd4  59                   pop ecx
// 00a20fd5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
