// from server: 100% by auto
// roc 2007-08 00776390  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00776390
//
// 00776390  b9d0878c00           mov ecx, 0x8c87d0
// 00776395  e82607eeff           call 0x656ac0
// 0077639a  68b0ca7700           push 0x77cab0
// 0077639f  e87fa9ebff           call 0x630d23
// 007763a4  59                   pop ecx
// 007763a5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
