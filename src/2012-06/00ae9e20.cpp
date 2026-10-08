// from server: 100% by auto
// roc 2012-06 00ae9e20  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9e20
//
// 00ae9e20  b94889e100           mov ecx, 0xe18948
// 00ae9e25  e8e66a95ff           call 0x440910
// 00ae9e2a  68b01ab100           push 0xb11ab0
// 00ae9e2f  e8c193e9ff           call 0x9831f5
// 00ae9e34  59                   pop ecx
// 00ae9e35  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
