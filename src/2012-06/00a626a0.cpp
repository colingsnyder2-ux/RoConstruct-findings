// from server: 100% by auto
// roc 2012-06 00a626a0  unit: CXTColorBase  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a626a0
//
// 00a626a0  8b442404             mov eax, dword ptr [esp + 4]
// 00a626a4  0fb6d0               movzx edx, al
// 00a626a7  899168070000         mov dword ptr [ecx + 0x768], edx
// 00a626ad  8bd0                 mov edx, eax
// 00a626af  c1ea08               shr edx, 8
// 00a626b2  c1e810               shr eax, 0x10
// 00a626b5  0fb6d2               movzx edx, dl
// 00a626b8  0fb6c0               movzx eax, al
// 00a626bb  899170070000         mov dword ptr [ecx + 0x770], edx
// 00a626c1  89816c070000         mov dword ptr [ecx + 0x76c], eax
// 00a626c7  c744240400000000     mov dword ptr [esp + 4], 0
// 00a626cf  e9c8fcf1ff           jmp 0x98239c
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ?UpdateRGB@CXTPColorPageCustom@@IAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp
