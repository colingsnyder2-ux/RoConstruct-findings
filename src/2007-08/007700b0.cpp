// from server: 100% by auto
// roc 2007-08 007700b0  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007700b0
//
// 007700b0  b970fb8b00           mov ecx, 0x8bfb70
// 007700b5  e8a663d1ff           call 0x486460
// 007700ba  6860917700           push 0x779160
// 007700bf  e85f0cecff           call 0x630d23
// 007700c4  59                   pop ecx
// 007700c5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
