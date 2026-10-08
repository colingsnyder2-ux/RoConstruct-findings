// roc 2008-06 007e5a2c  unit: seg_007e0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007e5a2c
//
// 007e5a2c  8b542408             mov edx, dword ptr [esp + 8]
// 007e5a30  8d02                 lea eax, [edx]
// 007e5a32  8b4afc               mov ecx, dword ptr [edx - 4]
// 007e5a35  33c8                 xor ecx, eax
// 007e5a37  e896c3ebff           call 0x6a1dd2
// 007e5a3c  b828739000           mov eax, 0x907328
// 007e5a41  e97abaebff           jmp 0x6a14c0
// library ogre-1.7.0/OgreShadowCaster.cpp (function __ehhandler$?getLights@ShadowRenderable@Ogre@@UBEABV?$HashedVector@PAVLight@Ogre@@@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: ogre-1.7.0 OgreShadowCaster.cpp
