// roc 2009-12 006f4870  unit: RBX::Backpack  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f4870
//
// 006f4870  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 006f4876  c3                   ret 
// library ogre-1.6.4/OgreBillboardSet.cpp (function ?getNumBillboards@BillboardSet@Ogre@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreBillboardSet.cpp
