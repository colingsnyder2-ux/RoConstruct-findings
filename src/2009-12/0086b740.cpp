// roc 2009-12 0086b740  unit: CXTPPropertyGridItemEnum  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086b740
//
// 0086b740  8bc1                 mov eax, ecx
// 0086b742  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0086b746  c700ecff9f00         mov dword ptr [eax], 0x9fffec
// 0086b74c  c7400400000000       mov dword ptr [eax + 4], 0
// 0086b753  894808               mov dword ptr [eax + 8], ecx
// 0086b756  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPWinThemeWrapper.cpp (function ??0CXTPWinThemeWrapper@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPWinThemeWrapper.cpp
