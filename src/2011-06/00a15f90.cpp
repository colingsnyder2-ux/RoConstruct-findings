// from server: 100% by auto
// roc 2011-06 00a15f90  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15f90
//
// 00a15f90  b96827cb00           mov ecx, 0xcb2768
// 00a15f95  e846fda1ff           call 0x435ce0
// 00a15f9a  68900da300           push 0xa30d90
// 00a15f9f  e8b951dfff           call 0x80b15d
// 00a15fa4  59                   pop ecx
// 00a15fa5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
