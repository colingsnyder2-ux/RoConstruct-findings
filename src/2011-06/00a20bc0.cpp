// from server: 100% by auto
// roc 2011-06 00a20bc0  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20bc0
//
// 00a20bc0  b98ca5cc00           mov ecx, 0xcca58c
// 00a20bc5  e8e615bbff           call 0x5d21b0
// 00a20bca  681092a300           push 0xa39210
// 00a20bcf  e889a5deff           call 0x80b15d
// 00a20bd4  59                   pop ecx
// 00a20bd5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
