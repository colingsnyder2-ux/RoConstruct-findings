// roc 2011-06 00a16fc0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a16fc0
//
// 00a16fc0  b9003bcb00           mov ecx, 0xcb3b00
// 00a16fc5  e85690a4ff           call 0x460020
// 00a16fca  689018a300           push 0xa31890
// 00a16fcf  e88941dfff           call 0x80b15d
// 00a16fd4  59                   pop ecx
// 00a16fd5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
