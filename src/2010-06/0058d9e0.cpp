// roc 2010-06 0058d9e0  unit: seg_00580000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058d9e0
//
// 0058d9e0  dd0538bdc000         fld qword ptr [0xc0bd38]
// 0058d9e6  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?infinity@?$numeric_limits@N@std@@SANXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
