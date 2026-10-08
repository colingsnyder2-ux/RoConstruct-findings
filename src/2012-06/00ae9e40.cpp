// from server: 100% by auto
// roc 2012-06 00ae9e40  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9e40
//
// 00ae9e40  b94489e100           mov ecx, 0xe18944
// 00ae9e45  e8966f95ff           call 0x440de0
// 00ae9e4a  68a01ab100           push 0xb11aa0
// 00ae9e4f  e8a193e9ff           call 0x9831f5
// 00ae9e54  59                   pop ecx
// 00ae9e55  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
