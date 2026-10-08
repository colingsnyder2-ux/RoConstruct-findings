// from server: 100% by auto
// roc 2012-06 00aebb30  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aebb30
//
// 00aebb30  b9ecdce100           mov ecx, 0xe1dcec
// 00aebb35  e85697a1ff           call 0x505290
// 00aebb3a  68602cb100           push 0xb12c60
// 00aebb3f  e8b176e9ff           call 0x9831f5
// 00aebb44  59                   pop ecx
// 00aebb45  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
