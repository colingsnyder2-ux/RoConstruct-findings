// roc 2007-08 0065ad10  unit: CXTPReportControl  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065ad10
//
// 0065ad10  83ec24               sub esp, 0x24
// 0065ad13  56                   push esi
// 0065ad14  8bf1                 mov esi, ecx
// 0065ad16  8b4620               mov eax, dword ptr [esi + 0x20]
// 0065ad19  50                   push eax
// 0065ad1a  ff15bced7700         call dword ptr [0x77edbc]
// 0065ad20  85c0                 test eax, eax
// 0065ad22  7507                 jne 0x65ad2b
// 0065ad24  5e                   pop esi
// 0065ad25  83c424               add esp, 0x24
// 0065ad28  c21800               ret 0x18
// 0065ad2b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0065ad2f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0065ad33  8b542434             mov edx, dword ptr [esp + 0x34]
// 0065ad37  894c2414             mov dword ptr [esp + 0x14], ecx
// 0065ad3b  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0065ad3f  89442410             mov dword ptr [esp + 0x10], eax
// 0065ad43  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0065ad47  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0065ad4b  33c9                 xor ecx, ecx
// 0065ad4d  3bc1                 cmp eax, ecx
// 0065ad4f  89542418             mov dword ptr [esp + 0x18], edx
// 0065ad53  894c2420             mov dword ptr [esp + 0x20], ecx
// 0065ad57  894c2424             mov dword ptr [esp + 0x24], ecx
// 0065ad5b  740d                 je 0x65ad6a
// 0065ad5d  8b10                 mov edx, dword ptr [eax]
// 0065ad5f  8b4004               mov eax, dword ptr [eax + 4]
// 0065ad62  89542420             mov dword ptr [esp + 0x20], edx
// 0065ad66  89442424             mov dword ptr [esp + 0x24], eax
// 0065ad6a  8b542438             mov edx, dword ptr [esp + 0x38]
// 0065ad6e  8d4c2404             lea ecx, [esp + 4]
// 0065ad72  51                   push ecx
// 0065ad73  52                   push edx
// 0065ad74  8bce                 mov ecx, esi
// 0065ad76  e805ffffff           call 0x65ac80
// 0065ad7b  5e                   pop esi
// 0065ad7c  83c424               add esp, 0x24
// 0065ad7f  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ?SendMessageToParent@CXTPReportControl@@QBEJPAVCXTPReportRow@@PAVCXTPReportRecordItem@@PAVCXTPReportColumn@@IPAVCPoint@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
