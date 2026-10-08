// from server: 100% by auto
// roc 2011-06 00a197f0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a197f0
//
// 00a197f0  b9c07fcb00           mov ecx, 0xcb7fc0
// 00a197f5  e866c9acff           call 0x4e6160
// 00a197fa  682038a300           push 0xa33820
// 00a197ff  e85919dfff           call 0x80b15d
// 00a19804  59                   pop ecx
// 00a19805  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
