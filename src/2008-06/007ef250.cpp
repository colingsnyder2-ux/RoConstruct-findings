// from server: 100% by auto
// roc 2008-06 007ef250  unit: seg_007e0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ef250
//
// 007ef250  b97cd19600           mov ecx, 0x96d17c
// 007ef255  e86636c4ff           call 0x4328c0
// 007ef25a  68c0a97f00           push 0x7fa9c0
// 007ef25f  e84b25ebff           call 0x6a17af
// 007ef264  59                   pop ecx
// 007ef265  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
