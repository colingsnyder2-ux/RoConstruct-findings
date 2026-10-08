// from server: 100% by auto
// roc 2012-06 00aefa60  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aefa60
//
// 00aefa60  b93042e200           mov ecx, 0xe24230
// 00aefa65  e8e601a7ff           call 0x55fc50
// 00aefa6a  68a043b100           push 0xb143a0
// 00aefa6f  e88137e9ff           call 0x9831f5
// 00aefa74  59                   pop ecx
// 00aefa75  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
