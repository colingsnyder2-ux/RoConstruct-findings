// from server: 100% by auto
// roc 2011-06 00a211a0  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a211a0
//
// 00a211a0  b99ca5cc00           mov ecx, 0xcca59c
// 00a211a5  e83697bbff           call 0x5da8e0
// 00a211aa  686083a300           push 0xa38360
// 00a211af  e8a99fdeff           call 0x80b15d
// 00a211b4  59                   pop ecx
// 00a211b5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
