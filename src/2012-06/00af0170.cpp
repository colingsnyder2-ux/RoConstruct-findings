// from server: 100% by auto
// roc 2012-06 00af0170  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af0170
//
// 00af0170  b9a04ee200           mov ecx, 0xe24ea0
// 00af0175  e8e6e1a8ff           call 0x57e360
// 00af017a  680048b100           push 0xb14800
// 00af017f  e87130e9ff           call 0x9831f5
// 00af0184  59                   pop ecx
// 00af0185  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
