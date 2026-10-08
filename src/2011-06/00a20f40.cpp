// from server: 100% by auto
// roc 2011-06 00a20f40  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20f40
//
// 00a20f40  b9b8a4cc00           mov ecx, 0xcca4b8
// 00a20f45  e81661bbff           call 0x5d7060
// 00a20f4a  685089a300           push 0xa38950
// 00a20f4f  e809a2deff           call 0x80b15d
// 00a20f54  59                   pop ecx
// 00a20f55  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
