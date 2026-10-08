// from server: 100% by auto
// roc 2011-06 00a15fd0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15fd0
//
// 00a15fd0  b96027cb00           mov ecx, 0xcb2760
// 00a15fd5  e8a602a2ff           call 0x436280
// 00a15fda  68f00ca300           push 0xa30cf0
// 00a15fdf  e87951dfff           call 0x80b15d
// 00a15fe4  59                   pop ecx
// 00a15fe5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
