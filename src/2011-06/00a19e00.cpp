// roc 2011-06 00a19e00  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19e00
//
// 00a19e00  b94085cb00           mov ecx, 0xcb8540
// 00a19e05  e8a63aaeff           call 0x4fd8b0
// 00a19e0a  68e03ea300           push 0xa33ee0
// 00a19e0f  e84913dfff           call 0x80b15d
// 00a19e14  59                   pop ecx
// 00a19e15  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
