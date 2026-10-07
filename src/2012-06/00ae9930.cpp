// roc 2012-06 00ae9930  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9930
//
// 00ae9930  b9c87ce100           mov ecx, 0xe17cc8
// 00ae9935  e8b67692ff           call 0x410ff0
// 00ae993a  685017b100           push 0xb11750
// 00ae993f  e8b198e9ff           call 0x9831f5
// 00ae9944  59                   pop ecx
// 00ae9945  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
