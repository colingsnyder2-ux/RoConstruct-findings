// from server: 100% by auto
// roc 2011-06 00a173b0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a173b0
//
// 00a173b0  b91843cb00           mov ecx, 0xcb4318
// 00a173b5  e8c6f8a7ff           call 0x496c80
// 00a173ba  68701ea300           push 0xa31e70
// 00a173bf  e8993ddfff           call 0x80b15d
// 00a173c4  59                   pop ecx
// 00a173c5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
