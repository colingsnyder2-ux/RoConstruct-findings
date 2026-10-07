// roc 2012-06 00aeea20  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeea20
//
// 00aeea20  b9ec25e200           mov ecx, 0xe225ec
// 00aeea25  e826b0a5ff           call 0x549a50
// 00aeea2a  68f03bb100           push 0xb13bf0
// 00aeea2f  e8c147e9ff           call 0x9831f5
// 00aeea34  59                   pop ecx
// 00aeea35  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
