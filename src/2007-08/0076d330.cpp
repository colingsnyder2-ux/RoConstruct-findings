// roc 2007-08 0076d330  unit: seg_00760000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d330
//
// 0076d330  b980bd8b00           mov ecx, 0x8bbd80
// 0076d335  e876cfcdff           call 0x44a2b0
// 0076d33a  68b07d7700           push 0x777db0
// 0076d33f  e8df39ecff           call 0x630d23
// 0076d344  59                   pop ecx
// 0076d345  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
