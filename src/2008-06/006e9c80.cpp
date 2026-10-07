// roc 2008-06 006e9c80  unit: CXTPControlColorSelector  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e9c80
//
// 006e9c80  8b442404             mov eax, dword ptr [esp + 4]
// 006e9c84  c70094000000         mov dword ptr [eax], 0x94
// 006e9c8a  c740045e000000       mov dword ptr [eax + 4], 0x5e
// 006e9c91  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?GetSize@CXTPControlColorSelector@@MAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
