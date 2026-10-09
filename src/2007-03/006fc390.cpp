// roc 2007-03 006fc390  unit: seg_006f0000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006fc390
//
// 006fc390  c74424040f000000     mov dword ptr [esp + 4], 0xf
// 006fc398  ff2538ef7700         jmp dword ptr [0x77ef38]
// library xtp-11.2.2/Source\SkinFramework\XTPSkinManagerSchema.cpp (function ?GetScrollBarSizeBoxColor@CXTPSkinManagerSchema@@UAEKPAVCXTPSkinObjectFrame@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/SkinFramework/XTPSkinManagerSchema.cpp
