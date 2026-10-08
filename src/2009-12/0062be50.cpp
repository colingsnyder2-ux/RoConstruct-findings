// roc 2009-12 0062be50  unit: seg_00620000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062be50
//
// 0062be50  d981a0000000         fld dword ptr [ecx + 0xa0]
// 0062be56  c3                   ret 
// library g3d-6.09/G3Dcpp\Box.cpp (function ?volume@Box@G3D@@QBEMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Box.cpp
