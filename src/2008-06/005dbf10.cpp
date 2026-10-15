// roc 2008-06 005dbf10  unit: RBX::VPartInstance::?$FilteredSelection  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dbf10
//
// 005dbf10  d9442404             fld dword ptr [esp + 4]
// 005dbf14  d891ac010000         fcom dword ptr [ecx + 0x1ac]
// 005dbf1a  dfe0                 fnstsw ax
// 005dbf1c  f6c444               test ah, 0x44
// 005dbf1f  7b13                 jnp 0x5dbf34
// 005dbf21  d999ac010000         fstp dword ptr [ecx + 0x1ac]
// 005dbf27  c7442404d0a39700     mov dword ptr [esp + 4], 0x97a3d0
// 005dbf2f  e9cc1be3ff           jmp 0x40db00
// 005dbf34  ddd8                 fstp st(0)
// 005dbf36  c20400               ret 4
// library rbxgs/roc_unit_498526c4f91048e5.cpp (function ?setMaxHealth@Humanoid@RBX@@QAEXM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_unit_498526c4f91048e5.cpp
