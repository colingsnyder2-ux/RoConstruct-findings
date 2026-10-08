// from server: 100% by auto
// roc 2010-06 009c8500  unit: seg_009c0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c8500
//
// 009c8500  b97888c000           mov ecx, 0xc08878
// 009c8505  e8e63fadff           call 0x49c4f0
// 009c850a  6880dd9d00           push 0x9ddd80
// 009c850f  e84f05deff           call 0x7a8a63
// 009c8514  59                   pop ecx
// 009c8515  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
