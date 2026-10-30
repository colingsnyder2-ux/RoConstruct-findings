// roc 2011-06 00a0861c  unit: seg_00a00000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a0861c
//
// 00a0861c  8b542408             mov edx, dword ptr [esp + 8]
// 00a08620  8d02                 lea eax, [edx]
// 00a08622  8b4afc               mov ecx, dword ptr [edx - 4]
// 00a08625  33c8                 xor ecx, eax
// 00a08627  e8cb32e0ff           call 0x80b8f7
// 00a0862c  b8a499bd00           mov eax, 0xbd99a4
// 00a08631  e9182ae0ff           jmp 0x80b04e
// library ogre-1.7.0/OgreShadowCaster.cpp (function __ehhandler$?getLights@ShadowRenderable@Ogre@@UBEABV?$HashedVector@PAVLight@Ogre@@@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: ogre-1.7.0 OgreShadowCaster.cpp
