// roc 2011-06 0087cf00  unit: CXTPPropertyGridItemEnum  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087cf00
//
// 0087cf00  8bc1                 mov eax, ecx
// 0087cf02  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0087cf06  c70038edac00         mov dword ptr [eax], 0xaced38
// 0087cf0c  c7400400000000       mov dword ptr [eax + 4], 0
// 0087cf13  894808               mov dword ptr [eax + 8], ecx
// 0087cf16  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPWinThemeWrapper.cpp (function ??0CXTPWinThemeWrapper@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPWinThemeWrapper.cpp
