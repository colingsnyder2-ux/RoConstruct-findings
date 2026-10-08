// from server: 100% by auto
// roc 2008-06 00720270  unit: CXTPMenuBar::CControlMDIButton  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00720270
//
// 00720270  8b442404             mov eax, dword ptr [esp + 4]
// 00720274  c70010000000         mov dword ptr [eax], 0x10
// 0072027a  c7400410000000       mov dword ptr [eax + 4], 0x10
// 00720281  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ?GetSize@CControlMDIButton@CXTPMenuBar@@UAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
