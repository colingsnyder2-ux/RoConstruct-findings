// from server: 100% by auto
// roc 2012-06 00ae9b90  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9b90
//
// 00ae9b90  b91487e100           mov ecx, 0xe18714
// 00ae9b95  e8663d94ff           call 0x42d900
// 00ae9b9a  686019b100           push 0xb11960
// 00ae9b9f  e85196e9ff           call 0x9831f5
// 00ae9ba4  59                   pop ecx
// 00ae9ba5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
