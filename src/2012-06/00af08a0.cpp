// from server: 100% by auto
// roc 2012-06 00af08a0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af08a0
//
// 00af08a0  b9e067d900           mov ecx, 0xd967e0
// 00af08a5  e87609b4ff           call 0x631220
// 00af08aa  68904cb100           push 0xb14c90
// 00af08af  e84129e9ff           call 0x9831f5
// 00af08b4  59                   pop ecx
// 00af08b5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
