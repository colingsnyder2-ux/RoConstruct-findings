// roc 2012-06 00b10200  unit: seg_00b10000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b10200
//
// 00b10200  a11029b200           mov eax, dword ptr [0xb22910]
// 00b10205  a39880e500           mov dword ptr [0xe58098], eax
// 00b1020a  c3                   ret 
// library ogre-1.7.0/OgreOptimisedUtilGeneral.cpp (function ??__FmsOptimisedUtilGeneral@?1??_getOptimisedUtilGeneral@Ogre@@YAPAVOptimisedUtil@1@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreOptimisedUtilGeneral.cpp
