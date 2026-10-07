// roc 2011-06 00a18330  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a18330
//
// 00a18330  b96464cb00           mov ecx, 0xcb6464
// 00a18335  e8267ea9ff           call 0x4b0160
// 00a1833a  681029a300           push 0xa32910
// 00a1833f  e8192edfff           call 0x80b15d
// 00a18344  59                   pop ecx
// 00a18345  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
