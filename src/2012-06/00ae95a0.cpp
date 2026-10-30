// roc 2012-06 00ae95a0  unit: seg_00ae0000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae95a0
//
// 00ae95a0  b9b063e100           mov ecx, 0xe163b0
// 00ae95a5  e8c6e9d8ff           call 0x877f70
// 00ae95aa  a3b463e100           mov dword ptr [0xe163b4], eax
// 00ae95af  c6401101             mov byte ptr [eax + 0x11], 1
// 00ae95b3  a1b463e100           mov eax, dword ptr [0xe163b4]
// 00ae95b8  894004               mov dword ptr [eax + 4], eax
// 00ae95bb  a1b463e100           mov eax, dword ptr [0xe163b4]
// 00ae95c0  8900                 mov dword ptr [eax], eax
// 00ae95c2  a1b463e100           mov eax, dword ptr [0xe163b4]
// 00ae95c7  894008               mov dword ptr [eax + 8], eax
// 00ae95ca  685014b100           push 0xb11450
// 00ae95cf  c705b863e10000000000 mov dword ptr [0xe163b8], 0
// 00ae95d9  e8179ce9ff           call 0x9831f5
// 00ae95de  59                   pop ecx
// 00ae95df  c3                   ret 
// library ogre-1.6.4/OgrePass.cpp (function ??__E?msDirtyHashList@Pass@Ogre@@1V?$set@PAVPass@Ogre@@U?$less@PAVPass@Ogre@@@std@@V?$allocator@PAVPass@Ogre@@@4@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgrePass.cpp
