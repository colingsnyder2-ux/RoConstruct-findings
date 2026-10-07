// roc 2009-06 00888850  unit: seg_00880000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00888850
//
// 00888850  b91806a400           mov ecx, 0xa40618
// 00888855  e8e67fc8ff           call 0x510840
// 0088885a  6890638900           push 0x896390
// 0088885f  e89712e9ff           call 0x719afb
// 00888864  59                   pop ecx
// 00888865  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
