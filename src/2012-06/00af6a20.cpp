// from server: 100% by auto
// roc 2012-06 00af6a20  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af6a20
//
// 00af6a20  b95002e300           mov ecx, 0xe30250
// 00af6a25  e84603c0ff           call 0x6f6d70
// 00af6a2a  680071b100           push 0xb17100
// 00af6a2f  e8c1c7e8ff           call 0x9831f5
// 00af6a34  59                   pop ecx
// 00af6a35  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
