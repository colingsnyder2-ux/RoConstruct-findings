// roc 2008-06 006d10a0  unit: CXTPReportControl  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d10a0
//
// 006d10a0  56                   push esi
// 006d10a1  8bf1                 mov esi, ecx
// 006d10a3  e8c0fbfcff           call 0x6a0c68
// 006d10a8  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 006d10ae  85c9                 test ecx, ecx
// 006d10b0  7411                 je 0x6d10c3
// 006d10b2  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d10b6  8b01                 mov eax, dword ptr [ecx]
// 006d10b8  8b4068               mov eax, dword ptr [eax + 0x68]
// 006d10bb  52                   push edx
// 006d10bc  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d10c0  52                   push edx
// 006d10c1  ffd0                 call eax
// 006d10c3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006d10c7  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006d10cb  51                   push ecx
// 006d10cc  52                   push edx
// 006d10cd  8bce                 mov ecx, esi
// 006d10cf  e85c90ffff           call 0x6ca130
// 006d10d4  85c0                 test eax, eax
// 006d10d6  741a                 je 0x6d10f2
// 006d10d8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006d10dc  8b10                 mov edx, dword ptr [eax]
// 006d10de  8b9298000000         mov edx, dword ptr [edx + 0x98]
// 006d10e4  51                   push ecx
// 006d10e5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006d10e9  51                   push ecx
// 006d10ea  8bc8                 mov ecx, eax
// 006d10ec  ffd2                 call edx
// 006d10ee  5e                   pop esi
// 006d10ef  c20c00               ret 0xc
// 006d10f2  6aff                 push -1
// 006d10f4  8d442410             lea eax, [esp + 0x10]
// 006d10f8  50                   push eax
// 006d10f9  6afd                 push -3
// 006d10fb  6a00                 push 0
// 006d10fd  6a00                 push 0
// 006d10ff  6a00                 push 0
// 006d1101  8bce                 mov ecx, esi
// 006d1103  e8a8ecffff           call 0x6cfdb0
// 006d1108  5e                   pop esi
// 006d1109  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?OnLButtonDblClk@CXTPReportControl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
