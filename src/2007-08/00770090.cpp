// from server: 100% by auto
// roc 2007-08 00770090  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770090
//
// 00770090  b950fb8b00           mov ecx, 0x8bfb50
// 00770095  e8c663d1ff           call 0x486460
// 0077009a  6820917700           push 0x779120
// 0077009f  e87f0cecff           call 0x630d23
// 007700a4  59                   pop ecx
// 007700a5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
