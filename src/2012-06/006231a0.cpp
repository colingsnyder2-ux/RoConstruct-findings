// roc 2012-06 006231a0  unit: RBX::WedgeBuilder  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006231a0
//
// 006231a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006231a4  8b542408             mov edx, dword ptr [esp + 8]
// 006231a8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006231ac  3bca                 cmp ecx, edx
// 006231ae  7424                 je 0x6231d4
// 006231b0  85c0                 test eax, eax
// 006231b2  7416                 je 0x6231ca
// 006231b4  d901                 fld dword ptr [ecx]
// 006231b6  d918                 fstp dword ptr [eax]
// 006231b8  d94104               fld dword ptr [ecx + 4]
// 006231bb  d95804               fstp dword ptr [eax + 4]
// 006231be  d94108               fld dword ptr [ecx + 8]
// 006231c1  d95808               fstp dword ptr [eax + 8]
// 006231c4  d9410c               fld dword ptr [ecx + 0xc]
// 006231c7  d9580c               fstp dword ptr [eax + 0xc]
// 006231ca  83c110               add ecx, 0x10
// 006231cd  83c010               add eax, 0x10
// 006231d0  3bca                 cmp ecx, edx
// 006231d2  75dc                 jne 0x6231b0
// 006231d4  c3                   ret 
// library ogre-1.6.4/OgreBillboard.cpp (function ??$_Uninit_copy@PBU?$TRect@M@Ogre@@PAU12@V?$allocator@U?$TRect@M@Ogre@@@std@@@std@@YAPAU?$TRect@M@Ogre@@PBU12@0PAU12@AAV?$allocator@U?$TRect@M@Ogre@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreBillboard.cpp
