// roc 2007-08 00776fd6  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00776fd6
//
// 00776fd6  b924988c00           mov ecx, 0x8c9824
// 00776fdb  e83fe0faff           call 0x72501f
// 00776fe0  684acd7700           push 0x77cd4a
// 00776fe5  e8399debff           call 0x630d23
// 00776fea  59                   pop ecx
// 00776feb  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
