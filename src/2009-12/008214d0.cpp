// roc 2009-12 008214d0  unit: CXTPReportControl  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008214d0
//
// 008214d0  53                   push ebx
// 008214d1  55                   push ebp
// 008214d2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 008214d6  56                   push esi
// 008214d7  8bf1                 mov esi, ecx
// 008214d9  8d8634010000         lea eax, [esi + 0x134]
// 008214df  57                   push edi
// 008214e0  85c0                 test eax, eax
// 008214e2  7441                 je 0x821525
// 008214e4  83782000             cmp dword ptr [eax + 0x20], 0
// 008214e8  743b                 je 0x821525
// 008214ea  8b8654010000         mov eax, dword ptr [esi + 0x154]
// 008214f0  50                   push eax
// 008214f1  ff1564ca9800         call dword ptr [0x98ca64]
// 008214f7  85c0                 test eax, eax
// 008214f9  742a                 je 0x821525
// 008214fb  833dd4aeb90000       cmp dword ptr [0xb9aed4], 0
// 00821502  7521                 jne 0x821525
// 00821504  8b16                 mov edx, dword ptr [esi]
// 00821506  8b825c020000         mov eax, dword ptr [edx + 0x25c]
// 0082150c  55                   push ebp
// 0082150d  8bce                 mov ecx, esi
// 0082150f  c705d4aeb90001000000 mov dword ptr [0xb9aed4], 1
// 00821519  ffd0                 call eax
// 0082151b  c705d4aeb90000000000 mov dword ptr [0xb9aed4], 0
// 00821525  8b8e1c020000         mov ecx, dword ptr [esi + 0x21c]
// 0082152b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0082152f  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00821533  85c9                 test ecx, ecx
// 00821535  7412                 je 0x821549
// 00821537  83bec801000000       cmp dword ptr [esi + 0x1c8], 0
// 0082153e  7409                 je 0x821549
// 00821540  57                   push edi
// 00821541  53                   push ebx
// 00821542  55                   push ebp
// 00821543  56                   push esi
// 00821544  e8571f0400           call 0x8634a0
// 00821549  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0082154d  51                   push ecx
// 0082154e  57                   push edi
// 0082154f  53                   push ebx
// 00821550  55                   push ebp
// 00821551  8bce                 mov ecx, esi
// 00821553  e88224fdff           call 0x7f39da
// 00821558  5f                   pop edi
// 00821559  5e                   pop esi
// 0082155a  5d                   pop ebp
// 0082155b  5b                   pop ebx
// 0082155c  c21000               ret 0x10
// copied from an identical function in another client (function ?OnWndMsg@CXTPReportControl@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp