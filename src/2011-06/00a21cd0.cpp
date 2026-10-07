// roc 2011-06 00a21cd0  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a21cd0
//
// 00a21cd0  b960b6cc00           mov ecx, 0xccb660
// 00a21cd5  e8b6fbb1ff           call 0x541890
// 00a21cda  689099a300           push 0xa39990
// 00a21cdf  e87994deff           call 0x80b15d
// 00a21ce4  59                   pop ecx
// 00a21ce5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
