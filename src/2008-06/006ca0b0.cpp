// roc 2008-06 006ca0b0  unit: CXTPReportControl  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ca0b0
//
// 006ca0b0  8b442404             mov eax, dword ptr [esp + 4]
// 006ca0b4  56                   push esi
// 006ca0b5  8bf1                 mov esi, ecx
// 006ca0b7  85c0                 test eax, eax
// 006ca0b9  7d02                 jge 0x6ca0bd
// 006ca0bb  33c0                 xor eax, eax
// 006ca0bd  3b860c010000         cmp eax, dword ptr [esi + 0x10c]
// 006ca0c3  7425                 je 0x6ca0ea
// 006ca0c5  83be1801000000       cmp dword ptr [esi + 0x118], 0
// 006ca0cc  89860c010000         mov dword ptr [esi + 0x10c], eax
// 006ca0d2  750a                 jne 0x6ca0de
// 006ca0d4  6a01                 push 1
// 006ca0d6  50                   push eax
// 006ca0d7  6a00                 push 0
// 006ca0d9  e842210f00           call 0x7bc220
// 006ca0de  8b06                 mov eax, dword ptr [esi]
// 006ca0e0  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 006ca0e6  8bce                 mov ecx, esi
// 006ca0e8  ffd2                 call edx
// 006ca0ea  5e                   pop esi
// 006ca0eb  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?SetLeftOffset@CXTPReportControl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
