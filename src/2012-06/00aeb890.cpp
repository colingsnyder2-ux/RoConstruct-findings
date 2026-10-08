// from server: 100% by auto
// roc 2012-06 00aeb890  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeb890
//
// 00aeb890  b9a0c1e100           mov ecx, 0xe1c1a0
// 00aeb895  e866699cff           call 0x4b2200
// 00aeb89a  683029b100           push 0xb12930
// 00aeb89f  e85179e9ff           call 0x9831f5
// 00aeb8a4  59                   pop ecx
// 00aeb8a5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
