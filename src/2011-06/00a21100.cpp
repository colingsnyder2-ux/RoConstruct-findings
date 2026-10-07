// roc 2011-06 00a21100  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a21100
//
// 00a21100  b944a4cc00           mov ecx, 0xcca444
// 00a21105  e8c689bbff           call 0x5d9ad0
// 00a2110a  68f084a300           push 0xa384f0
// 00a2110f  e849a0deff           call 0x80b15d
// 00a21114  59                   pop ecx
// 00a21115  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
