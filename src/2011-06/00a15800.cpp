// roc 2011-06 00a15800  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15800
//
// 00a15800  b98015cb00           mov ecx, 0xcb1580
// 00a15805  e816c59eff           call 0x401d20
// 00a1580a  68f0fea200           push 0xa2fef0
// 00a1580f  e84959dfff           call 0x80b15d
// 00a15814  59                   pop ecx
// 00a15815  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
