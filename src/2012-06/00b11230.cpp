// roc 2012-06 00b11230  unit: seg_00b10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b11230
//
// 00b11230  b964a4e500           mov ecx, 0xe5a464
// 00b11235  e84680f6ff           call 0xa79280
// 00b1123a  685018b200           push 0xb21850
// 00b1123f  e8b11fe7ff           call 0x9831f5
// 00b11244  59                   pop ecx
// 00b11245  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
