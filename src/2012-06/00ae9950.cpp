// from server: 100% by auto
// roc 2012-06 00ae9950  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9950
//
// 00ae9950  b9c47ce100           mov ecx, 0xe17cc4
// 00ae9955  e8c67a92ff           call 0x411420
// 00ae995a  684017b100           push 0xb11740
// 00ae995f  e89198e9ff           call 0x9831f5
// 00ae9964  59                   pop ecx
// 00ae9965  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
