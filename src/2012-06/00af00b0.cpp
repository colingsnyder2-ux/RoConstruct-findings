// from server: 100% by auto
// roc 2012-06 00af00b0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af00b0
//
// 00af00b0  b9a44ee200           mov ecx, 0xe24ea4
// 00af00b5  e8c6c5a8ff           call 0x57c680
// 00af00ba  686048b100           push 0xb14860
// 00af00bf  e83131e9ff           call 0x9831f5
// 00af00c4  59                   pop ecx
// 00af00c5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
