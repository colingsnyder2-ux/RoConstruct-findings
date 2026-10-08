// from server: 100% by auto
// roc 2011-06 00a20c40  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20c40
//
// 00a20c40  b984a5cc00           mov ecx, 0xcca584
// 00a20c45  e89620bbff           call 0x5d2ce0
// 00a20c4a  68d090a300           push 0xa390d0
// 00a20c4f  e809a5deff           call 0x80b15d
// 00a20c54  59                   pop ecx
// 00a20c55  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
