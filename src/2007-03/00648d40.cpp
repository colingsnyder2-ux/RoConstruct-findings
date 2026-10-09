// roc 2007-03 00648d40  unit: seg_00640000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00648d40
//
// 00648d40  83ec24               sub esp, 0x24
// 00648d43  56                   push esi
// 00648d44  8bf1                 mov esi, ecx
// 00648d46  8b4620               mov eax, dword ptr [esi + 0x20]
// 00648d49  50                   push eax
// 00648d4a  ff1574ed7700         call dword ptr [0x77ed74]
// 00648d50  85c0                 test eax, eax
// 00648d52  7507                 jne 0x648d5b
// 00648d54  5e                   pop esi
// 00648d55  83c424               add esp, 0x24
// 00648d58  c21800               ret 0x18
// 00648d5b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00648d5f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00648d63  8b542434             mov edx, dword ptr [esp + 0x34]
// 00648d67  894c2414             mov dword ptr [esp + 0x14], ecx
// 00648d6b  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00648d6f  89442410             mov dword ptr [esp + 0x10], eax
// 00648d73  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00648d77  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00648d7b  33c9                 xor ecx, ecx
// 00648d7d  3bc1                 cmp eax, ecx
// 00648d7f  89542418             mov dword ptr [esp + 0x18], edx
// 00648d83  894c2420             mov dword ptr [esp + 0x20], ecx
// 00648d87  894c2424             mov dword ptr [esp + 0x24], ecx
// 00648d8b  740d                 je 0x648d9a
// 00648d8d  8b10                 mov edx, dword ptr [eax]
// 00648d8f  8b4004               mov eax, dword ptr [eax + 4]
// 00648d92  89542420             mov dword ptr [esp + 0x20], edx
// 00648d96  89442424             mov dword ptr [esp + 0x24], eax
// 00648d9a  8b542438             mov edx, dword ptr [esp + 0x38]
// 00648d9e  8d4c2404             lea ecx, [esp + 4]
// 00648da2  51                   push ecx
// 00648da3  52                   push edx
// 00648da4  8bce                 mov ecx, esi
// 00648da6  e805ffffff           call 0x648cb0
// 00648dab  5e                   pop esi
// 00648dac  83c424               add esp, 0x24
// 00648daf  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ?SendMessageToParent@CXTPReportControl@@QBEJPAVCXTPReportRow@@PAVCXTPReportRecordItem@@PAVCXTPReportColumn@@IPAVCPoint@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
