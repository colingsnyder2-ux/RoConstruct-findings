// from server: 100% by auto
// roc 2012-06 00aeb960  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeb960
//
// 00aeb960  b998c2e100           mov ecx, 0xe1c298
// 00aeb965  e806219dff           call 0x4bda70
// 00aeb96a  68e029b100           push 0xb129e0
// 00aeb96f  e88178e9ff           call 0x9831f5
// 00aeb974  59                   pop ecx
// 00aeb975  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
