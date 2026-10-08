// from server: 100% by auto
// roc 2011-06 00a15960  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15960
//
// 00a15960  b9a416cb00           mov ecx, 0xcb16a4
// 00a15965  e8d6389fff           call 0x409240
// 00a1596a  68f001a300           push 0xa301f0
// 00a1596f  e8e957dfff           call 0x80b15d
// 00a15974  59                   pop ecx
// 00a15975  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
