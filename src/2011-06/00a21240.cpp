// roc 2011-06 00a21240  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a21240
//
// 00a21240  b948a8cc00           mov ecx, 0xcca848
// 00a21245  e826a5bbff           call 0x5db770
// 00a2124a  68d081a300           push 0xa381d0
// 00a2124f  e8099fdeff           call 0x80b15d
// 00a21254  59                   pop ecx
// 00a21255  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
