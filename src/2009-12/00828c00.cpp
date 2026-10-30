// roc 2009-12 00828c00  unit: CXTPReportHeader  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00828c00
//
// 00828c00  8b542404             mov edx, dword ptr [esp + 4]
// 00828c04  56                   push esi
// 00828c05  8bf1                 mov esi, ecx
// 00828c07  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00828c0b  8b06                 mov eax, dword ptr [esi]
// 00828c0d  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 00828c13  51                   push ecx
// 00828c14  52                   push edx
// 00828c15  8bce                 mov ecx, esi
// 00828c17  ffd0                 call eax
// 00828c19  85c0                 test eax, eax
// 00828c1b  7c16                 jl 0x828c33
// 00828c1d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00828c20  85c9                 test ecx, ecx
// 00828c22  740f                 je 0x828c33
// 00828c24  3b4130               cmp eax, dword ptr [ecx + 0x30]
// 00828c27  7d0a                 jge 0x828c33
// 00828c29  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 00828c2c  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00828c2f  5e                   pop esi
// 00828c30  c20800               ret 8
// 00828c33  33c0                 xor eax, eax
// 00828c35  5e                   pop esi
// 00828c36  c20800               ret 8
// copied from an identical function in another client (function ?HitTest@CXTPReportHeader@@UBEPAVCXTPReportColumn@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportHeader.cpp