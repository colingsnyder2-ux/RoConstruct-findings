// roc 2009-12 0095f5cc  unit: seg_00950000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0095f5cc
//
// 0095f5cc  8b542408             mov edx, dword ptr [esp + 8]
// 0095f5d0  8d02                 lea eax, [edx]
// 0095f5d2  8b4afc               mov ecx, dword ptr [edx - 4]
// 0095f5d5  33c8                 xor ecx, eax
// 0095f5d7  e8be5de9ff           call 0x7f539a
// 0095f5dc  b86cc3ad00           mov eax, 0xadc36c
// 0095f5e1  e93452e9ff           jmp 0x7f481a
// library ogre-1.7.0/OgreShadowCaster.cpp (function __ehhandler$?getLights@ShadowRenderable@Ogre@@UBEABV?$HashedVector@PAVLight@Ogre@@@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: ogre-1.7.0 OgreShadowCaster.cpp
