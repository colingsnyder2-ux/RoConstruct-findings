// from server: 100% by auto
// roc 2011-06 00a20c20  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20c20
//
// 00a20c20  b974a8cc00           mov ecx, 0xcca874
// 00a20c25  e8e61dbbff           call 0x5d2a10
// 00a20c2a  682091a300           push 0xa39120
// 00a20c2f  e829a5deff           call 0x80b15d
// 00a20c34  59                   pop ecx
// 00a20c35  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
