// from server: 100% by auto
// roc 2011-06 00a17040  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a17040
//
// 00a17040  b9103dcb00           mov ecx, 0xcb3d10
// 00a17045  e85611a5ff           call 0x4681a0
// 00a1704a  68301aa300           push 0xa31a30
// 00a1704f  e80941dfff           call 0x80b15d
// 00a17054  59                   pop ecx
// 00a17055  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
