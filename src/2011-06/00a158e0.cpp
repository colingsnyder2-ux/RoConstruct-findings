// from server: 100% by auto
// roc 2011-06 00a158e0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a158e0
//
// 00a158e0  b91016cb00           mov ecx, 0xcb1610
// 00a158e5  e8b6d29eff           call 0x402ba0
// 00a158ea  686000a300           push 0xa30060
// 00a158ef  e86958dfff           call 0x80b15d
// 00a158f4  59                   pop ecx
// 00a158f5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
