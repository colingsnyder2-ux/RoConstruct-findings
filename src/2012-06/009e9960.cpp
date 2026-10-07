// roc 2012-06 009e9960  unit: CXTColorDialog  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e9960
//
// 009e9960  8b442404             mov eax, dword ptr [esp + 4]
// 009e9964  85c0                 test eax, eax
// 009e9966  7415                 je 0x9e997d
// 009e9968  8b5120               mov edx, dword ptr [ecx + 0x20]
// 009e996b  3b5020               cmp edx, dword ptr [eax + 0x20]
// 009e996e  7508                 jne 0x9e9978
// 009e9970  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 009e9973  3b4824               cmp ecx, dword ptr [eax + 0x24]
// 009e9976  740b                 je 0x9e9983
// 009e9978  33c0                 xor eax, eax
// 009e997a  c20400               ret 4
// 009e997d  83792000             cmp dword ptr [ecx + 0x20], 0
// 009e9981  75f5                 jne 0x9e9978
// 009e9983  b801000000           mov eax, 1
// 009e9988  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?IsEqual@TOOLITEM@CXTPToolTipContextToolTip@@QAEHPAU12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp
