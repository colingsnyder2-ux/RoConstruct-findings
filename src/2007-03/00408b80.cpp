// roc 2007-03 00408b80  unit: seg_00400000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00408b80
//
// 00408b80  e8cbfaffff           call 0x408650
// 00408b85  8bc8                 mov ecx, eax
// 00408b87  e874e11300           call 0x546d00
// 00408b8c  33c0                 xor eax, eax
// 00408b8e  c20400               ret 4
// copied from an identical function in another client (function ?initialiseAllResourceGroups@ResourceBackgroundQueue@Ogre@@UAEKPAVListener@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreResourceBackgroundQueue.cpp