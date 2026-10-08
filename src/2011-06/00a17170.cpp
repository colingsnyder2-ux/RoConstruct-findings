// from server: 100% by auto
// roc 2011-06 00a17170  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a17170
//
// 00a17170  b9b43ecb00           mov ecx, 0xcb3eb4
// 00a17175  e8f6f1a5ff           call 0x476370
// 00a1717a  68d01ba300           push 0xa31bd0
// 00a1717f  e8d93fdfff           call 0x80b15d
// 00a17184  59                   pop ecx
// 00a17185  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
