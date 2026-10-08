// from server: 100% by auto
// roc 2011-06 00a2fb15  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2fb15
//
// 00a2fb15  b9a893d100           mov ecx, 0xd193a8
// 00a2fb1a  e84142edff           call 0x903d60
// 00a2fb1f  68a3fda300           push 0xa3fda3
// 00a2fb24  e834b6ddff           call 0x80b15d
// 00a2fb29  59                   pop ecx
// 00a2fb2a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
