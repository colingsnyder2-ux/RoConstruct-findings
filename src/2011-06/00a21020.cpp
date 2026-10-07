// roc 2011-06 00a21020  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a21020
//
// 00a21020  b958a8cc00           mov ecx, 0xcca858
// 00a21025  e8c676bbff           call 0x5d86f0
// 00a2102a  682087a300           push 0xa38720
// 00a2102f  e829a1deff           call 0x80b15d
// 00a21034  59                   pop ecx
// 00a21035  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
