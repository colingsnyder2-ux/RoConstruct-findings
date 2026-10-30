// roc 2010-06 0081f740  unit: CXTPPropertyGridItemEnum  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081f740
//
// 0081f740  8bc1                 mov eax, ecx
// 0081f742  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0081f746  c700e442a600         mov dword ptr [eax], 0xa642e4
// 0081f74c  c7400400000000       mov dword ptr [eax + 4], 0
// 0081f753  894808               mov dword ptr [eax + 8], ecx
// 0081f756  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPWinThemeWrapper.cpp (function ??0CXTPWinThemeWrapper@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPWinThemeWrapper.cpp
