// roc 2011-06 00a212e0  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a212e0
//
// 00a212e0  b950a8cc00           mov ecx, 0xcca850
// 00a212e5  e816b5bbff           call 0x5dc800
// 00a212ea  684080a300           push 0xa38040
// 00a212ef  e8699edeff           call 0x80b15d
// 00a212f4  59                   pop ecx
// 00a212f5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
