// roc 2007-03 00644720  unit: seg_00640000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00644720
//
// 00644720  56                   push esi
// 00644721  8b742408             mov esi, dword ptr [esp + 8]
// 00644725  85f6                 test esi, esi
// 00644727  57                   push edi
// 00644728  8bf9                 mov edi, ecx
// 0064472a  7d05                 jge 0x644731
// 0064472c  e87d9cfdff           call 0x61e3ae
// 00644731  3b7708               cmp esi, dword ptr [edi + 8]
// 00644734  7c0b                 jl 0x644741
// 00644736  6aff                 push -1
// 00644738  8d4601               lea eax, [esi + 1]
// 0064473b  50                   push eax
// 0064473c  e87ffeffff           call 0x6445c0
// 00644741  8b5704               mov edx, dword ptr [edi + 4]
// 00644744  8d0c76               lea ecx, [esi + esi*2]
// 00644747  8d048a               lea eax, [edx + ecx*4]
// 0064474a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0064474e  8b11                 mov edx, dword ptr [ecx]
// 00644750  8910                 mov dword ptr [eax], edx
// 00644752  8b5104               mov edx, dword ptr [ecx + 4]
// 00644755  895004               mov dword ptr [eax + 4], edx
// 00644758  8b4908               mov ecx, dword ptr [ecx + 8]
// 0064475b  5f                   pop edi
// 0064475c  894808               mov dword ptr [eax + 8], ecx
// 0064475f  5e                   pop esi
// 00644760  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarRecurrencePattern.cpp (function ?SetAtGrow@?$CArray@VCOleDateTime@ATL@@AAV12@@@QAEXHAAVCOleDateTime@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarRecurrencePattern.cpp
