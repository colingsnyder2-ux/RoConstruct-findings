// roc 2009-12 00829590  unit: CXTPReportHeader  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00829590
//
// 00829590  83ec10               sub esp, 0x10
// 00829593  56                   push esi
// 00829594  8bf1                 mov esi, ecx
// 00829596  e885edffff           call 0x828320
// 0082959b  8bc8                 mov ecx, eax
// 0082959d  e84e120700           call 0x89a7f0
// 008295a2  85c0                 test eax, eax
// 008295a4  7404                 je 0x8295aa
// 008295a6  8b442418             mov eax, dword ptr [esp + 0x18]
// 008295aa  39463c               cmp dword ptr [esi + 0x3c], eax
// 008295ad  7452                 je 0x829601
// 008295af  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008295b2  89463c               mov dword ptr [esi + 0x3c], eax
// 008295b5  e8c65effff           call 0x81f480
// 008295ba  ff1528cc9800         call dword ptr [0x98cc28]
// 008295c0  50                   push eax
// 008295c1  e864a5fcff           call 0x7f3b2a
// 008295c6  85c0                 test eax, eax
// 008295c8  7537                 jne 0x829601
// 008295ca  8b7624               mov esi, dword ptr [esi + 0x24]
// 008295cd  c744240410000000     mov dword ptr [esp + 4], 0x10
// 008295d5  c744240802000000     mov dword ptr [esp + 8], 2
// 008295dd  85f6                 test esi, esi
// 008295df  7506                 jne 0x8295e7
// 008295e1  8974240c             mov dword ptr [esp + 0xc], esi
// 008295e5  eb07                 jmp 0x8295ee
// 008295e7  8b4620               mov eax, dword ptr [esi + 0x20]
// 008295ea  8944240c             mov dword ptr [esp + 0xc], eax
// 008295ee  8d4c2404             lea ecx, [esp + 4]
// 008295f2  51                   push ecx
// 008295f3  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008295fb  ff1564b09800         call dword ptr [0x98b064]
// 00829601  5e                   pop esi
// 00829602  83c410               add esp, 0x10
// 00829605  c20400               ret 4
// copied from an identical function in another client (function ?SetHotTrackingColumn@CXTPReportHeader@@IAEXPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportHeader.cpp