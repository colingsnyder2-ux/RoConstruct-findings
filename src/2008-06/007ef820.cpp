// roc 2008-06 007ef820  unit: seg_007e0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ef820
//
// 007ef820  b9e0db9600           mov ecx, 0x96dbe0
// 007ef825  e8a6cbc5ff           call 0x44c3d0
// 007ef82a  6860ae7f00           push 0x7fae60
// 007ef82f  e87b1febff           call 0x6a17af
// 007ef834  59                   pop ecx
// 007ef835  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
