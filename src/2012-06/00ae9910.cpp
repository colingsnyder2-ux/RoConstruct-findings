// roc 2012-06 00ae9910  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9910
//
// 00ae9910  b9cc7ce100           mov ecx, 0xe17ccc
// 00ae9915  e8f67292ff           call 0x410c10
// 00ae991a  686017b100           push 0xb11760
// 00ae991f  e8d198e9ff           call 0x9831f5
// 00ae9924  59                   pop ecx
// 00ae9925  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
