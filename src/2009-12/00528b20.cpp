// roc 2009-12 00528b20  unit: RBX::Network::VClient::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00528b20
//
// 00528b20  dd054801b200         fld qword ptr [0xb20148]
// 00528b26  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ?infinity@?$numeric_limits@N@std@@SANXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
