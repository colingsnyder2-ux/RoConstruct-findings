// roc 2009-12 008a50b0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a50b0
//
// 008a50b0  8b01                 mov eax, dword ptr [ecx]
// 008a50b2  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 008a50b8  83ec10               sub esp, 0x10
// 008a50bb  6a00                 push 0
// 008a50bd  8d542404             lea edx, [esp + 4]
// 008a50c1  52                   push edx
// 008a50c2  8b542424             mov edx, dword ptr [esp + 0x24]
// 008a50c6  52                   push edx
// 008a50c7  8b542424             mov edx, dword ptr [esp + 0x24]
// 008a50cb  52                   push edx
// 008a50cc  ffd0                 call eax
// 008a50ce  85c0                 test eax, eax
// 008a50d0  7418                 je 0x8a50ea
// 008a50d2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008a50d6  8b10                 mov edx, dword ptr [eax]
// 008a50d8  8b5268               mov edx, dword ptr [edx + 0x68]
// 008a50db  51                   push ecx
// 008a50dc  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008a50e0  51                   push ecx
// 008a50e1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008a50e5  51                   push ecx
// 008a50e6  8bc8                 mov ecx, eax
// 008a50e8  ffd2                 call edx
// 008a50ea  83c410               add esp, 0x10
// 008a50ed  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnMouseMove@CXTPReportRow@@UAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp