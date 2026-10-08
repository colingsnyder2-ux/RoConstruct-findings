// from server: 100% by auto
// roc 2012-06 00af8840  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af8840
//
// 00af8840  b9502be300           mov ecx, 0xe32b50
// 00af8845  e8f69ec2ff           call 0x722740
// 00af884a  686078b100           push 0xb17860
// 00af884f  e8a1a9e8ff           call 0x9831f5
// 00af8854  59                   pop ecx
// 00af8855  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
