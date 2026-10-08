// from server: 100% by auto
// roc 2011-06 00a21000  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a21000
//
// 00a21000  b914a8cc00           mov ecx, 0xcca814
// 00a21005  e81674bbff           call 0x5d8420
// 00a2100a  687087a300           push 0xa38770
// 00a2100f  e849a1deff           call 0x80b15d
// 00a21014  59                   pop ecx
// 00a21015  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
