// from server: 100% by auto
// roc 2011-06 00a15940  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15940
//
// 00a15940  b9a816cb00           mov ecx, 0xcb16a8
// 00a15945  e826369fff           call 0x408f70
// 00a1594a  684002a300           push 0xa30240
// 00a1594f  e80958dfff           call 0x80b15d
// 00a15954  59                   pop ecx
// 00a15955  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
