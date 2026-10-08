// from server: 100% by auto
// roc 2011-06 00a15fb0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15fb0
//
// 00a15fb0  b96427cb00           mov ecx, 0xcb2764
// 00a15fb5  e8f6ffa1ff           call 0x435fb0
// 00a15fba  68400da300           push 0xa30d40
// 00a15fbf  e89951dfff           call 0x80b15d
// 00a15fc4  59                   pop ecx
// 00a15fc5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
