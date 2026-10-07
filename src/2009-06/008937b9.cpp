// roc 2009-06 008937b9  unit: seg_00890000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008937b9
//
// 008937b9  b9c82ba500           mov ecx, 0xa52bc8
// 008937be  e80178f8ff           call 0x81afc4
// 008937c3  681fd68900           push 0x89d61f
// 008937c8  e82e63e8ff           call 0x719afb
// 008937cd  59                   pop ecx
// 008937ce  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
