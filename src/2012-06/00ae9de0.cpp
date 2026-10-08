// from server: 100% by auto
// roc 2012-06 00ae9de0  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9de0
//
// 00ae9de0  b95089e100           mov ecx, 0xe18950
// 00ae9de5  e8866195ff           call 0x43ff70
// 00ae9dea  68d01ab100           push 0xb11ad0
// 00ae9def  e80194e9ff           call 0x9831f5
// 00ae9df4  59                   pop ecx
// 00ae9df5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
