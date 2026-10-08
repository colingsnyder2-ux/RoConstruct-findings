// from server: 100% by auto
// roc 2011-06 00a15d20  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15d20
//
// 00a15d20  b9fc23cb00           mov ecx, 0xcb23fc
// 00a15d25  e8f666a0ff           call 0x41c420
// 00a15d2a  687008a300           push 0xa30870
// 00a15d2f  e82954dfff           call 0x80b15d
// 00a15d34  59                   pop ecx
// 00a15d35  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
