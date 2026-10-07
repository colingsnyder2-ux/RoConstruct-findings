// roc 2011-06 0058be60  unit: std::Vlength_error::U?$error_info_injector::?$clone_impl  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058be60
//
// 0058be60  dd05c053c900         fld qword ptr [0xc953c0]
// 0058be66  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?infinity@?$numeric_limits@N@std@@SANXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
