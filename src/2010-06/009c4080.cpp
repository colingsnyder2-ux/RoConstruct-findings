// from server: 100% by auto
// roc 2010-06 009c4080  unit: seg_009c0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c4080
//
// 009c4080  b99818c000           mov ecx, 0xc01898
// 009c4085  e866c5a8ff           call 0x4505f0
// 009c408a  6890ba9d00           push 0x9dba90
// 009c408f  e8cf49deff           call 0x7a8a63
// 009c4094  59                   pop ecx
// 009c4095  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
