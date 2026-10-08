// from server: 100% by auto
// roc 2012-06 009afb00  unit: CXTPReportControl  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009afb00
//
// 009afb00  83ec24               sub esp, 0x24
// 009afb03  56                   push esi
// 009afb04  8bf1                 mov esi, ecx
// 009afb06  8b4620               mov eax, dword ptr [esi + 0x20]
// 009afb09  50                   push eax
// 009afb0a  ff15143bb200         call dword ptr [0xb23b14]
// 009afb10  85c0                 test eax, eax
// 009afb12  7507                 jne 0x9afb1b
// 009afb14  5e                   pop esi
// 009afb15  83c424               add esp, 0x24
// 009afb18  c21800               ret 0x18
// 009afb1b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 009afb1f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 009afb23  8b542434             mov edx, dword ptr [esp + 0x34]
// 009afb27  894c2414             mov dword ptr [esp + 0x14], ecx
// 009afb2b  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 009afb2f  89442410             mov dword ptr [esp + 0x10], eax
// 009afb33  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 009afb37  894c241c             mov dword ptr [esp + 0x1c], ecx
// 009afb3b  33c9                 xor ecx, ecx
// 009afb3d  89542418             mov dword ptr [esp + 0x18], edx
// 009afb41  894c2420             mov dword ptr [esp + 0x20], ecx
// 009afb45  894c2424             mov dword ptr [esp + 0x24], ecx
// 009afb49  3bc1                 cmp eax, ecx
// 009afb4b  740d                 je 0x9afb5a
// 009afb4d  8b10                 mov edx, dword ptr [eax]
// 009afb4f  8b4004               mov eax, dword ptr [eax + 4]
// 009afb52  89542420             mov dword ptr [esp + 0x20], edx
// 009afb56  89442424             mov dword ptr [esp + 0x24], eax
// 009afb5a  8b542438             mov edx, dword ptr [esp + 0x38]
// 009afb5e  8d4c2404             lea ecx, [esp + 4]
// 009afb62  51                   push ecx
// 009afb63  52                   push edx
// 009afb64  8bce                 mov ecx, esi
// 009afb66  e805ffffff           call 0x9afa70
// 009afb6b  5e                   pop esi
// 009afb6c  83c424               add esp, 0x24
// 009afb6f  c21800               ret 0x18
// library xtp-15.2.1/Source\ReportControl\XTPReportControl.cpp (function ?SendMessageToParent@CXTPReportControl@@QBEJPAVCXTPReportRow@@PAVCXTPReportRecordItem@@PAVCXTPReportColumn@@IPAVCPoint@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportControl.cpp
