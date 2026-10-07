// roc 2011-06 008ea2c0  unit: CXTColorBase  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ea2c0
//
// 008ea2c0  8b442404             mov eax, dword ptr [esp + 4]
// 008ea2c4  0fb6d0               movzx edx, al
// 008ea2c7  899168070000         mov dword ptr [ecx + 0x768], edx
// 008ea2cd  8bd0                 mov edx, eax
// 008ea2cf  c1ea08               shr edx, 8
// 008ea2d2  c1e810               shr eax, 0x10
// 008ea2d5  0fb6d2               movzx edx, dl
// 008ea2d8  0fb6c0               movzx eax, al
// 008ea2db  899170070000         mov dword ptr [ecx + 0x770], edx
// 008ea2e1  89816c070000         mov dword ptr [ecx + 0x76c], eax
// 008ea2e7  c744240400000000     mov dword ptr [esp + 4], 0
// 008ea2ef  e9f2fff1ff           jmp 0x80a2e6
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ?UpdateRGB@CXTPColorPageCustom@@IAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp
