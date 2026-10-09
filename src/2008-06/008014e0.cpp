// roc 2008-06 008014e0  unit: seg_00800000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008014e0
//
// 008014e0  a1b02d9600           mov eax, dword ptr [0x962db0]
// 008014e5  c705a82d9600d4d18400 mov dword ptr [0x962da8], 0x84d1d4
// 008014ef  85c0                 test eax, eax
// 008014f1  741c                 je 0x80150f
// 008014f3  ff08                 dec dword ptr [eax]
// 008014f5  a1b02d9600           mov eax, dword ptr [0x962db0]
// 008014fa  833800               cmp dword ptr [eax], 0
// 008014fd  7510                 jne 0x80150f
// 008014ff  8b15a82d9600         mov edx, dword ptr [0x962da8]
// 00801505  8b4204               mov eax, dword ptr [edx + 4]
// 00801508  b9a82d9600           mov ecx, 0x962da8
// 0080150d  ffe0                 jmp eax
// 0080150f  c3                   ret 
// library ogre-1.6.4/OgreTextureUnitState.cpp (function ??__FnullTexPtr@?9??_getTexturePtr@TextureUnitState@Ogre@@QBEABVTexturePtr@2@I@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreTextureUnitState.cpp
