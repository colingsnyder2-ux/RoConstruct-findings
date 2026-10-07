// roc 2012-06 00aebb50  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aebb50
//
// 00aebb50  b9f0dce100           mov ecx, 0xe1dcf0
// 00aebb55  e8069ca1ff           call 0x505760
// 00aebb5a  68502cb100           push 0xb12c50
// 00aebb5f  e89176e9ff           call 0x9831f5
// 00aebb64  59                   pop ecx
// 00aebb65  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
