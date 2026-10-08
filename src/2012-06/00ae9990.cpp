// from server: 100% by auto
// roc 2012-06 00ae9990  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9990
//
// 00ae9990  b9bc7ce100           mov ecx, 0xe17cbc
// 00ae9995  e8a68292ff           call 0x411c40
// 00ae999a  682017b100           push 0xb11720
// 00ae999f  e85198e9ff           call 0x9831f5
// 00ae99a4  59                   pop ecx
// 00ae99a5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
