// from server: 100% by auto
// roc 2012-06 00a2b780  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2b780
//
// 00a2b780  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a2b784  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a2b788  56                   push esi
// 00a2b789  8b742408             mov esi, dword ptr [esp + 8]
// 00a2b78d  57                   push edi
// 00a2b78e  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00a2b792  897154               mov dword ptr [ecx + 0x54], esi
// 00a2b795  897958               mov dword ptr [ecx + 0x58], edi
// 00a2b798  89415c               mov dword ptr [ecx + 0x5c], eax
// 00a2b79b  6a01                 push 1
// 00a2b79d  895160               mov dword ptr [ecx + 0x60], edx
// 00a2b7a0  2bd7                 sub edx, edi
// 00a2b7a2  52                   push edx
// 00a2b7a3  2bc6                 sub eax, esi
// 00a2b7a5  50                   push eax
// 00a2b7a6  57                   push edi
// 00a2b7a7  56                   push esi
// 00a2b7a8  e82d6df5ff           call 0x9824da
// 00a2b7ad  5f                   pop edi
// 00a2b7ae  5e                   pop esi
// 00a2b7af  c21000               ret 0x10
// library xtp-15.2.1/Source\Calendar\XTPCalendarControl.cpp (function ?SetHoverRect@CXTPCalendarTip@@QAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarControl.cpp
