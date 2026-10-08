// from server: 100% by auto
// roc 2011-06 00a15980  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15980
//
// 00a15980  b9a016cb00           mov ecx, 0xcb16a0
// 00a15985  e8863b9fff           call 0x409510
// 00a1598a  68a001a300           push 0xa301a0
// 00a1598f  e8c957dfff           call 0x80b15d
// 00a15994  59                   pop ecx
// 00a15995  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
