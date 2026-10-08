// from server: 100% by auto
// roc 2011-06 00a1d5c0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a1d5c0
//
// 00a1d5c0  b9c1dfcb00           mov ecx, 0xcbdfc1
// 00a1d5c5  e8f648b9ff           call 0x5b1ec0
// 00a1d5ca  688057a300           push 0xa35780
// 00a1d5cf  e889dbdeff           call 0x80b15d
// 00a1d5d4  59                   pop ecx
// 00a1d5d5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
