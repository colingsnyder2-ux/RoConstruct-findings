// roc 2011-06 00a17060  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a17060
//
// 00a17060  b90c3dcb00           mov ecx, 0xcb3d0c
// 00a17065  e80614a5ff           call 0x468470
// 00a1706a  68e019a300           push 0xa319e0
// 00a1706f  e8e940dfff           call 0x80b15d
// 00a17074  59                   pop ecx
// 00a17075  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
