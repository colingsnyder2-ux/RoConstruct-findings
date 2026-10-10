// roc 2008-06 00750e10  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00750e10
//
// 00750e10  56                   push esi
// 00750e11  8bf1                 mov esi, ecx
// 00750e13  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 00750e16  85c9                 test ecx, ecx
// 00750e18  7504                 jne 0x750e1e
// 00750e1a  33c0                 xor eax, eax
// 00750e1c  5e                   pop esi
// 00750e1d  c3                   ret 
// 00750e1e  837e6cff             cmp dword ptr [esi + 0x6c], -1
// 00750e22  74f6                 je 0x750e1a
// 00750e24  57                   push edi
// 00750e25  8b7e6c               mov edi, dword ptr [esi + 0x6c]
// 00750e28  e82392f8ff           call 0x6da050
// 00750e2d  48                   dec eax
// 00750e2e  3bf8                 cmp edi, eax
// 00750e30  7d0f                 jge 0x750e41
// 00750e32  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 00750e35  8b01                 mov eax, dword ptr [ecx]
// 00750e37  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00750e3a  47                   inc edi
// 00750e3b  57                   push edi
// 00750e3c  ffd2                 call edx
// 00750e3e  5f                   pop edi
// 00750e3f  5e                   pop esi
// 00750e40  c3                   ret 
// 00750e41  5f                   pop edi
// 00750e42  33c0                 xor eax, eax
// 00750e44  5e                   pop esi
// 00750e45  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRow.cpp (function ?GetNextSiblingRow@CXTPReportRow@@UBEPAV1@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp
