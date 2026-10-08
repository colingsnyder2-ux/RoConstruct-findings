// from server: 100% by auto
// roc 2011-06 00a20c80  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20c80
//
// 00a20c80  b96ca8cc00           mov ecx, 0xcca86c
// 00a20c85  e8f625bbff           call 0x5d3280
// 00a20c8a  683090a300           push 0xa39030
// 00a20c8f  e8c9a4deff           call 0x80b15d
// 00a20c94  59                   pop ecx
// 00a20c95  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
