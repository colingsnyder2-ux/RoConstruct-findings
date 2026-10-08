// from server: 100% by auto
// roc 2007-08 00775a70  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775a70
//
// 00775a70  b9507e8c00           mov ecx, 0x8c7e50
// 00775a75  e8d6f5cfff           call 0x475050
// 00775a7a  68f0c37700           push 0x77c3f0
// 00775a7f  e89fb2ebff           call 0x630d23
// 00775a84  59                   pop ecx
// 00775a85  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
