// roc 2012-06 009aca00  unit: CXTPReportControl  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009aca00
//
// 009aca00  56                   push esi
// 009aca01  8bf1                 mov esi, ecx
// 009aca03  8b4620               mov eax, dword ptr [esi + 0x20]
// 009aca06  57                   push edi
// 009aca07  8b3d503ab200         mov edi, dword ptr [0xb23a50]
// 009aca0d  50                   push eax
// 009aca0e  ffd7                 call edi
// 009aca10  50                   push eax
// 009aca11  e8505cfdff           call 0x982666
// 009aca16  50                   push eax
// 009aca17  e8be60fdff           call 0x982ada
// 009aca1c  50                   push eax
// 009aca1d  e8c45afdff           call 0x9824e6
// 009aca22  83c408               add esp, 8
// 009aca25  85c0                 test eax, eax
// 009aca27  741a                 je 0x9aca43
// 009aca29  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009aca2c  51                   push ecx
// 009aca2d  ffd7                 call edi
// 009aca2f  50                   push eax
// 009aca30  e8315cfdff           call 0x982666
// 009aca35  8b10                 mov edx, dword ptr [eax]
// 009aca37  5f                   pop edi
// 009aca38  5e                   pop esi
// 009aca39  8bc8                 mov ecx, eax
// 009aca3b  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 009aca41  ffe2                 jmp edx
// 009aca43  5f                   pop edi
// 009aca44  33c0                 xor eax, eax
// 009aca46  5e                   pop esi
// 009aca47  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\Calendar\XTPCalendarControl.cpp (function ?GetScrollBarCtrl@CXTPCalendarControl@@MBEPAVCScrollBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Calendar/XTPCalendarControl.cpp
