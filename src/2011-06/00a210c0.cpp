// from server: 100% by auto
// roc 2011-06 00a210c0  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a210c0
//
// 00a210c0  b918a4cc00           mov ecx, 0xcca418
// 00a210c5  e83684bbff           call 0x5d9500
// 00a210ca  689085a300           push 0xa38590
// 00a210cf  e889a0deff           call 0x80b15d
// 00a210d4  59                   pop ecx
// 00a210d5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
