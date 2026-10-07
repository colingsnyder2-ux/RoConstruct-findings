// roc 2011-06 00a17080  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a17080
//
// 00a17080  b9083dcb00           mov ecx, 0xcb3d08
// 00a17085  e8f614a5ff           call 0x468580
// 00a1708a  689019a300           push 0xa31990
// 00a1708f  e8c940dfff           call 0x80b15d
// 00a17094  59                   pop ecx
// 00a17095  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
