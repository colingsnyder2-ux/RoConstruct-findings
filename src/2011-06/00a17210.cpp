// from server: 100% by auto
// roc 2011-06 00a17210  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a17210
//
// 00a17210  b9f440cb00           mov ecx, 0xcb40f4
// 00a17215  e8b6cda6ff           call 0x483fd0
// 00a1721a  68901ca300           push 0xa31c90
// 00a1721f  e8393fdfff           call 0x80b15d
// 00a17224  59                   pop ecx
// 00a17225  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
