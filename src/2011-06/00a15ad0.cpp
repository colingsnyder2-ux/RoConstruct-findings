// from server: 100% by auto
// roc 2011-06 00a15ad0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15ad0
//
// 00a15ad0  b90822cb00           mov ecx, 0xcb2208
// 00a15ad5  e886899fff           call 0x40e460
// 00a15ada  681007a300           push 0xa30710
// 00a15adf  e87956dfff           call 0x80b15d
// 00a15ae4  59                   pop ecx
// 00a15ae5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
