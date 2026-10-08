// from server: 100% by auto
// roc 2011-06 00a183b0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a183b0
//
// 00a183b0  b95864cb00           mov ecx, 0xcb6458
// 00a183b5  e8e688a9ff           call 0x4b0ca0
// 00a183ba  68d027a300           push 0xa327d0
// 00a183bf  e8992ddfff           call 0x80b15d
// 00a183c4  59                   pop ecx
// 00a183c5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
