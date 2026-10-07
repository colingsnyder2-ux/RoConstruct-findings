// roc 2007-08 00776200  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00776200
//
// 00776200  b9bc828c00           mov ecx, 0x8c82bc
// 00776205  e8f6f4faff           call 0x725700
// 0077620a  6800ca7700           push 0x77ca00
// 0077620f  e80fabebff           call 0x630d23
// 00776214  59                   pop ecx
// 00776215  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
