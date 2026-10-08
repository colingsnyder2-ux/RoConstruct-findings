// from server: 100% by auto
// roc 2011-06 00a20c00  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20c00
//
// 00a20c00  b954a4cc00           mov ecx, 0xcca454
// 00a20c05  e8361bbbff           call 0x5d2740
// 00a20c0a  687091a300           push 0xa39170
// 00a20c0f  e849a5deff           call 0x80b15d
// 00a20c14  59                   pop ecx
// 00a20c15  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
