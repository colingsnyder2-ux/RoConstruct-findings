// from server: 100% by auto
// roc 2012-06 00aff6b0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff6b0
//
// 00aff6b0  b99888e400           mov ecx, 0xe48898
// 00aff6b5  e82654c7ff           call 0x774ae0
// 00aff6ba  6860b5b100           push 0xb1b560
// 00aff6bf  e8313be8ff           call 0x9831f5
// 00aff6c4  59                   pop ecx
// 00aff6c5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
