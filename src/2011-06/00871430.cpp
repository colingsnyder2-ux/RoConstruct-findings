// from server: 100% by auto
// roc 2011-06 00871430  unit: CXTColorDialog  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00871430
//
// 00871430  8b442404             mov eax, dword ptr [esp + 4]
// 00871434  85c0                 test eax, eax
// 00871436  7415                 je 0x87144d
// 00871438  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0087143b  3b5020               cmp edx, dword ptr [eax + 0x20]
// 0087143e  7508                 jne 0x871448
// 00871440  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00871443  3b4824               cmp ecx, dword ptr [eax + 0x24]
// 00871446  740b                 je 0x871453
// 00871448  33c0                 xor eax, eax
// 0087144a  c20400               ret 4
// 0087144d  83792000             cmp dword ptr [ecx + 0x20], 0
// 00871451  75f5                 jne 0x871448
// 00871453  b801000000           mov eax, 1
// 00871458  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?IsEqual@TOOLITEM@CXTPToolTipContextToolTip@@QAEHPAU12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp
