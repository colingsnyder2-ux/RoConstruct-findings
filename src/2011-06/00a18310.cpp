// from server: 100% by auto
// roc 2011-06 00a18310  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a18310
//
// 00a18310  b94464cb00           mov ecx, 0xcb6444
// 00a18315  e8767ba9ff           call 0x4afe90
// 00a1831a  686029a300           push 0xa32960
// 00a1831f  e8392edfff           call 0x80b15d
// 00a18324  59                   pop ecx
// 00a18325  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
