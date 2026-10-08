// from server: 100% by auto
// roc 2007-08 00776fec  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00776fec
//
// 00776fec  b960988c00           mov ecx, 0x8c9860
// 00776ff1  e803e0faff           call 0x724ff9
// 00776ff6  6854cd7700           push 0x77cd54
// 00776ffb  e8239debff           call 0x630d23
// 00777000  59                   pop ecx
// 00777001  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
