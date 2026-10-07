// roc 2011-06 00a171f0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a171f0
//
// 00a171f0  b9f840cb00           mov ecx, 0xcb40f8
// 00a171f5  e806cba6ff           call 0x483d00
// 00a171fa  68e01ca300           push 0xa31ce0
// 00a171ff  e8593fdfff           call 0x80b15d
// 00a17204  59                   pop ecx
// 00a17205  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
