// roc 2009-06 006d16b0  unit: RBX::HUMAN::HumanoidState  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d16b0
//
// 006d16b0  d905a0cd8e00         fld dword ptr [0x8ecda0]
// 006d16b6  c3                   ret 
// library ogre-1.7.0/OgreSubEntity.cpp (function ?infinity@?$numeric_limits@M@std@@SAMXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreSubEntity.cpp
