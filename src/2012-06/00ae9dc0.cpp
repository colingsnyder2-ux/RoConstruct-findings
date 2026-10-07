// roc 2012-06 00ae9dc0  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9dc0
//
// 00ae9dc0  b95489e100           mov ecx, 0xe18954
// 00ae9dc5  e8d65c95ff           call 0x43faa0
// 00ae9dca  68e01ab100           push 0xb11ae0
// 00ae9dcf  e82194e9ff           call 0x9831f5
// 00ae9dd4  59                   pop ecx
// 00ae9dd5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
