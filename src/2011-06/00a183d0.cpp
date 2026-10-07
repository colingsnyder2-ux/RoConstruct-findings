// roc 2011-06 00a183d0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a183d0
//
// 00a183d0  b94864cb00           mov ecx, 0xcb6448
// 00a183d5  e8d689a9ff           call 0x4b0db0
// 00a183da  688027a300           push 0xa32780
// 00a183df  e8792ddfff           call 0x80b15d
// 00a183e4  59                   pop ecx
// 00a183e5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
