// from server: 100% by auto
// roc 2009-06 004d4ef0  unit: RBX::Network::VClient::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d4ef0
//
// 004d4ef0  dd05305e9f00         fld qword ptr [0x9f5e30]
// 004d4ef6  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?infinity@?$numeric_limits@N@std@@SANXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
