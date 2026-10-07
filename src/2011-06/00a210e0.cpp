// roc 2011-06 00a210e0  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a210e0
//
// 00a210e0  b990a5cc00           mov ecx, 0xcca590
// 00a210e5  e8e686bbff           call 0x5d97d0
// 00a210ea  684085a300           push 0xa38540
// 00a210ef  e869a0deff           call 0x80b15d
// 00a210f4  59                   pop ecx
// 00a210f5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
