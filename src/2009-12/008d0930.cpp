// roc 2009-12 008d0930  unit: CXTPTabPaintManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d0930
//
// 008d0930  8b8104010000         mov eax, dword ptr [ecx + 0x104]
// 008d0936  c3                   ret 
// library ogre-1.6.4/OgreBillboardSet.cpp (function ?getBillboardOrigin@BillboardSet@Ogre@@UBE?AW4BillboardOrigin@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreBillboardSet.cpp
