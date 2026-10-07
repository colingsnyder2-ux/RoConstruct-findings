// roc 2009-06 00894e20  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894e20
//
// 00894e20  a15c0b8a00           mov eax, dword ptr [0x8a0b5c]
// 00894e25  a388c6a300           mov dword ptr [0xa3c688], eax
// 00894e2a  c3                   ret 
// library ogre-1.7.0/OgreOptimisedUtilGeneral.cpp (function ??__FmsOptimisedUtilGeneral@?1??_getOptimisedUtilGeneral@Ogre@@YAPAVOptimisedUtil@1@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreOptimisedUtilGeneral.cpp
