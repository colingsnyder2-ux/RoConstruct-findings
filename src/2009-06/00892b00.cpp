// from server: 100% by auto
// roc 2009-06 00892b00  unit: seg_00890000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00892b00
//
// 00892b00  b9641aa500           mov ecx, 0xa51a64
// 00892b05  e8d610ebff           call 0x743be0
// 00892b0a  6870d38900           push 0x89d370
// 00892b0f  e8e76fe8ff           call 0x719afb
// 00892b14  59                   pop ecx
// 00892b15  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
