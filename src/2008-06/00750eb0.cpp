// from server: 100% by auto
// roc 2008-06 00750eb0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00750eb0
//
// 00750eb0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00750eb4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00750eb8  56                   push esi
// 00750eb9  8b742408             mov esi, dword ptr [esp + 8]
// 00750ebd  57                   push edi
// 00750ebe  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00750ec2  897154               mov dword ptr [ecx + 0x54], esi
// 00750ec5  897958               mov dword ptr [ecx + 0x58], edi
// 00750ec8  89415c               mov dword ptr [ecx + 0x5c], eax
// 00750ecb  6a01                 push 1
// 00750ecd  895160               mov dword ptr [ecx + 0x60], edx
// 00750ed0  2bd7                 sub edx, edi
// 00750ed2  52                   push edx
// 00750ed3  2bc6                 sub eax, esi
// 00750ed5  50                   push eax
// 00750ed6  57                   push edi
// 00750ed7  56                   push esi
// 00750ed8  e86ffbf4ff           call 0x6a0a4c
// 00750edd  5f                   pop edi
// 00750ede  5e                   pop esi
// 00750edf  c21000               ret 0x10
// library xtp-11.2.2/Source\Calendar\XTPCalendarControl.cpp (function ?SetHoverRect@CXTPCalendarTip@@QAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarControl.cpp
