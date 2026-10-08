// from server: 100% by auto
// roc 2012-06 00aff650  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff650
//
// 00aff650  b9d089e400           mov ecx, 0xe489d0
// 00aff655  e81646c7ff           call 0x773c70
// 00aff65a  6890b5b100           push 0xb1b590
// 00aff65f  e8913be8ff           call 0x9831f5
// 00aff664  59                   pop ecx
// 00aff665  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
