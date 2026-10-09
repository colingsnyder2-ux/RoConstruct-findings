// roc 2012-06 00623270  unit: RBX::WedgeBuilder  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00623270
//
// 00623270  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00623274  85c9                 test ecx, ecx
// 00623276  762a                 jbe 0x6232a2
// 00623278  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0062327c  8b442404             mov eax, dword ptr [esp + 4]
// 00623280  85c0                 test eax, eax
// 00623282  7416                 je 0x62329a
// 00623284  d902                 fld dword ptr [edx]
// 00623286  d918                 fstp dword ptr [eax]
// 00623288  d94204               fld dword ptr [edx + 4]
// 0062328b  d95804               fstp dword ptr [eax + 4]
// 0062328e  d94208               fld dword ptr [edx + 8]
// 00623291  d95808               fstp dword ptr [eax + 8]
// 00623294  d9420c               fld dword ptr [edx + 0xc]
// 00623297  d9580c               fstp dword ptr [eax + 0xc]
// 0062329a  49                   dec ecx
// 0062329b  83c010               add eax, 0x10
// 0062329e  85c9                 test ecx, ecx
// 006232a0  77de                 ja 0x623280
// 006232a2  c3                   ret 
// library ogre-1.6.4/OgreBillboardSet.cpp (function ??$_Uninit_fill_n@PAU?$TRect@M@Ogre@@IU12@V?$allocator@U?$TRect@M@Ogre@@@std@@@std@@YAXPAU?$TRect@M@Ogre@@IABU12@AAV?$allocator@U?$TRect@M@Ogre@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreBillboardSet.cpp
