// roc 2012-06 009cb200  unit: CXTPControlColorSelector  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cb200
//
// 009cb200  8b442404             mov eax, dword ptr [esp + 4]
// 009cb204  c70094000000         mov dword ptr [eax], 0x94
// 009cb20a  c740045e000000       mov dword ptr [eax + 4], 0x5e
// 009cb211  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPControlPopupColor.cpp (function ?GetSize@CXTPControlColorSelector@@MAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlPopupColor.cpp
