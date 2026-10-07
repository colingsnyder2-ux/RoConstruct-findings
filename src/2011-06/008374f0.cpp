// roc 2011-06 008374f0  unit: CXTPReportControl  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008374f0
//
// 008374f0  83ec24               sub esp, 0x24
// 008374f3  56                   push esi
// 008374f4  8bf1                 mov esi, ecx
// 008374f6  8b4620               mov eax, dword ptr [esi + 0x20]
// 008374f9  50                   push eax
// 008374fa  ff15ec1ba400         call dword ptr [0xa41bec]
// 00837500  85c0                 test eax, eax
// 00837502  7507                 jne 0x83750b
// 00837504  5e                   pop esi
// 00837505  83c424               add esp, 0x24
// 00837508  c21800               ret 0x18
// 0083750b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0083750f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00837513  8b542434             mov edx, dword ptr [esp + 0x34]
// 00837517  894c2414             mov dword ptr [esp + 0x14], ecx
// 0083751b  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0083751f  89442410             mov dword ptr [esp + 0x10], eax
// 00837523  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00837527  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0083752b  33c9                 xor ecx, ecx
// 0083752d  89542418             mov dword ptr [esp + 0x18], edx
// 00837531  894c2420             mov dword ptr [esp + 0x20], ecx
// 00837535  894c2424             mov dword ptr [esp + 0x24], ecx
// 00837539  3bc1                 cmp eax, ecx
// 0083753b  740d                 je 0x83754a
// 0083753d  8b10                 mov edx, dword ptr [eax]
// 0083753f  8b4004               mov eax, dword ptr [eax + 4]
// 00837542  89542420             mov dword ptr [esp + 0x20], edx
// 00837546  89442424             mov dword ptr [esp + 0x24], eax
// 0083754a  8b542438             mov edx, dword ptr [esp + 0x38]
// 0083754e  8d4c2404             lea ecx, [esp + 4]
// 00837552  51                   push ecx
// 00837553  52                   push edx
// 00837554  8bce                 mov ecx, esi
// 00837556  e805ffffff           call 0x837460
// 0083755b  5e                   pop esi
// 0083755c  83c424               add esp, 0x24
// 0083755f  c21800               ret 0x18
// library xtp-15.2.1/Source\ReportControl\XTPReportControl.cpp (function ?SendMessageToParent@CXTPReportControl@@QBEJPAVCXTPReportRow@@PAVCXTPReportRecordItem@@PAVCXTPReportColumn@@IPAVCPoint@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportControl.cpp
