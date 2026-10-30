// roc 2009-12 0081ede0  unit: VCXTPReportRow::V?$CXTPSmartPtrInternalT::?$CArray  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081ede0
//
// 0081ede0  53                   push ebx
// 0081ede1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0081ede5  55                   push ebp
// 0081ede6  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0081edea  85db                 test ebx, ebx
// 0081edec  7409                 je 0x81edf7
// 0081edee  85ed                 test ebp, ebp
// 0081edf0  7505                 jne 0x81edf7
// 0081edf2  e8154dfdff           call 0x7f3b0c
// 0081edf7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0081edfb  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0081edfe  f7d1                 not ecx
// 0081ee00  56                   push esi
// 0081ee01  57                   push edi
// 0081ee02  f6c101               test cl, 1
// 0081ee05  7439                 je 0x81ee40
// 0081ee07  85db                 test ebx, ebx
// 0081ee09  762e                 jbe 0x81ee39
// 0081ee0b  eb03                 jmp 0x81ee10
// 0081ee0d  8d4900               lea ecx, [ecx]
// 0081ee10  8bfb                 mov edi, ebx
// 0081ee12  81fbaaaaaa0a         cmp ebx, 0xaaaaaaa
// 0081ee18  7205                 jb 0x81ee1f
// 0081ee1a  bfaaaaaa0a           mov edi, 0xaaaaaaa
// 0081ee1f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081ee23  8d347f               lea esi, [edi + edi*2]
// 0081ee26  03f6                 add esi, esi
// 0081ee28  03f6                 add esi, esi
// 0081ee2a  56                   push esi
// 0081ee2b  55                   push ebp
// 0081ee2c  e8ab55fdff           call 0x7f43dc
// 0081ee31  2bdf                 sub ebx, edi
// 0081ee33  03ee                 add ebp, esi
// 0081ee35  85db                 test ebx, ebx
// 0081ee37  77d7                 ja 0x81ee10
// 0081ee39  5f                   pop edi
// 0081ee3a  5e                   pop esi
// 0081ee3b  5d                   pop ebp
// 0081ee3c  5b                   pop ebx
// 0081ee3d  c20c00               ret 0xc
// 0081ee40  85db                 test ebx, ebx
// 0081ee42  76f5                 jbe 0x81ee39
// 0081ee44  8bfb                 mov edi, ebx
// 0081ee46  81fbaaaaaa0a         cmp ebx, 0xaaaaaaa
// 0081ee4c  7205                 jb 0x81ee53
// 0081ee4e  bfaaaaaa0a           mov edi, 0xaaaaaaa
// 0081ee53  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081ee57  8d347f               lea esi, [edi + edi*2]
// 0081ee5a  03f6                 add esi, esi
// 0081ee5c  03f6                 add esi, esi
// 0081ee5e  56                   push esi
// 0081ee5f  55                   push ebp
// 0081ee60  e87155fdff           call 0x7f43d6
// 0081ee65  3bc6                 cmp eax, esi
// 0081ee67  750f                 jne 0x81ee78
// 0081ee69  2bdf                 sub ebx, edi
// 0081ee6b  03ee                 add ebp, esi
// 0081ee6d  85db                 test ebx, ebx
// 0081ee6f  77d3                 ja 0x81ee44
// 0081ee71  5f                   pop edi
// 0081ee72  5e                   pop esi
// 0081ee73  5d                   pop ebp
// 0081ee74  5b                   pop ebx
// 0081ee75  c20c00               ret 0xc
// 0081ee78  6a00                 push 0
// 0081ee7a  6a03                 push 3
// 0081ee7c  e84f55fdff           call 0x7f43d0
// copied from an identical function in another client (function ??$SerializeElements@UXTP_TIMESPEC@CXTPReportControlLocale@@@@YGXAAVCArchive@@PAUXTP_TIMESPEC@CXTPReportControlLocale@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp