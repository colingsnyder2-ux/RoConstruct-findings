// from server: 100% by auto
// roc 2011-06 00a15bb0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15bb0
//
// 00a15bb0  b9ec21cb00           mov ecx, 0xcb21ec
// 00a15bb5  e8969c9fff           call 0x40f850
// 00a15bba  68e004a300           push 0xa304e0
// 00a15bbf  e89955dfff           call 0x80b15d
// 00a15bc4  59                   pop ecx
// 00a15bc5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
