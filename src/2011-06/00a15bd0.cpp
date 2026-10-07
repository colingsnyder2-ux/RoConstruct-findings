// roc 2011-06 00a15bd0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15bd0
//
// 00a15bd0  b9e821cb00           mov ecx, 0xcb21e8
// 00a15bd5  e8269f9fff           call 0x40fb00
// 00a15bda  689004a300           push 0xa30490
// 00a15bdf  e87955dfff           call 0x80b15d
// 00a15be4  59                   pop ecx
// 00a15be5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
