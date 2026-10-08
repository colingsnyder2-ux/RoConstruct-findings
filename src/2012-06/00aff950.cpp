// from server: 100% by auto
// roc 2012-06 00aff950  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff950
//
// 00aff950  b9108de400           mov ecx, 0xe48d10
// 00aff955  e876c3c7ff           call 0x77bcd0
// 00aff95a  6810b4b100           push 0xb1b410
// 00aff95f  e89138e8ff           call 0x9831f5
// 00aff964  59                   pop ecx
// 00aff965  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
