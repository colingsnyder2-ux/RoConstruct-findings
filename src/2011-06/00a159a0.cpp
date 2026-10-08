// from server: 100% by auto
// roc 2011-06 00a159a0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a159a0
//
// 00a159a0  b99c16cb00           mov ecx, 0xcb169c
// 00a159a5  e8363e9fff           call 0x4097e0
// 00a159aa  685001a300           push 0xa30150
// 00a159af  e8a957dfff           call 0x80b15d
// 00a159b4  59                   pop ecx
// 00a159b5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
