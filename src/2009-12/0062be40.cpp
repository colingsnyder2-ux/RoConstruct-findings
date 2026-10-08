// roc 2009-12 0062be40  unit: seg_00620000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062be40
//
// 0062be40  d9819c000000         fld dword ptr [ecx + 0x9c]
// 0062be46  c3                   ret 
// library g3d-6.09/G3Dcpp\Box.cpp (function ?surfaceArea@Box@G3D@@QBEMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Box.cpp
