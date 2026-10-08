// from server: 100% by auto
// roc 2011-06 00a19da0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19da0
//
// 00a19da0  b94885cb00           mov ecx, 0xcb8548
// 00a19da5  e85634aeff           call 0x4fd200
// 00a19daa  68d03fa300           push 0xa33fd0
// 00a19daf  e8a913dfff           call 0x80b15d
// 00a19db4  59                   pop ecx
// 00a19db5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
