// from server: 100% by auto
// roc 2012-06 00af00d0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af00d0
//
// 00af00d0  b99c4ee200           mov ecx, 0xe24e9c
// 00af00d5  e876caa8ff           call 0x57cb50
// 00af00da  685048b100           push 0xb14850
// 00af00df  e81131e9ff           call 0x9831f5
// 00af00e4  59                   pop ecx
// 00af00e5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
