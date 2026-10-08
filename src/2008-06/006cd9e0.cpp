// from server: 100% by auto
// roc 2008-06 006cd9e0  unit: CXTPReportControl  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cd9e0
//
// 006cd9e0  56                   push esi
// 006cd9e1  8b7120               mov esi, dword ptr [ecx + 0x20]
// 006cd9e4  e87f32fdff           call 0x6a0c68
// 006cd9e9  56                   push esi
// 006cd9ea  ff15502d8000         call dword ptr [0x802d50]
// 006cd9f0  5e                   pop esi
// 006cd9f1  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnRButtonUp@CXTPReportControl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
