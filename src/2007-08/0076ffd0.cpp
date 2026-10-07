// roc 2007-08 0076ffd0  unit: seg_00760000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076ffd0
//
// 0076ffd0  b98cfa8b00           mov ecx, 0x8bfa8c
// 0076ffd5  e87650d0ff           call 0x475050
// 0076ffda  6820907700           push 0x779020
// 0076ffdf  e83f0decff           call 0x630d23
// 0076ffe4  59                   pop ecx
// 0076ffe5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
