// from server: 100% by auto
// roc 2008-06 007ef980  unit: seg_007e0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ef980
//
// 007ef980  b96cdf9600           mov ecx, 0x96df6c
// 007ef985  e8362fc4ff           call 0x4328c0
// 007ef98a  6820af7f00           push 0x7faf20
// 007ef98f  e81b1eebff           call 0x6a17af
// 007ef994  59                   pop ecx
// 007ef995  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
