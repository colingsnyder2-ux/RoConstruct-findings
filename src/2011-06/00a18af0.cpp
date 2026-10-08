// from server: 100% by auto
// roc 2011-06 00a18af0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a18af0
//
// 00a18af0  b9206ecb00           mov ecx, 0xcb6e20
// 00a18af5  e8a67fabff           call 0x4d0aa0
// 00a18afa  683031a300           push 0xa33130
// 00a18aff  e85926dfff           call 0x80b15d
// 00a18b04  59                   pop ecx
// 00a18b05  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
