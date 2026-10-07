// roc 2009-06 005c8b60  unit: seg_005c0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c8b60
//
// 005c8b60  dd059046a400         fld qword ptr [0xa44690]
// 005c8b66  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?infinity@?$numeric_limits@N@std@@SANXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
