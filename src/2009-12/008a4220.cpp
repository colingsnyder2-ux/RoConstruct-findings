// roc 2009-12 008a4220  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a4220
//
// 008a4220  56                   push esi
// 008a4221  8bf1                 mov esi, ecx
// 008a4223  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 008a4226  85c9                 test ecx, ecx
// 008a4228  7504                 jne 0x8a422e
// 008a422a  33c0                 xor eax, eax
// 008a422c  5e                   pop esi
// 008a422d  c3                   ret 
// 008a422e  837e6cff             cmp dword ptr [esi + 0x6c], -1
// 008a4232  74f6                 je 0x8a422a
// 008a4234  57                   push edi
// 008a4235  8b7e6c               mov edi, dword ptr [esi + 0x6c]
// 008a4238  e8e389f8ff           call 0x82cc20
// 008a423d  48                   dec eax
// 008a423e  3bf8                 cmp edi, eax
// 008a4240  7d0f                 jge 0x8a4251
// 008a4242  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 008a4245  8b01                 mov eax, dword ptr [ecx]
// 008a4247  8b505c               mov edx, dword ptr [eax + 0x5c]
// 008a424a  47                   inc edi
// 008a424b  57                   push edi
// 008a424c  ffd2                 call edx
// 008a424e  5f                   pop edi
// 008a424f  5e                   pop esi
// 008a4250  c3                   ret 
// 008a4251  5f                   pop edi
// 008a4252  33c0                 xor eax, eax
// 008a4254  5e                   pop esi
// 008a4255  c3                   ret 
// copied from an identical function in another client (function ?GetNextSiblingRow@CXTPReportRow@@UBEPAV1@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp