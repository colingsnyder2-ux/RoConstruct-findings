// roc 2010-06 009b54bc  unit: seg_009b0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009b54bc
//
// 009b54bc  8b542408             mov edx, dword ptr [esp + 8]
// 009b54c0  8d02                 lea eax, [edx]
// 009b54c2  8b4afc               mov ecx, dword ptr [edx - 4]
// 009b54c5  33c8                 xor ecx, eax
// 009b54c7  e80840dfff           call 0x7a94d4
// 009b54cc  b87ce1b400           mov eax, 0xb4e17c
// 009b54d1  e97e34dfff           jmp 0x7a8954
// library ogre-1.7.0/OgreShadowCaster.cpp (function __ehhandler$?getLights@ShadowRenderable@Ogre@@UBEABV?$HashedVector@PAVLight@Ogre@@@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: ogre-1.7.0 OgreShadowCaster.cpp
