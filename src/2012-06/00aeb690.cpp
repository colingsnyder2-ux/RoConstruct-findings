// from server: 100% by auto
// roc 2012-06 00aeb690  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeb690
//
// 00aeb690  b92ca9e100           mov ecx, 0xe1a92c
// 00aeb695  e836dc9aff           call 0x4992d0
// 00aeb69a  68e027b100           push 0xb127e0
// 00aeb69f  e8517be9ff           call 0x9831f5
// 00aeb6a4  59                   pop ecx
// 00aeb6a5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
