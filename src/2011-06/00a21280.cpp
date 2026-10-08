// from server: 100% by auto
// roc 2011-06 00a21280  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a21280
//
// 00a21280  b9b0a4cc00           mov ecx, 0xcca4b0
// 00a21285  e8e6abbbff           call 0x5dbe70
// 00a2128a  683081a300           push 0xa38130
// 00a2128f  e8c99edeff           call 0x80b15d
// 00a21294  59                   pop ecx
// 00a21295  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
