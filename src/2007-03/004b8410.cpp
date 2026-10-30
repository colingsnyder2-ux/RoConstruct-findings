// from server: 100% by auto
// roc 2007-03 004b8410  unit: seg_004b0000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b8410
//
// 004b8410  83ec20               sub esp, 0x20
// 004b8413  56                   push esi
// 004b8414  8d442414             lea eax, [esp + 0x14]
// 004b8418  50                   push eax
// 004b8419  8bf1                 mov esi, ecx
// 004b841b  e810e6ffff           call 0x4b6a30
// 004b8420  8d4c2408             lea ecx, [esp + 8]
// 004b8424  51                   push ecx
// 004b8425  e806e6ffff           call 0x4b6a30
// 004b842a  83c408               add esp, 8
// 004b842d  8d542404             lea edx, [esp + 4]
// 004b8431  52                   push edx
// 004b8432  8d442418             lea eax, [esp + 0x18]
// 004b8436  50                   push eax
// 004b8437  8bce                 mov ecx, esi
// 004b8439  e842e4ffff           call 0x4b6880
// 004b843e  5e                   pop esi
// 004b843f  83c420               add esp, 0x20
// 004b8442  c3                   ret 

// from server: 55% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreResourceGroupManager.cpp