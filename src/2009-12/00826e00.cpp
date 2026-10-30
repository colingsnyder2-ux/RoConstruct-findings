// roc 2009-12 00826e00  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 310 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00826e00
//
// 00826e00  6aff                 push -1
// 00826e02  6899479600           push 0x964799
// 00826e07  64a100000000         mov eax, dword ptr fs:[0]
// 00826e0d  50                   push eax
// 00826e0e  83ec14               sub esp, 0x14
// 00826e11  56                   push esi
// 00826e12  57                   push edi
// 00826e13  a10052b600           mov eax, dword ptr [0xb65200]
// 00826e18  33c4                 xor eax, esp
// 00826e1a  50                   push eax
// 00826e1b  8d442420             lea eax, [esp + 0x20]
// 00826e1f  64a300000000         mov dword ptr fs:[0], eax
// 00826e25  8b742434             mov esi, dword ptr [esp + 0x34]
// 00826e29  33ff                 xor edi, edi
// 00826e2b  897c240c             mov dword ptr [esp + 0xc], edi
// 00826e2f  397e08               cmp dword ptr [esi + 8], edi
// 00826e32  7425                 je 0x826e59
// 00826e34  8b742430             mov esi, dword ptr [esp + 0x30]
// 00826e38  6856fd9900           push 0x99fd56
// 00826e3d  8bce                 mov ecx, esi
// 00826e3f  ff15b8de9800         call dword ptr [0x98deb8]
// 00826e45  8bc6                 mov eax, esi
// 00826e47  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00826e4b  64890d00000000       mov dword ptr fs:[0], ecx
// 00826e52  59                   pop ecx
// 00826e53  5f                   pop edi
// 00826e54  5e                   pop esi
// 00826e55  83c420               add esp, 0x20
// 00826e58  c3                   ret 
// 00826e59  8b442438             mov eax, dword ptr [esp + 0x38]
// 00826e5d  50                   push eax
// 00826e5e  8d4c2438             lea ecx, [esp + 0x38]
// 00826e62  ff15b8de9800         call dword ptr [0x98deb8]
// 00826e68  33c0                 xor eax, eax
// 00826e6a  897c2428             mov dword ptr [esp + 0x28], edi
// 00826e6e  89442410             mov dword ptr [esp + 0x10], eax
// 00826e72  89442414             mov dword ptr [esp + 0x14], eax
// 00826e76  89442418             mov dword ptr [esp + 0x18], eax
// 00826e7a  8944241c             mov dword ptr [esp + 0x1c], eax
// 00826e7e  397e08               cmp dword ptr [esi + 8], edi
// 00826e81  7517                 jne 0x826e9a
// 00826e83  dd06                 fld qword ptr [esi]
// 00826e85  8d4c2410             lea ecx, [esp + 0x10]
// 00826e89  51                   push ecx
// 00826e8a  83ec08               sub esp, 8
// 00826e8d  dd1c24               fstp qword ptr [esp]
// 00826e90  ff156cba9800         call dword ptr [0x98ba6c]
// 00826e96  85c0                 test eax, eax
// 00826e98  7513                 jne 0x826ead
// 00826e9a  8b742430             mov esi, dword ptr [esp + 0x30]
// 00826e9e  6856fd9900           push 0x99fd56
// 00826ea3  8bce                 mov ecx, esi
// 00826ea5  ff15b8de9800         call dword ptr [0x98deb8]
// 00826eab  eb6b                 jmp 0x826f18
// 00826ead  68b4549f00           push 0x9f54b4
// 00826eb2  68b0549f00           push 0x9f54b0
// 00826eb7  8d4c243c             lea ecx, [esp + 0x3c]
// 00826ebb  ff1518d89800         call dword ptr [0x98d818]
// 00826ec1  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00826ec5  57                   push edi
// 00826ec6  8d542414             lea edx, [esp + 0x14]
// 00826eca  52                   push edx
// 00826ecb  8d44243c             lea eax, [esp + 0x3c]
// 00826ecf  50                   push eax
// 00826ed0  e85be1ffff           call 0x825030
// 00826ed5  57                   push edi
// 00826ed6  8d4c2420             lea ecx, [esp + 0x20]
// 00826eda  51                   push ecx
// 00826edb  8d542448             lea edx, [esp + 0x48]
// 00826edf  52                   push edx
// 00826ee0  e86b81ffff           call 0x81f050
// 00826ee5  8d44244c             lea eax, [esp + 0x4c]
// 00826ee9  56                   push esi
// 00826eea  50                   push eax
// 00826eeb  e8b081ffff           call 0x81f0a0
// 00826ef0  83c420               add esp, 0x20
// 00826ef3  68582d9d00           push 0x9d2d58
// 00826ef8  68b4549f00           push 0x9f54b4
// 00826efd  8d4c243c             lea ecx, [esp + 0x3c]
// 00826f01  ff1518d89800         call dword ptr [0x98d818]
// 00826f07  8b742430             mov esi, dword ptr [esp + 0x30]
// 00826f0b  8d4c2434             lea ecx, [esp + 0x34]
// 00826f0f  51                   push ecx
// 00826f10  8bce                 mov ecx, esi
// 00826f12  ff1594de9800         call dword ptr [0x98de94]
// 00826f18  8d4c2434             lea ecx, [esp + 0x34]
// 00826f1c  ff15c0de9800         call dword ptr [0x98dec0]
// 00826f22  8bc6                 mov eax, esi
// 00826f24  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00826f28  64890d00000000       mov dword ptr fs:[0], ecx
// 00826f2f  59                   pop ecx
// 00826f30  5f                   pop edi
// 00826f31  5e                   pop esi
// 00826f32  83c420               add esp, 0x20
// 00826f35  c3                   ret 
// copied from an identical function in another client (function ?_FormatDateTime@CXTPReportControlLocale@@CA?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@ABVCOleDateTime@3@PBDK@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportControl.cpp