// roc 2012-06 00aeb710  unit: seg_00ae0000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeb710
//
// 00aeb710  b974a9e100           mov ecx, 0xe1a974
// 00aeb715  e8d61aceff           call 0x7cd1f0
// 00aeb71a  a378a9e100           mov dword ptr [0xe1a978], eax
// 00aeb71f  c6401501             mov byte ptr [eax + 0x15], 1
// 00aeb723  a178a9e100           mov eax, dword ptr [0xe1a978]
// 00aeb728  894004               mov dword ptr [eax + 4], eax
// 00aeb72b  a178a9e100           mov eax, dword ptr [0xe1a978]
// 00aeb730  8900                 mov dword ptr [eax], eax
// 00aeb732  a178a9e100           mov eax, dword ptr [0xe1a978]
// 00aeb737  894008               mov dword ptr [eax + 8], eax
// 00aeb73a  689028b100           push 0xb12890
// 00aeb73f  c7057ca9e10000000000 mov dword ptr [0xe1a97c], 0
// 00aeb749  e8a77ae9ff           call 0x9831f5
// 00aeb74e  59                   pop ecx
// 00aeb74f  c3                   ret 
// library ogre-1.6.4/OgreWindowEventUtilities.cpp (function ??__E?_msListeners@WindowEventUtilities@Ogre@@2V?$multimap@PAVRenderWindow@Ogre@@PAVWindowEventListener@2@U?$less@PAVRenderWindow@Ogre@@@std@@V?$allocator@U?$pair@QAVRenderWindow@Ogre@@PAVWindowEventListener@2@@std@@@5@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreWindowEventUtilities.cpp
