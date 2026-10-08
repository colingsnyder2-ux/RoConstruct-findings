// from server: 100% by auto
// roc 2012-06 00aff6f0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff6f0
//
// 00aff6f0  b9c886e400           mov ecx, 0xe486c8
// 00aff6f5  e8865dc7ff           call 0x775480
// 00aff6fa  6840b5b100           push 0xb1b540
// 00aff6ff  e8f13ae8ff           call 0x9831f5
// 00aff704  59                   pop ecx
// 00aff705  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
