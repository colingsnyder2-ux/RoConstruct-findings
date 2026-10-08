// from server: 100% by auto
// roc 2010-06 0058d8a0  unit: seg_00580000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058d8a0
//
// 0058d8a0  dd05905abe00         fld qword ptr [0xbe5a90]
// 0058d8a6  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?infinity@?$numeric_limits@N@std@@SANXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
