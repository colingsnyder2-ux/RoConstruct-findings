// from server: 100% by auto
// roc 2007-08 00770050  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770050
//
// 00770050  b9e0fa8b00           mov ecx, 0x8bfae0
// 00770055  e80664d1ff           call 0x486460
// 0077005a  68a0917700           push 0x7791a0
// 0077005f  e8bf0cecff           call 0x630d23
// 00770064  59                   pop ecx
// 00770065  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
