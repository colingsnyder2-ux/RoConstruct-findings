// from server: 100% by auto
// roc 2012-06 00a1c650  unit: CXTPMenuBar::CControlMDIButton  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1c650
//
// 00a1c650  8b442404             mov eax, dword ptr [esp + 4]
// 00a1c654  c70010000000         mov dword ptr [eax], 0x10
// 00a1c65a  c7400410000000       mov dword ptr [eax + 4], 0x10
// 00a1c661  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPMenuBar.cpp (function ?GetSize@CControlMDIButton@CXTPMenuBar@@UAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMenuBar.cpp
