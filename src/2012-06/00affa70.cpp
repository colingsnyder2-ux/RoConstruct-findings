// roc 2012-06 00affa70  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00affa70
//
// 00affa70  b9048be400           mov ecx, 0xe48b04
// 00affa75  e826ecc7ff           call 0x77e6a0
// 00affa7a  6880b3b100           push 0xb1b380
// 00affa7f  e87137e8ff           call 0x9831f5
// 00affa84  59                   pop ecx
// 00affa85  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
