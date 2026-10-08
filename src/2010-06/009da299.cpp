// from server: 100% by auto
// roc 2010-06 009da299  unit: seg_009d0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da299
//
// 009da299  b95067c200           mov ecx, 0xc26750
// 009da29e  e861fbecff           call 0x8a9e04
// 009da2a3  68df919e00           push 0x9e91df
// 009da2a8  e8b6e7dcff           call 0x7a8a63
// 009da2ad  59                   pop ecx
// 009da2ae  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
