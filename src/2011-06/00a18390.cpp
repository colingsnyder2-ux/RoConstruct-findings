// from server: 100% by auto
// roc 2011-06 00a18390  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a18390
//
// 00a18390  b97464cb00           mov ecx, 0xcb6474
// 00a18395  e83686a9ff           call 0x4b09d0
// 00a1839a  682028a300           push 0xa32820
// 00a1839f  e8b92ddfff           call 0x80b15d
// 00a183a4  59                   pop ecx
// 00a183a5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
