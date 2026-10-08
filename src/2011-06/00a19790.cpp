// from server: 100% by auto
// roc 2011-06 00a19790  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19790
//
// 00a19790  b9bc7fcb00           mov ecx, 0xcb7fbc
// 00a19795  e896bfacff           call 0x4e5730
// 00a1979a  681039a300           push 0xa33910
// 00a1979f  e8b919dfff           call 0x80b15d
// 00a197a4  59                   pop ecx
// 00a197a5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
