// from server: 100% by auto
// roc 2012-06 00af0880  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af0880
//
// 00af0880  b98c87e200           mov ecx, 0xe2878c
// 00af0885  e84611c3ff           call 0x7219d0
// 00af088a  68804cb100           push 0xb14c80
// 00af088f  e86129e9ff           call 0x9831f5
// 00af0894  59                   pop ecx
// 00af0895  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
