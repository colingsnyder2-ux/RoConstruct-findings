// from server: 100% by auto
// roc 2011-06 00a19e40  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19e40
//
// 00a19e40  b93c85cb00           mov ecx, 0xcb853c
// 00a19e45  e80640aeff           call 0x4fde50
// 00a19e4a  68403ea300           push 0xa33e40
// 00a19e4f  e80913dfff           call 0x80b15d
// 00a19e54  59                   pop ecx
// 00a19e55  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
