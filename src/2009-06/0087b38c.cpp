// roc 2009-06 0087b38c  unit: seg_00870000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0087b38c
//
// 0087b38c  8b542408             mov edx, dword ptr [esp + 8]
// 0087b390  8d02                 lea eax, [edx]
// 0087b392  8b4afc               mov ecx, dword ptr [edx - 4]
// 0087b395  33c8                 xor ecx, eax
// 0087b397  e8def1e9ff           call 0x71a57a
// 0087b39c  b89c8e9b00           mov eax, 0x9b8e9c
// 0087b3a1  e946e6e9ff           jmp 0x7199ec
// library ogre-1.7.0/OgreShadowCaster.cpp (function __ehhandler$?getLights@ShadowRenderable@Ogre@@UBEABV?$HashedVector@PAVLight@Ogre@@@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: ogre-1.7.0 OgreShadowCaster.cpp
