// from server: 100% by auto
// roc 2009-06 008937cf  unit: seg_00890000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008937cf
//
// 008937cf  b9002ca500           mov ecx, 0xa52c00
// 008937d4  e86f78f8ff           call 0x81b048
// 008937d9  6829d68900           push 0x89d629
// 008937de  e81863e8ff           call 0x719afb
// 008937e3  59                   pop ecx
// 008937e4  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
