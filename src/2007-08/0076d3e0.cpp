// roc 2007-08 0076d3e0  unit: seg_00760000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d3e0
//
// 0076d3e0  b978c08b00           mov ecx, 0x8bc078
// 0076d3e5  e8c65cccff           call 0x4330b0
// 0076d3ea  68207e7700           push 0x777e20
// 0076d3ef  e82f39ecff           call 0x630d23
// 0076d3f4  59                   pop ecx
// 0076d3f5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
