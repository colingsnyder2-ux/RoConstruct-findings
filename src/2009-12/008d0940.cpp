// roc 2009-12 008d0940  unit: CXTSplitterWnd  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d0940
//
// 008d0940  8b8108010000         mov eax, dword ptr [ecx + 0x108]
// 008d0946  c3                   ret 
// library ogre-1.6.4/OgreBillboardSet.cpp (function ?getBillboardRotationType@BillboardSet@Ogre@@UBE?AW4BillboardRotationType@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreBillboardSet.cpp
