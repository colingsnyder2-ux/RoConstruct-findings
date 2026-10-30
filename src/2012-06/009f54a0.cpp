// roc 2012-06 009f54a0  unit: CXTPPropertyGridItemEnum  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f54a0
//
// 009f54a0  8bc1                 mov eax, ecx
// 009f54a2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009f54a6  c700f4a3c100         mov dword ptr [eax], 0xc1a3f4
// 009f54ac  c7400400000000       mov dword ptr [eax + 4], 0
// 009f54b3  894808               mov dword ptr [eax + 8], ecx
// 009f54b6  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPWinThemeWrapper.cpp (function ??0CXTPWinThemeWrapper@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPWinThemeWrapper.cpp
