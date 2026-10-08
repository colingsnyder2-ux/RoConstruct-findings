// from server: 100% by auto
// roc 2011-06 00a15b90  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15b90
//
// 00a15b90  b9f021cb00           mov ecx, 0xcb21f0
// 00a15b95  e8f6999fff           call 0x40f590
// 00a15b9a  683005a300           push 0xa30530
// 00a15b9f  e8b955dfff           call 0x80b15d
// 00a15ba4  59                   pop ecx
// 00a15ba5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
