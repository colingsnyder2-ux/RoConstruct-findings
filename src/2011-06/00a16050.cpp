// from server: 100% by auto
// roc 2011-06 00a16050  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a16050
//
// 00a16050  b95428cb00           mov ecx, 0xcb2854
// 00a16055  e8562ba3ff           call 0x448bb0
// 00a1605a  68200ea300           push 0xa30e20
// 00a1605f  e8f950dfff           call 0x80b15d
// 00a16064  59                   pop ecx
// 00a16065  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
