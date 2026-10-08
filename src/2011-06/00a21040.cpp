// from server: 100% by auto
// roc 2011-06 00a21040  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a21040
//
// 00a21040  b9cca6cc00           mov ecx, 0xcca6cc
// 00a21045  e87679bbff           call 0x5d89c0
// 00a2104a  68d086a300           push 0xa386d0
// 00a2104f  e809a1deff           call 0x80b15d
// 00a21054  59                   pop ecx
// 00a21055  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
