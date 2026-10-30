// roc 2009-12 00760e30  unit: RBX::P8PVInstance::?$SetImpl  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00760e30
//
// 00760e30  8b442404             mov eax, dword ptr [esp + 4]
// 00760e34  898108010000         mov dword ptr [ecx + 0x108], eax
// 00760e3a  c20400               ret 4
// library ogre-1.6.4/OgreBillboardSet.cpp (function ?setBillboardRotationType@BillboardSet@Ogre@@UAEXW4BillboardRotationType@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreBillboardSet.cpp
