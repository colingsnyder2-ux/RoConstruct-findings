// roc 2011-06 00a18350  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a18350
//
// 00a18350  b95c64cb00           mov ecx, 0xcb645c
// 00a18355  e8d680a9ff           call 0x4b0430
// 00a1835a  68c028a300           push 0xa328c0
// 00a1835f  e8f92ddfff           call 0x80b15d
// 00a18364  59                   pop ecx
// 00a18365  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
