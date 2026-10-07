// roc 2012-06 00a69700  unit: CXTCaptionTheme  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a69700
//
// 00a69700  56                   push esi
// 00a69701  8bf1                 mov esi, ecx
// 00a69703  e88810b3ff           call 0x59a790
// 00a69708  e85341f5ff           call 0x9bd860
// 00a6970d  6a10                 push 0x10
// 00a6970f  8bc8                 mov ecx, eax
// 00a69711  e8ca38f5ff           call 0x9bcfe0
// 00a69716  894618               mov dword ptr [esi + 0x18], eax
// 00a69719  e84241f5ff           call 0x9bd860
// 00a6971e  6a14                 push 0x14
// 00a69720  8bc8                 mov ecx, eax
// 00a69722  e8b938f5ff           call 0x9bcfe0
// 00a69727  894624               mov dword ptr [esi + 0x24], eax
// 00a6972a  5e                   pop esi
// 00a6972b  c3                   ret 
// library xtp-13.2.1/Source\Controls\XTCaptionTheme.cpp (function ?RefreshMetrics@CXTCaptionTheme@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTCaptionTheme.cpp
