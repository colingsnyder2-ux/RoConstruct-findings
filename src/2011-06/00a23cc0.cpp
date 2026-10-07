// roc 2011-06 00a23cc0  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a23cc0
//
// 00a23cc0  b95ccacc00           mov ecx, 0xccca5c
// 00a23cc5  e87698c1ff           call 0x63d540
// 00a23cca  68b0a5a300           push 0xa3a5b0
// 00a23ccf  e88974deff           call 0x80b15d
// 00a23cd4  59                   pop ecx
// 00a23cd5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
