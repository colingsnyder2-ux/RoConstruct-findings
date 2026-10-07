// roc 2011-06 00a19dc0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19dc0
//
// 00a19dc0  b95485cb00           mov ecx, 0xcb8554
// 00a19dc5  e84635aeff           call 0x4fd310
// 00a19dca  68803fa300           push 0xa33f80
// 00a19dcf  e88913dfff           call 0x80b15d
// 00a19dd4  59                   pop ecx
// 00a19dd5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
