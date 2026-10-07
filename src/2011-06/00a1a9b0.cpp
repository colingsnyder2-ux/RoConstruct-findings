// roc 2011-06 00a1a9b0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a1a9b0
//
// 00a1a9b0  b95037c300           mov ecx, 0xc33750
// 00a1a9b5  e896b9b2ff           call 0x546350
// 00a1a9ba  686043a300           push 0xa34360
// 00a1a9bf  e89907dfff           call 0x80b15d
// 00a1a9c4  59                   pop ecx
// 00a1a9c5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
