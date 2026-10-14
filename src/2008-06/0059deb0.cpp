// roc 2008-06 0059deb0  unit: VCRenderSettings::?$EnumPropDescriptor  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059deb0
//
// 0059deb0  d981e8010000         fld dword ptr [ecx + 0x1e8]
// 0059deb6  d9442404             fld dword ptr [esp + 4]
// 0059deba  dde1                 fucom st(1)
// 0059debc  dfe0                 fnstsw ax
// 0059debe  ddd9                 fstp st(1)
// 0059dec0  f6c444               test ah, 0x44
// 0059dec3  7b13                 jnp 0x59ded8
// 0059dec5  d999e8010000         fstp dword ptr [ecx + 0x1e8]
// 0059decb  c744240428619700     mov dword ptr [esp + 4], 0x976128
// 0059ded3  e928fce6ff           jmp 0x40db00
// 0059ded8  ddd8                 fstp st(0)
// 0059deda  c20400               ret 4
// library rbxgs-dll/v8datamodel\PartInstance.cpp (function ?setAlphaModifier@PartInstance@RBX@@QAEXM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll v8datamodel/PartInstance.cpp
