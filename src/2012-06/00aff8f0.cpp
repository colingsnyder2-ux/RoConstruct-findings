// from server: 100% by auto
// roc 2012-06 00aff8f0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff8f0
//
// 00aff8f0  b97489e400           mov ecx, 0xe48974
// 00aff8f5  e836b5c7ff           call 0x77ae30
// 00aff8fa  6840b4b100           push 0xb1b440
// 00aff8ff  e8f138e8ff           call 0x9831f5
// 00aff904  59                   pop ecx
// 00aff905  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
