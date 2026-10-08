// from server: 100% by auto
// roc 2012-06 00aebb10  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aebb10
//
// 00aebb10  b9d8dce100           mov ecx, 0xe1dcd8
// 00aebb15  e8a692a1ff           call 0x504dc0
// 00aebb1a  68702cb100           push 0xb12c70
// 00aebb1f  e8d176e9ff           call 0x9831f5
// 00aebb24  59                   pop ecx
// 00aebb25  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
