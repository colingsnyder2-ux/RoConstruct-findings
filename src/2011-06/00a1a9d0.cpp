// roc 2011-06 00a1a9d0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a1a9d0
//
// 00a1a9d0  b9d0a3cb00           mov ecx, 0xcba3d0
// 00a1a9d5  e8764ec2ff           call 0x63f850
// 00a1a9da  68b043a300           push 0xa343b0
// 00a1a9df  e87907dfff           call 0x80b15d
// 00a1a9e4  59                   pop ecx
// 00a1a9e5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
