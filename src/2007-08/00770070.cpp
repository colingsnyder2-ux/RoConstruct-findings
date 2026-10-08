// from server: 100% by auto
// roc 2007-08 00770070  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770070
//
// 00770070  b900fb8b00           mov ecx, 0x8bfb00
// 00770075  e8e663d1ff           call 0x486460
// 0077007a  68e0907700           push 0x7790e0
// 0077007f  e89f0cecff           call 0x630d23
// 00770084  59                   pop ecx
// 00770085  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
