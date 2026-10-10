// roc 2008-06 006cddd0  unit: CXTPReportControl  size: 417 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cddd0
//
// 006cddd0  83ec18               sub esp, 0x18
// 006cddd3  56                   push esi
// 006cddd4  8bf1                 mov esi, ecx
// 006cddd6  57                   push edi
// 006cddd7  8dbe34010000         lea edi, [esi + 0x134]
// 006cdddd  85ff                 test edi, edi
// 006cdddf  0f84ac000000         je 0x6cde91
// 006cdde5  837f2000             cmp dword ptr [edi + 0x20], 0
// 006cdde9  0f84a2000000         je 0x6cde91
// 006cddef  8b8654010000         mov eax, dword ptr [esi + 0x154]
// 006cddf5  50                   push eax
// 006cddf6  ff153c2d8000         call dword ptr [0x802d3c]
// 006cddfc  85c0                 test eax, eax
// 006cddfe  0f848d000000         je 0x6cde91
// 006cde04  8d4c2408             lea ecx, [esp + 8]
// 006cde08  51                   push ecx
// 006cde09  ff159c2d8000         call dword ptr [0x802d9c]
// 006cde0f  8b868c010000         mov eax, dword ptr [esi + 0x18c]
// 006cde15  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 006cde1b  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 006cde21  89542410             mov dword ptr [esp + 0x10], edx
// 006cde25  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 006cde2b  89442414             mov dword ptr [esp + 0x14], eax
// 006cde2f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006cde33  894c2418             mov dword ptr [esp + 0x18], ecx
// 006cde37  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006cde3b  50                   push eax
// 006cde3c  89542420             mov dword ptr [esp + 0x20], edx
// 006cde40  51                   push ecx
// 006cde41  8d542418             lea edx, [esp + 0x18]
// 006cde45  52                   push edx
// 006cde46  ff152c2d8000         call dword ptr [0x802d2c]
// 006cde4c  85c0                 test eax, eax
// 006cde4e  7516                 jne 0x6cde66
// 006cde50  50                   push eax
// 006cde51  8d8e9c010000         lea ecx, [esi + 0x19c]
// 006cde57  ff15b83e8000         call dword ptr [0x803eb8]
// 006cde5d  6a00                 push 0
// 006cde5f  8bcf                 mov ecx, edi
// 006cde61  e8aa4d0800           call 0x752c10
// 006cde66  8b442424             mov eax, dword ptr [esp + 0x24]
// 006cde6a  3d05020000           cmp eax, 0x205
// 006cde6f  773e                 ja 0x6cdeaf
// 006cde71  3d04020000           cmp eax, 0x204
// 006cde76  7310                 jae 0x6cde88
// 006cde78  3d04010000           cmp eax, 0x104
// 006cde7d  771a                 ja 0x6cde99
// 006cde7f  7407                 je 0x6cde88
// 006cde81  3d00010000           cmp eax, 0x100
// 006cde86  7509                 jne 0x6cde91
// 006cde88  6a00                 push 0
// 006cde8a  8bcf                 mov ecx, edi
// 006cde8c  e87f4d0800           call 0x752c10
// 006cde91  5f                   pop edi
// 006cde92  5e                   pop esi
// 006cde93  83c418               add esp, 0x18
// 006cde96  c20400               ret 4
// 006cde99  3d01020000           cmp eax, 0x201
// 006cde9e  72f1                 jb 0x6cde91
// 006cdea0  3d02020000           cmp eax, 0x202
// 006cdea5  76e1                 jbe 0x6cde88
// 006cdea7  5f                   pop edi
// 006cdea8  5e                   pop esi
// 006cdea9  83c418               add esp, 0x18
// 006cdeac  c20400               ret 4
// 006cdeaf  05f9fdffff           add eax, 0xfffffdf9
// 006cdeb4  3d9c000000           cmp eax, 0x9c
// 006cdeb9  77d6                 ja 0x6cde91
// 006cdebb  0fb680d4de6c00       movzx eax, byte ptr [eax + 0x6cded4]
// 006cdec2  ff2485ccde6c00       jmp dword ptr [eax*4 + 0x6cdecc]
// 006cdec9  8d4900               lea ecx, [ecx]
// 006cdecc  88de                 mov dh, bl
// 006cdece  6c                   insb byte ptr es:[edi], dx
// 006cdecf  0091de6c0000         add byte ptr [ecx + 0x6cde], dl
// 006cded5  0001                 add byte ptr [ecx], al
// 006cded7  0001                 add byte ptr [ecx], al
// 006cded9  0101                 add dword ptr [ecx], eax
// 006cdedb  0101                 add dword ptr [ecx], eax
// 006cdedd  0101                 add dword ptr [ecx], eax
// 006cdedf  0101                 add dword ptr [ecx], eax
// 006cdee1  0101                 add dword ptr [ecx], eax
// 006cdee3  0101                 add dword ptr [ecx], eax
// 006cdee5  0101                 add dword ptr [ecx], eax
// 006cdee7  0101                 add dword ptr [ecx], eax
// 006cdee9  0101                 add dword ptr [ecx], eax
// 006cdeeb  0101                 add dword ptr [ecx], eax
// 006cdeed  0101                 add dword ptr [ecx], eax
// 006cdeef  0101                 add dword ptr [ecx], eax
// 006cdef1  0101                 add dword ptr [ecx], eax
// 006cdef3  0101                 add dword ptr [ecx], eax
// 006cdef5  0101                 add dword ptr [ecx], eax
// 006cdef7  0101                 add dword ptr [ecx], eax
// 006cdef9  0101                 add dword ptr [ecx], eax
// 006cdefb  0101                 add dword ptr [ecx], eax
// 006cdefd  0101                 add dword ptr [ecx], eax
// 006cdeff  0101                 add dword ptr [ecx], eax
// 006cdf01  0101                 add dword ptr [ecx], eax
// 006cdf03  0101                 add dword ptr [ecx], eax
// 006cdf05  0101                 add dword ptr [ecx], eax
// 006cdf07  0101                 add dword ptr [ecx], eax
// 006cdf09  0101                 add dword ptr [ecx], eax
// 006cdf0b  0101                 add dword ptr [ecx], eax
// 006cdf0d  0101                 add dword ptr [ecx], eax
// 006cdf0f  0101                 add dword ptr [ecx], eax
// 006cdf11  0101                 add dword ptr [ecx], eax
// 006cdf13  0101                 add dword ptr [ecx], eax
// 006cdf15  0101                 add dword ptr [ecx], eax
// 006cdf17  0101                 add dword ptr [ecx], eax
// 006cdf19  0101                 add dword ptr [ecx], eax
// 006cdf1b  0101                 add dword ptr [ecx], eax
// 006cdf1d  0101                 add dword ptr [ecx], eax
// 006cdf1f  0101                 add dword ptr [ecx], eax
// 006cdf21  0101                 add dword ptr [ecx], eax
// 006cdf23  0101                 add dword ptr [ecx], eax
// 006cdf25  0101                 add dword ptr [ecx], eax
// 006cdf27  0101                 add dword ptr [ecx], eax
// 006cdf29  0101                 add dword ptr [ecx], eax
// 006cdf2b  0101                 add dword ptr [ecx], eax
// 006cdf2d  0101                 add dword ptr [ecx], eax
// 006cdf2f  0101                 add dword ptr [ecx], eax
// 006cdf31  0101                 add dword ptr [ecx], eax
// 006cdf33  0101                 add dword ptr [ecx], eax
// 006cdf35  0101                 add dword ptr [ecx], eax
// 006cdf37  0101                 add dword ptr [ecx], eax
// 006cdf39  0101                 add dword ptr [ecx], eax
// 006cdf3b  0101                 add dword ptr [ecx], eax
// 006cdf3d  0101                 add dword ptr [ecx], eax
// 006cdf3f  0101                 add dword ptr [ecx], eax
// 006cdf41  0101                 add dword ptr [ecx], eax
// 006cdf43  0101                 add dword ptr [ecx], eax
// 006cdf45  0101                 add dword ptr [ecx], eax
// 006cdf47  0101                 add dword ptr [ecx], eax
// 006cdf49  0101                 add dword ptr [ecx], eax
// 006cdf4b  0101                 add dword ptr [ecx], eax
// 006cdf4d  0101                 add dword ptr [ecx], eax
// 006cdf4f  0101                 add dword ptr [ecx], eax
// 006cdf51  0101                 add dword ptr [ecx], eax
// 006cdf53  0101                 add dword ptr [ecx], eax
// 006cdf55  0101                 add dword ptr [ecx], eax
// 006cdf57  0101                 add dword ptr [ecx], eax
// 006cdf59  0101                 add dword ptr [ecx], eax
// 006cdf5b  0101                 add dword ptr [ecx], eax
// 006cdf5d  0101                 add dword ptr [ecx], eax
// 006cdf5f  0101                 add dword ptr [ecx], eax
// 006cdf61  0101                 add dword ptr [ecx], eax
// 006cdf63  0101                 add dword ptr [ecx], eax
// 006cdf65  0101                 add dword ptr [ecx], eax
// 006cdf67  0101                 add dword ptr [ecx], eax
// 006cdf69  0101                 add dword ptr [ecx], eax
// 006cdf6b  0101                 add dword ptr [ecx], eax
// 006cdf6d  0101                 add dword ptr [ecx], eax
// 006cdf6f  0100                 add dword ptr [eax], eax
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?RelayToolTipEvent@CXTPReportControl@@MAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
