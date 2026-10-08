// from server: 100% by auto
// roc 2012-06 00ae9da0  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9da0
//
// 00ae9da0  b95889e100           mov ecx, 0xe18958
// 00ae9da5  e8265895ff           call 0x43f5d0
// 00ae9daa  68f01ab100           push 0xb11af0
// 00ae9daf  e84194e9ff           call 0x9831f5
// 00ae9db4  59                   pop ecx
// 00ae9db5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
