// roc 2007-03 006fc3a0  unit: seg_006f0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006fc3a0
//
// 006fc3a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fc3a4  e867260200           call 0x71ea10
// 006fc3a9  f7d8                 neg eax
// 006fc3ab  1bc0                 sbb eax, eax
// 006fc3ad  2584a7d9ff           and eax, 0xffd9a784
// 006fc3b2  05f5f5f500           add eax, 0xf5f5f5
// 006fc3b7  c20400               ret 4
// library xtp-11.2.2/Source\SkinFramework\XTPSkinManagerSchema.cpp (function ?GetScrollBarSizeBoxColor@CXTPSkinManagerSchemaOffice2007@@MAEKPAVCXTPSkinObjectFrame@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/SkinFramework/XTPSkinManagerSchema.cpp
