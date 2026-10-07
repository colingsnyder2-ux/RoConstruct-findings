// roc 2011-06 00a20de0  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20de0
//
// 00a20de0  b904a6cc00           mov ecx, 0xcca604
// 00a20de5  e88643bbff           call 0x5d5170
// 00a20dea  68c08ca300           push 0xa38cc0
// 00a20def  e869a3deff           call 0x80b15d
// 00a20df4  59                   pop ecx
// 00a20df5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
