// from server: 100% by auto
// roc 2011-06 00a159c0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a159c0
//
// 00a159c0  b99816cb00           mov ecx, 0xcb1698
// 00a159c5  e8e6409fff           call 0x409ab0
// 00a159ca  680001a300           push 0xa30100
// 00a159cf  e88957dfff           call 0x80b15d
// 00a159d4  59                   pop ecx
// 00a159d5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
