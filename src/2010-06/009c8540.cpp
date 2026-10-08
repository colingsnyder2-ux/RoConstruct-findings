// from server: 100% by auto
// roc 2010-06 009c8540  unit: seg_009c0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c8540
//
// 009c8540  b9f887c000           mov ecx, 0xc087f8
// 009c8545  e8a63fadff           call 0x49c4f0
// 009c854a  6800dd9d00           push 0x9ddd00
// 009c854f  e80f05deff           call 0x7a8a63
// 009c8554  59                   pop ecx
// 009c8555  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
