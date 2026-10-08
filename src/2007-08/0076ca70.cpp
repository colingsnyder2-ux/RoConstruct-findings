// from server: 100% by auto
// roc 2007-08 0076ca70  unit: seg_00760000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076ca70
//
// 0076ca70  b900b28b00           mov ecx, 0x8bb200
// 0076ca75  e8868cfbff           call 0x725700
// 0076ca7a  6820747700           push 0x777420
// 0076ca7f  e89f42ecff           call 0x630d23
// 0076ca84  59                   pop ecx
// 0076ca85  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
