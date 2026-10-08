// roc 2009-12 0041ad70  unit: CInstanceRecord::CNameItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041ad70
//
// 0041ad70  83c8ff               or eax, 0xffffffff
// 0041ad73  c20400               ret 4
// library g3d-6.09/G3Dcpp\Color4.cpp (function ?overflow@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
