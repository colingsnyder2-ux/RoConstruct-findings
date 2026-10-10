// roc 2008-06 00751ca0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00751ca0
//
// 00751ca0  8b01                 mov eax, dword ptr [ecx]
// 00751ca2  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 00751ca8  83ec10               sub esp, 0x10
// 00751cab  6a00                 push 0
// 00751cad  8d542404             lea edx, [esp + 4]
// 00751cb1  52                   push edx
// 00751cb2  8b542424             mov edx, dword ptr [esp + 0x24]
// 00751cb6  52                   push edx
// 00751cb7  8b542424             mov edx, dword ptr [esp + 0x24]
// 00751cbb  52                   push edx
// 00751cbc  ffd0                 call eax
// 00751cbe  85c0                 test eax, eax
// 00751cc0  7418                 je 0x751cda
// 00751cc2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00751cc6  8b10                 mov edx, dword ptr [eax]
// 00751cc8  8b5268               mov edx, dword ptr [edx + 0x68]
// 00751ccb  51                   push ecx
// 00751ccc  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00751cd0  51                   push ecx
// 00751cd1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00751cd5  51                   push ecx
// 00751cd6  8bc8                 mov ecx, eax
// 00751cd8  ffd2                 call edx
// 00751cda  83c410               add esp, 0x10
// 00751cdd  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRow.cpp (function ?OnMouseMove@CXTPReportRow@@UAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp
