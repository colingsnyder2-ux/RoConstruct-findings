// roc 2012-06 00ae9970  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9970
//
// 00ae9970  b9c07ce100           mov ecx, 0xe17cc0
// 00ae9975  e8e67e92ff           call 0x411860
// 00ae997a  683017b100           push 0xb11730
// 00ae997f  e87198e9ff           call 0x9831f5
// 00ae9984  59                   pop ecx
// 00ae9985  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
