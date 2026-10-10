// roc 2008-06 006cccc0  unit: CXTPReportControl  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cccc0
//
// 006cccc0  56                   push esi
// 006cccc1  8bf1                 mov esi, ecx
// 006cccc3  8b4620               mov eax, dword ptr [esi + 0x20]
// 006cccc6  57                   push edi
// 006cccc7  8b3df82d8000         mov edi, dword ptr [0x802df8]
// 006ccccd  50                   push eax
// 006cccce  ffd7                 call edi
// 006cccd0  50                   push eax
// 006cccd1  e8083ffdff           call 0x6a0bde
// 006cccd6  50                   push eax
// 006cccd7  e8da42fdff           call 0x6a0fb6
// 006cccdc  50                   push eax
// 006cccdd  e8443ffdff           call 0x6a0c26
// 006ccce2  83c408               add esp, 8
// 006ccce5  85c0                 test eax, eax
// 006ccce7  741a                 je 0x6ccd03
// 006ccce9  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006cccec  51                   push ecx
// 006ccced  ffd7                 call edi
// 006cccef  50                   push eax
// 006cccf0  e8e93efdff           call 0x6a0bde
// 006cccf5  8b10                 mov edx, dword ptr [eax]
// 006cccf7  5f                   pop edi
// 006cccf8  5e                   pop esi
// 006cccf9  8bc8                 mov ecx, eax
// 006cccfb  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 006ccd01  ffe2                 jmp edx
// 006ccd03  5f                   pop edi
// 006ccd04  33c0                 xor eax, eax
// 006ccd06  5e                   pop esi
// 006ccd07  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Calendar\XTPCalendarControl.cpp (function ?GetScrollBarCtrl@CXTPCalendarControl@@MBEPAVCScrollBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Calendar/XTPCalendarControl.cpp
