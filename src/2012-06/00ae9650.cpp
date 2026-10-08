// from server: 100% by auto
// roc 2012-06 00ae9650  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9650
//
// 00ae9650  b91864e100           mov ecx, 0xe16418
// 00ae9655  e8f6a491ff           call 0x403b50
// 00ae965a  689014b100           push 0xb11490
// 00ae965f  e8919be9ff           call 0x9831f5
// 00ae9664  59                   pop ecx
// 00ae9665  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
