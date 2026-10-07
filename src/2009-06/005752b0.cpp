// roc 2009-06 005752b0  unit: G3D::BinaryInput  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005752b0
//
// 005752b0  dd442404             fld qword ptr [esp + 4]
// 005752b4  d9e1                 fabs 
// 005752b6  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?abs@G3D@@YANN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
