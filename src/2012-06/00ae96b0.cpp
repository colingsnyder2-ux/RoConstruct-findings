// from server: 100% by auto
// roc 2012-06 00ae96b0  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae96b0
//
// 00ae96b0  b9b064e100           mov ecx, 0xe164b0
// 00ae96b5  e8a60292ff           call 0x409960
// 00ae96ba  68f014b100           push 0xb114f0
// 00ae96bf  e8319be9ff           call 0x9831f5
// 00ae96c4  59                   pop ecx
// 00ae96c5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
