// roc 2012-06 00af69e0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af69e0
//
// 00af69e0  b95802e300           mov ecx, 0xe30258
// 00af69e5  e8e6f9bfff           call 0x6f63d0
// 00af69ea  682071b100           push 0xb17120
// 00af69ef  e801c8e8ff           call 0x9831f5
// 00af69f4  59                   pop ecx
// 00af69f5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
