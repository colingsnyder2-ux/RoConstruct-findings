// from server: 100% by auto
// roc 2012-06 00aedf20  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aedf20
//
// 00aedf20  b91415e200           mov ecx, 0xe21514
// 00aedf25  e886a1a3ff           call 0x5280b0
// 00aedf2a  681035b100           push 0xb13510
// 00aedf2f  e8c152e9ff           call 0x9831f5
// 00aedf34  59                   pop ecx
// 00aedf35  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
