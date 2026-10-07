// roc 2011-06 00a20d40  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20d40
//
// 00a20d40  b980a8cc00           mov ecx, 0xcca880
// 00a20d45  e81636bbff           call 0x5d4360
// 00a20d4a  68508ea300           push 0xa38e50
// 00a20d4f  e809a4deff           call 0x80b15d
// 00a20d54  59                   pop ecx
// 00a20d55  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
