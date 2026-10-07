// roc 2011-06 00a15c80  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15c80
//
// 00a15c80  b95823cb00           mov ecx, 0xcb2358
// 00a15c85  e8c63ca0ff           call 0x419950
// 00a15c8a  680008a300           push 0xa30800
// 00a15c8f  e8c954dfff           call 0x80b15d
// 00a15c94  59                   pop ecx
// 00a15c95  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
