// roc 2012-06 00ae98f0  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae98f0
//
// 00ae98f0  b9d07ce100           mov ecx, 0xe17cd0
// 00ae98f5  e8366f92ff           call 0x410830
// 00ae98fa  687017b100           push 0xb11770
// 00ae98ff  e8f198e9ff           call 0x9831f5
// 00ae9904  59                   pop ecx
// 00ae9905  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
