// roc 2012-06 00678310  unit: DummyArbiter  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00678310
//
// 00678310  dd0540e1e200         fld qword ptr [0xe2e140]
// 00678316  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?infinity@?$numeric_limits@N@std@@SANXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
