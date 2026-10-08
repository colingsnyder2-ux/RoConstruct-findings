// roc 2012-06 00735410  unit: RBX::VFrame::?$FactoryProduct  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00735410
//
// 00735410  d9442404             fld dword ptr [esp + 4]
// 00735414  51                   push ecx
// 00735415  d91c24               fstp dword ptr [esp]
// 00735418  e873da0b00           call 0x7f2e90
// 0073541d  c20400               ret 4
// library ogre-1.6.4/OgrePredefinedControllers.cpp (function ?calculate@PassthroughControllerFunction@Ogre@@UAEMM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgrePredefinedControllers.cpp
