// roc 2009-12 0062bd40  unit: seg_00620000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062bd40
//
// 0062bd40  dd05a84db600         fld qword ptr [0xb64da8]
// 0062bd46  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ?infinity@?$numeric_limits@N@std@@SANXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
