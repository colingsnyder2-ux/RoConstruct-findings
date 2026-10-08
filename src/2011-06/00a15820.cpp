// from server: 100% by auto
// roc 2011-06 00a15820  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15820
//
// 00a15820  b97c15cb00           mov ecx, 0xcb157c
// 00a15825  e896c89eff           call 0x4020c0
// 00a1582a  68a0fea200           push 0xa2fea0
// 00a1582f  e82959dfff           call 0x80b15d
// 00a15834  59                   pop ecx
// 00a15835  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
