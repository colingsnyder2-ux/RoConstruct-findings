// roc 2012-06 00ae9a10  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9a10
//
// 00ae9a10  b91881e100           mov ecx, 0xe18118
// 00ae9a15  e8065993ff           call 0x41f320
// 00ae9a1a  683018b100           push 0xb11830
// 00ae9a1f  e8d197e9ff           call 0x9831f5
// 00ae9a24  59                   pop ecx
// 00ae9a25  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
