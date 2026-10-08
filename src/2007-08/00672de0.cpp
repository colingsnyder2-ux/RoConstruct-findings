// from server: 100% by auto
// roc 2007-08 00672de0  unit: CXTPControlColorSelector  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00672de0
//
// 00672de0  8b442404             mov eax, dword ptr [esp + 4]
// 00672de4  c70094000000         mov dword ptr [eax], 0x94
// 00672dea  c740045e000000       mov dword ptr [eax + 4], 0x5e
// 00672df1  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlPopupColor.cpp (function ?GetSize@CXTPControlColorSelector@@MAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlPopupColor.cpp
