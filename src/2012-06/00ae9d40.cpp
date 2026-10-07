// roc 2012-06 00ae9d40  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9d40
//
// 00ae9d40  b96489e100           mov ecx, 0xe18964
// 00ae9d45  e8964b95ff           call 0x43e8e0
// 00ae9d4a  68201bb100           push 0xb11b20
// 00ae9d4f  e8a194e9ff           call 0x9831f5
// 00ae9d54  59                   pop ecx
// 00ae9d55  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
