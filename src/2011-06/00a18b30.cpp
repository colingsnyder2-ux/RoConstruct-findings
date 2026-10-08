// from server: 100% by auto
// roc 2011-06 00a18b30  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a18b30
//
// 00a18b30  b9286ecb00           mov ecx, 0xcb6e28
// 00a18b35  e84683abff           call 0x4d0e80
// 00a18b3a  689030a300           push 0xa33090
// 00a18b3f  e81926dfff           call 0x80b15d
// 00a18b44  59                   pop ecx
// 00a18b45  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
