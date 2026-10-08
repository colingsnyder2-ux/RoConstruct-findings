// from server: 100% by auto
// roc 2011-06 00a246b0  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a246b0
//
// 00a246b0  b96cd2cc00           mov ecx, 0xccd26c
// 00a246b5  e8e69fd6ff           call 0x78e6a0
// 00a246ba  6830aaa300           push 0xa3aa30
// 00a246bf  e8996adeff           call 0x80b15d
// 00a246c4  59                   pop ecx
// 00a246c5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
