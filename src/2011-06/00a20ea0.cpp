// from server: 100% by auto
// roc 2011-06 00a20ea0  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20ea0
//
// 00a20ea0  b90ca4cc00           mov ecx, 0xcca40c
// 00a20ea5  e8a653bbff           call 0x5d6250
// 00a20eaa  68e08aa300           push 0xa38ae0
// 00a20eaf  e8a9a2deff           call 0x80b15d
// 00a20eb4  59                   pop ecx
// 00a20eb5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
