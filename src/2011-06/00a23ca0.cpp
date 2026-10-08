// from server: 100% by auto
// roc 2011-06 00a23ca0  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a23ca0
//
// 00a23ca0  b9c0cacc00           mov ecx, 0xcccac0
// 00a23ca5  e89698c1ff           call 0x63d540
// 00a23caa  6880a5a300           push 0xa3a580
// 00a23caf  e8a974deff           call 0x80b15d
// 00a23cb4  59                   pop ecx
// 00a23cb5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
