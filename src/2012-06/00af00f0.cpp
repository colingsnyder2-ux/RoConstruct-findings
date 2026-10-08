// from server: 100% by auto
// roc 2012-06 00af00f0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af00f0
//
// 00af00f0  b98c4ee200           mov ecx, 0xe24e8c
// 00af00f5  e826cfa8ff           call 0x57d020
// 00af00fa  684048b100           push 0xb14840
// 00af00ff  e8f130e9ff           call 0x9831f5
// 00af0104  59                   pop ecx
// 00af0105  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
