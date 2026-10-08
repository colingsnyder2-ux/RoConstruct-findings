// from server: 100% by auto
// roc 2011-06 00a20e60  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20e60
//
// 00a20e60  b968aacc00           mov ecx, 0xccaa68
// 00a20e65  e8464ebbff           call 0x5d5cb0
// 00a20e6a  68808ba300           push 0xa38b80
// 00a20e6f  e8e9a2deff           call 0x80b15d
// 00a20e74  59                   pop ecx
// 00a20e75  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
