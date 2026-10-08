// from server: 100% by auto
// roc 2007-08 007711c0  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007711c0
//
// 007711c0  b96c1e8c00           mov ecx, 0x8c1e6c
// 007711c5  e8863ed0ff           call 0x475050
// 007711ca  68609b7700           push 0x779b60
// 007711cf  e84ffbebff           call 0x630d23
// 007711d4  59                   pop ecx
// 007711d5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
