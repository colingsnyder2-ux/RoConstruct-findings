// roc 2008-06 00563180  unit: RBX::ContentProvider  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563180
//
// 00563180  dd0538f69400         fld qword ptr [0x94f638]
// 00563186  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?infinity@?$numeric_limits@N@std@@SANXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
