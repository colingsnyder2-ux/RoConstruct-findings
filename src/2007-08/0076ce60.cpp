// roc 2007-08 0076ce60  unit: seg_00760000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076ce60
//
// 0076ce60  b93cb98b00           mov ecx, 0x8bb93c
// 0076ce65  e84662ccff           call 0x4330b0
// 0076ce6a  6870797700           push 0x777970
// 0076ce6f  e8af3eecff           call 0x630d23
// 0076ce74  59                   pop ecx
// 0076ce75  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
