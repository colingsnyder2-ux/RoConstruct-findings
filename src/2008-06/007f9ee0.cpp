// roc 2008-06 007f9ee0  unit: seg_007f0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9ee0
//
// 007f9ee0  b98cf29700           mov ecx, 0x97f28c
// 007f9ee5  e8f671faff           call 0x7a10e0
// 007f9eea  6840198000           push 0x801940
// 007f9eef  e8bb78eaff           call 0x6a17af
// 007f9ef4  59                   pop ecx
// 007f9ef5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
