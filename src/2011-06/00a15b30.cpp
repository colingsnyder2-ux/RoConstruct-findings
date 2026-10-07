// roc 2011-06 00a15b30  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15b30
//
// 00a15b30  b9fc21cb00           mov ecx, 0xcb21fc
// 00a15b35  e836929fff           call 0x40ed70
// 00a15b3a  682006a300           push 0xa30620
// 00a15b3f  e81956dfff           call 0x80b15d
// 00a15b44  59                   pop ecx
// 00a15b45  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
