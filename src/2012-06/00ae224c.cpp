// roc 2012-06 00ae224c  unit: seg_00ae0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae224c
//
// 00ae224c  8b542408             mov edx, dword ptr [esp + 8]
// 00ae2250  8d02                 lea eax, [edx]
// 00ae2252  8b4afc               mov ecx, dword ptr [edx - 4]
// 00ae2255  33c8                 xor ecx, eax
// 00ae2257  e8db17eaff           call 0x983a37
// 00ae225c  b878a7d300           mov eax, 0xd3a778
// 00ae2261  e9800eeaff           jmp 0x9830e6
// library ogre-1.7.0/OgreShadowCaster.cpp (function __ehhandler$?getLights@ShadowRenderable@Ogre@@UBEABV?$HashedVector@PAVLight@Ogre@@@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: ogre-1.7.0 OgreShadowCaster.cpp
