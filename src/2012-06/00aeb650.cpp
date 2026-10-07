// roc 2012-06 00aeb650  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeb650
//
// 00aeb650  b934a9e100           mov ecx, 0xe1a934
// 00aeb655  e8d6d29aff           call 0x498930
// 00aeb65a  680028b100           push 0xb12800
// 00aeb65f  e8917be9ff           call 0x9831f5
// 00aeb664  59                   pop ecx
// 00aeb665  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
