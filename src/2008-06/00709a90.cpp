// roc 2008-06 00709a90  unit: CXTSplitterWnd  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00709a90
//
// 00709a90  8b442404             mov eax, dword ptr [esp + 4]
// 00709a94  85c0                 test eax, eax
// 00709a96  7415                 je 0x709aad
// 00709a98  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00709a9b  3b5020               cmp edx, dword ptr [eax + 0x20]
// 00709a9e  7508                 jne 0x709aa8
// 00709aa0  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00709aa3  3b4824               cmp ecx, dword ptr [eax + 0x24]
// 00709aa6  740b                 je 0x709ab3
// 00709aa8  33c0                 xor eax, eax
// 00709aaa  c20400               ret 4
// 00709aad  83792000             cmp dword ptr [ecx + 0x20], 0
// 00709ab1  75f5                 jne 0x709aa8
// 00709ab3  b801000000           mov eax, 1
// 00709ab8  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?IsEqual@TOOLITEM@CXTPToolTipContextToolTip@@QAEHPAU12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
