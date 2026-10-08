// from server: 100% by auto
// roc 2011-06 007fbae0  unit: YieldThreadJob  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007fbae0
//
// 007fbae0  dd05f090a600         fld qword ptr [0xa690f0]
// 007fbae6  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?infinity@?$numeric_limits@N@std@@SANXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
