// from server: 100% by auto
// roc 2011-06 00a15900  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15900
//
// 00a15900  b90c16cb00           mov ecx, 0xcb160c
// 00a15905  e866d59eff           call 0x402e70
// 00a1590a  681000a300           push 0xa30010
// 00a1590f  e84958dfff           call 0x80b15d
// 00a15914  59                   pop ecx
// 00a15915  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
