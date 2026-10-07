// roc 2007-08 00771000  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771000
//
// 00771000  b9501c8c00           mov ecx, 0x8c1c50
// 00771005  e8f646fbff           call 0x725700
// 0077100a  68109a7700           push 0x779a10
// 0077100f  e80ffdebff           call 0x630d23
// 00771014  59                   pop ecx
// 00771015  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
