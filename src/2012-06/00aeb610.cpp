// from server: 100% by auto
// roc 2012-06 00aeb610  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeb610
//
// 00aeb610  b93ca9e100           mov ecx, 0xe1a93c
// 00aeb615  e876c99aff           call 0x497f90
// 00aeb61a  682028b100           push 0xb12820
// 00aeb61f  e8d17be9ff           call 0x9831f5
// 00aeb624  59                   pop ecx
// 00aeb625  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
