// roc 2007-08 00693c30  unit: CXTPStatusBar  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00693c30
//
// 00693c30  8b442404             mov eax, dword ptr [esp + 4]
// 00693c34  85c0                 test eax, eax
// 00693c36  7415                 je 0x693c4d
// 00693c38  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00693c3b  3b5020               cmp edx, dword ptr [eax + 0x20]
// 00693c3e  7508                 jne 0x693c48
// 00693c40  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00693c43  3b4824               cmp ecx, dword ptr [eax + 0x24]
// 00693c46  740b                 je 0x693c53
// 00693c48  33c0                 xor eax, eax
// 00693c4a  c20400               ret 4
// 00693c4d  83792000             cmp dword ptr [ecx + 0x20], 0
// 00693c51  75f5                 jne 0x693c48
// 00693c53  b801000000           mov eax, 1
// 00693c58  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPToolTipContext.cpp (function ?IsEqual@TOOLITEM@CXTPToolTipContextToolTip@@QAEHPAU12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPToolTipContext.cpp
