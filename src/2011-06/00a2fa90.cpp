// from server: 100% by auto
// roc 2011-06 00a2fa90  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2fa90
//
// 00a2fa90  b9f492d100           mov ecx, 0xd192f4
// 00a2fa95  e8d615edff           call 0x901070
// 00a2fa9a  6870fda300           push 0xa3fd70
// 00a2fa9f  e8b9b6ddff           call 0x80b15d
// 00a2faa4  59                   pop ecx
// 00a2faa5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
