// roc 2011-06 00a15b50  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15b50
//
// 00a15b50  b9f821cb00           mov ecx, 0xcb21f8
// 00a15b55  e8d6949fff           call 0x40f030
// 00a15b5a  68d005a300           push 0xa305d0
// 00a15b5f  e8f955dfff           call 0x80b15d
// 00a15b64  59                   pop ecx
// 00a15b65  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
