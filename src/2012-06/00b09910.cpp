// from server: 100% by auto
// roc 2012-06 00b09910  unit: seg_00b00000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b09910
//
// 00b09910  b98411e500           mov ecx, 0xe51184
// 00b09915  e85650daff           call 0x8ae970
// 00b0991a  6820ebb100           push 0xb1eb20
// 00b0991f  e8d198e7ff           call 0x9831f5
// 00b09924  59                   pop ecx
// 00b09925  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
