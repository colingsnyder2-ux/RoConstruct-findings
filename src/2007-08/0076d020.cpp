// from server: 100% by auto
// roc 2007-08 0076d020  unit: seg_00760000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d020
//
// 0076d020  b9ccba8b00           mov ecx, 0x8bbacc
// 0076d025  e8d686fbff           call 0x725700
// 0076d02a  68607a7700           push 0x777a60
// 0076d02f  e8ef3cecff           call 0x630d23
// 0076d034  59                   pop ecx
// 0076d035  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
