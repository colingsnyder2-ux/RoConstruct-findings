// roc 2011-06 00a15b10  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15b10
//
// 00a15b10  b90022cb00           mov ecx, 0xcb2200
// 00a15b15  e8868e9fff           call 0x40e9a0
// 00a15b1a  687006a300           push 0xa30670
// 00a15b1f  e83956dfff           call 0x80b15d
// 00a15b24  59                   pop ecx
// 00a15b25  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
