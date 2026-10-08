// from server: 100% by auto
// roc 2011-06 00a211e0  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a211e0
//
// 00a211e0  b9a4a4cc00           mov ecx, 0xcca4a4
// 00a211e5  e8869cbbff           call 0x5dae70
// 00a211ea  68c082a300           push 0xa382c0
// 00a211ef  e8699fdeff           call 0x80b15d
// 00a211f4  59                   pop ecx
// 00a211f5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
