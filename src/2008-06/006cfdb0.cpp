// from server: 100% by auto
// roc 2008-06 006cfdb0  unit: CXTPReportControl  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cfdb0
//
// 006cfdb0  83ec24               sub esp, 0x24
// 006cfdb3  56                   push esi
// 006cfdb4  8bf1                 mov esi, ecx
// 006cfdb6  8b4620               mov eax, dword ptr [esi + 0x20]
// 006cfdb9  50                   push eax
// 006cfdba  ff15502d8000         call dword ptr [0x802d50]
// 006cfdc0  85c0                 test eax, eax
// 006cfdc2  7507                 jne 0x6cfdcb
// 006cfdc4  5e                   pop esi
// 006cfdc5  83c424               add esp, 0x24
// 006cfdc8  c21800               ret 0x18
// 006cfdcb  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006cfdcf  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006cfdd3  8b542434             mov edx, dword ptr [esp + 0x34]
// 006cfdd7  894c2414             mov dword ptr [esp + 0x14], ecx
// 006cfddb  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 006cfddf  89442410             mov dword ptr [esp + 0x10], eax
// 006cfde3  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 006cfde7  894c241c             mov dword ptr [esp + 0x1c], ecx
// 006cfdeb  33c9                 xor ecx, ecx
// 006cfded  89542418             mov dword ptr [esp + 0x18], edx
// 006cfdf1  894c2420             mov dword ptr [esp + 0x20], ecx
// 006cfdf5  894c2424             mov dword ptr [esp + 0x24], ecx
// 006cfdf9  3bc1                 cmp eax, ecx
// 006cfdfb  740d                 je 0x6cfe0a
// 006cfdfd  8b10                 mov edx, dword ptr [eax]
// 006cfdff  8b4004               mov eax, dword ptr [eax + 4]
// 006cfe02  89542420             mov dword ptr [esp + 0x20], edx
// 006cfe06  89442424             mov dword ptr [esp + 0x24], eax
// 006cfe0a  8b542438             mov edx, dword ptr [esp + 0x38]
// 006cfe0e  8d4c2404             lea ecx, [esp + 4]
// 006cfe12  51                   push ecx
// 006cfe13  52                   push edx
// 006cfe14  8bce                 mov ecx, esi
// 006cfe16  e805ffffff           call 0x6cfd20
// 006cfe1b  5e                   pop esi
// 006cfe1c  83c424               add esp, 0x24
// 006cfe1f  c21800               ret 0x18
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?SendMessageToParent@CXTPReportControl@@QBEJPAVCXTPReportRow@@PAVCXTPReportRecordItem@@PAVCXTPReportColumn@@IPAVCPoint@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
