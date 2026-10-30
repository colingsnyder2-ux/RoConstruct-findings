// from server: 100% by auto
// roc 2007-08 006d4400  unit: CXTPReportRow_Batch  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d4400
//
// 006d4400  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006d4404  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d4408  56                   push esi
// 006d4409  8b742408             mov esi, dword ptr [esp + 8]
// 006d440d  57                   push edi
// 006d440e  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006d4412  897154               mov dword ptr [ecx + 0x54], esi
// 006d4415  897958               mov dword ptr [ecx + 0x58], edi
// 006d4418  89415c               mov dword ptr [ecx + 0x5c], eax
// 006d441b  6a01                 push 1
// 006d441d  895160               mov dword ptr [ecx + 0x60], edx
// 006d4420  2bd7                 sub edx, edi
// 006d4422  52                   push edx
// 006d4423  2bc6                 sub eax, esi
// 006d4425  50                   push eax
// 006d4426  57                   push edi
// 006d4427  56                   push esi
// 006d4428  e807bcf5ff           call 0x630034
// 006d442d  5f                   pop edi
// 006d442e  5e                   pop esi
// 006d442f  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarControl.cpp (function ?SetHoverRect@CXTPCalendarTip@@QAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarControl.cpp
