// from server: 100% by auto
// roc 2011-06 00a20c60  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20c60
//
// 00a20c60  b960a5cc00           mov ecx, 0xcca560
// 00a20c65  e84623bbff           call 0x5d2fb0
// 00a20c6a  688090a300           push 0xa39080
// 00a20c6f  e8e9a4deff           call 0x80b15d
// 00a20c74  59                   pop ecx
// 00a20c75  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
