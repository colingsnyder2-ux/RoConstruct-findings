// from server: 100% by auto
// roc 2011-06 00a21120  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a21120
//
// 00a21120  b9a8a4cc00           mov ecx, 0xcca4a8
// 00a21125  e8768cbbff           call 0x5d9da0
// 00a2112a  68a084a300           push 0xa384a0
// 00a2112f  e829a0deff           call 0x80b15d
// 00a21134  59                   pop ecx
// 00a21135  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
