// from server: 100% by auto
// roc 2011-06 00a16010  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a16010
//
// 00a16010  b95827cb00           mov ecx, 0xcb2758
// 00a16015  e88604a2ff           call 0x4364a0
// 00a1601a  68500ca300           push 0xa30c50
// 00a1601f  e83951dfff           call 0x80b15d
// 00a16024  59                   pop ecx
// 00a16025  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
