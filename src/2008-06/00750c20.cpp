// roc 2008-06 00750c20  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00750c20
//
// 00750c20  83ec18               sub esp, 0x18
// 00750c23  57                   push edi
// 00750c24  8bf9                 mov edi, ecx
// 00750c26  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00750c2a  e8a139f8ff           call 0x6d45d0
// 00750c2f  85c0                 test eax, eax
// 00750c31  7460                 je 0x750c93
// 00750c33  8b07                 mov eax, dword ptr [edi]
// 00750c35  8b90b0000000         mov edx, dword ptr [eax + 0xb0]
// 00750c3b  8bcf                 mov ecx, edi
// 00750c3d  ffd2                 call edx
// 00750c3f  2b4758               sub eax, dword ptr [edi + 0x58]
// 00750c42  85c0                 test eax, eax
// 00750c44  7e01                 jle 0x750c47
// 00750c46  40                   inc eax
// 00750c47  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 00750c4a  56                   push esi
// 00750c4b  50                   push eax
// 00750c4c  e8cf83f7ff           call 0x6c9020
// 00750c51  8b742424             mov esi, dword ptr [esp + 0x24]
// 00750c55  0106                 add dword ptr [esi], eax
// 00750c57  8b5608               mov edx, dword ptr [esi + 8]
// 00750c5a  8b06                 mov eax, dword ptr [esi]
// 00750c5c  8b4e04               mov ecx, dword ptr [esi + 4]
// 00750c5f  89542418             mov dword ptr [esp + 0x18], edx
// 00750c63  89442410             mov dword ptr [esp + 0x10], eax
// 00750c67  8b460c               mov eax, dword ptr [esi + 0xc]
// 00750c6a  8d542410             lea edx, [esp + 0x10]
// 00750c6e  52                   push edx
// 00750c6f  57                   push edi
// 00750c70  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00750c74  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 00750c77  89442424             mov dword ptr [esp + 0x24], eax
// 00750c7b  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 00750c81  6a00                 push 0
// 00750c83  8d442414             lea eax, [esp + 0x14]
// 00750c87  50                   push eax
// 00750c88  e85366ffff           call 0x7472e0
// 00750c8d  8b00                 mov eax, dword ptr [eax]
// 00750c8f  40                   inc eax
// 00750c90  0106                 add dword ptr [esi], eax
// 00750c92  5e                   pop esi
// 00750c93  5f                   pop edi
// 00750c94  83c418               add esp, 0x18
// 00750c97  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRow.cpp (function ?ShiftTreeIndent@CXTPReportRow@@UBEXAAVCRect@@PAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp
