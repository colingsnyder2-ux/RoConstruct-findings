// roc 2008-06 00717fb0  unit: CXTPPropertyGridItemEnum  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00717fb0
//
// 00717fb0  8bc1                 mov eax, ecx
// 00717fb2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00717fb6  c70024eb8500         mov dword ptr [eax], 0x85eb24
// 00717fbc  c7400400000000       mov dword ptr [eax + 4], 0
// 00717fc3  894808               mov dword ptr [eax + 8], ecx
// 00717fc6  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPWinThemeWrapper.cpp (function ??0CXTPWinThemeWrapper@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPWinThemeWrapper.cpp
