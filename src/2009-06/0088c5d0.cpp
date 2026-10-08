// from server: 100% by auto
// roc 2009-06 0088c5d0  unit: seg_00880000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088c5d0
//
// 0088c5d0  b904afa400           mov ecx, 0xa4af04
// 0088c5d5  e8d632c1ff           call 0x49f8b0
// 0088c5da  68c0988900           push 0x8998c0
// 0088c5df  e817d5e8ff           call 0x719afb
// 0088c5e4  59                   pop ecx
// 0088c5e5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
