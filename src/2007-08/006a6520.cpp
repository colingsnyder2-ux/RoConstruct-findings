// roc 2007-08 006a6520  unit: CXTPMenuBar::CControlMDIButton  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a6520
//
// 006a6520  8b442404             mov eax, dword ptr [esp + 4]
// 006a6524  c70010000000         mov dword ptr [eax], 0x10
// 006a652a  c7400410000000       mov dword ptr [eax + 4], 0x10
// 006a6531  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPMenuBar.cpp (function ?GetSize@CControlMDIButton@CXTPMenuBar@@UAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPMenuBar.cpp
