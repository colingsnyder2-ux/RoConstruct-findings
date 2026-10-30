// from server: 100% by auto
// roc 2007-08 006ce880  unit: CXTPReportPaintManager  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ce880
//
// 006ce880  8b81cc000000         mov eax, dword ptr [ecx + 0xcc]
// 006ce886  83f8ff               cmp eax, -1
// 006ce889  7506                 jne 0x6ce891
// 006ce88b  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 006ce891  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006ce895  50                   push eax
// 006ce896  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006ce89a  50                   push eax
// 006ce89b  e81020f6ff           call 0x6308b0
// 006ce8a0  c20800               ret 8
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportPaintManager.cpp (function ?FillGroupByControl@CXTPReportPaintManager@@UAEXPAVCDC@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportPaintManager.cpp
