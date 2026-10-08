// roc 2009-06 00790720  unit: CXTPPropertyGridItemEnum  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00790720
//
// 00790720  8bc1                 mov eax, ecx
// 00790722  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00790726  c70064fb8f00         mov dword ptr [eax], 0x8ffb64
// 0079072c  c7400400000000       mov dword ptr [eax + 4], 0
// 00790733  894808               mov dword ptr [eax + 8], ecx
// 00790736  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPWinThemeWrapper.cpp (function ??0CXTPWinThemeWrapper@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPWinThemeWrapper.cpp
