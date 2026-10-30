// from server: 100% by auto
// roc 2011-06 008b3300  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b3300
//
// 008b3300  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008b3304  8b542410             mov edx, dword ptr [esp + 0x10]
// 008b3308  56                   push esi
// 008b3309  8b742408             mov esi, dword ptr [esp + 8]
// 008b330d  57                   push edi
// 008b330e  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008b3312  897154               mov dword ptr [ecx + 0x54], esi
// 008b3315  897958               mov dword ptr [ecx + 0x58], edi
// 008b3318  89415c               mov dword ptr [ecx + 0x5c], eax
// 008b331b  6a01                 push 1
// 008b331d  895160               mov dword ptr [ecx + 0x60], edx
// 008b3320  2bd7                 sub edx, edi
// 008b3322  52                   push edx
// 008b3323  2bc6                 sub eax, esi
// 008b3325  50                   push eax
// 008b3326  57                   push edi
// 008b3327  56                   push esi
// 008b3328  e80371f5ff           call 0x80a430
// 008b332d  5f                   pop edi
// 008b332e  5e                   pop esi
// 008b332f  c21000               ret 0x10
// library xtp-15.2.1/Source\Calendar\XTPCalendarControl.cpp (function ?SetHoverRect@CXTPCalendarTip@@QAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarControl.cpp
