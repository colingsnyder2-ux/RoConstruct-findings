// from server: 100% by auto
// roc 2011-06 00a19e80  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19e80
//
// 00a19e80  b95885cb00           mov ecx, 0xcb8558
// 00a19e85  e86645aeff           call 0x4fe3f0
// 00a19e8a  68a03da300           push 0xa33da0
// 00a19e8f  e8c912dfff           call 0x80b15d
// 00a19e94  59                   pop ecx
// 00a19e95  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
