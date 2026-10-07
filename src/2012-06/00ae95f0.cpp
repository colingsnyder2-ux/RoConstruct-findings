// roc 2012-06 00ae95f0  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae95f0
//
// 00ae95f0  b92464e100           mov ecx, 0xe16424
// 00ae95f5  e8e69691ff           call 0x402ce0
// 00ae95fa  68c014b100           push 0xb114c0
// 00ae95ff  e8f19be9ff           call 0x9831f5
// 00ae9604  59                   pop ecx
// 00ae9605  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
