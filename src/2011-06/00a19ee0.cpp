// roc 2011-06 00a19ee0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19ee0
//
// 00a19ee0  b9b083cb00           mov ecx, 0xcb83b0
// 00a19ee5  e8764daeff           call 0x4fec60
// 00a19eea  68b03ca300           push 0xa33cb0
// 00a19eef  e86912dfff           call 0x80b15d
// 00a19ef4  59                   pop ecx
// 00a19ef5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
