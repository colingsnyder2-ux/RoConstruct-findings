// roc 2012-06 00993550  unit: CXTPCommandBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00993550
//
// 00993550  8b442404             mov eax, dword ptr [esp + 4]
// 00993554  c70000000000         mov dword ptr [eax], 0
// 0099355a  c7400400000000       mov dword ptr [eax + 4], 0
// 00993561  c20c00               ret 0xc
// library xtp-15.2.1/Source\Calendar\XTPCalendarPaintManager.cpp (function ?CalcEventSize@CXTPCalendarTimeLineViewPart@@UAE?AVCSize@@PAVCDC@@PAVCXTPCalendarTimeLineViewEvent@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarPaintManager.cpp
