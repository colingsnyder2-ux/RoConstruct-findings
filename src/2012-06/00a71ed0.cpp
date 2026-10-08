// from server: 100% by auto
// roc 2012-06 00a71ed0  unit: CXTPRibbonGroup  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a71ed0
//
// 00a71ed0  56                   push esi
// 00a71ed1  57                   push edi
// 00a71ed2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a71ed6  8bf1                 mov esi, ecx
// 00a71ed8  85ff                 test edi, edi
// 00a71eda  7d05                 jge 0xa71ee1
// 00a71edc  e8df04f1ff           call 0x9823c0
// 00a71ee1  3b7e08               cmp edi, dword ptr [esi + 8]
// 00a71ee4  7c0b                 jl 0xa71ef1
// 00a71ee6  6aff                 push -1
// 00a71ee8  8d4701               lea eax, [edi + 1]
// 00a71eeb  50                   push eax
// 00a71eec  e86f63f2ff           call 0x998260
// 00a71ef1  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a71ef4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a71ef8  8914b9               mov dword ptr [ecx + edi*4], edx
// 00a71efb  5f                   pop edi
// 00a71efc  5e                   pop esi
// 00a71efd  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarEventLabel.cpp (function ?SetAtGrow@?$CArray@II@@QAEXHI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarEventLabel.cpp
