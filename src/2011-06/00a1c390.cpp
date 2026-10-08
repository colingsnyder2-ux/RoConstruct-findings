// from server: 100% by auto
// roc 2011-06 00a1c390  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a1c390
//
// 00a1c390  b998bacb00           mov ecx, 0xcbba98
// 00a1c395  e88637b7ff           call 0x58fb20
// 00a1c39a  68204da300           push 0xa34d20
// 00a1c39f  e8b9eddeff           call 0x80b15d
// 00a1c3a4  59                   pop ecx
// 00a1c3a5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
