// roc 2012-06 00aff690  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff690
//
// 00aff690  b9f48ae400           mov ecx, 0xe48af4
// 00aff695  e8764fc7ff           call 0x774610
// 00aff69a  6870b5b100           push 0xb1b570
// 00aff69f  e8513be8ff           call 0x9831f5
// 00aff6a4  59                   pop ecx
// 00aff6a5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
