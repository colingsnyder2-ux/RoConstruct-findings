// roc 2012-06 00ae9890  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9890
//
// 00ae9890  b9dc7ce100           mov ecx, 0xe17cdc
// 00ae9895  e8b66192ff           call 0x40fa50
// 00ae989a  68a017b100           push 0xb117a0
// 00ae989f  e85199e9ff           call 0x9831f5
// 00ae98a4  59                   pop ecx
// 00ae98a5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
