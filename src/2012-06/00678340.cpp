// roc 2012-06 00678340  unit: DummyArbiter  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00678340
//
// 00678340  dd050826dc00         fld qword ptr [0xdc2608]
// 00678346  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?infinity@?$numeric_limits@N@std@@SANXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
