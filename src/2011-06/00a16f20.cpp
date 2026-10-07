// roc 2011-06 00a16f20  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a16f20
//
// 00a16f20  b92038cb00           mov ecx, 0xcb3820
// 00a16f25  e8c683a4ff           call 0x45f2f0
// 00a16f2a  688018a300           push 0xa31880
// 00a16f2f  e82942dfff           call 0x80b15d
// 00a16f34  59                   pop ecx
// 00a16f35  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
