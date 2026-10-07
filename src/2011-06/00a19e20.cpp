// roc 2011-06 00a19e20  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19e20
//
// 00a19e20  b94c85cb00           mov ecx, 0xcb854c
// 00a19e25  e8563daeff           call 0x4fdb80
// 00a19e2a  68903ea300           push 0xa33e90
// 00a19e2f  e82913dfff           call 0x80b15d
// 00a19e34  59                   pop ecx
// 00a19e35  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
