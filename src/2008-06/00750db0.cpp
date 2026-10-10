// roc 2008-06 00750db0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00750db0
//
// 00750db0  57                   push edi
// 00750db1  8bf9                 mov edi, ecx
// 00750db3  837f4c00             cmp dword ptr [edi + 0x4c], 0
// 00750db7  7504                 jne 0x750dbd
// 00750db9  33c0                 xor eax, eax
// 00750dbb  5f                   pop edi
// 00750dbc  c3                   ret 
// 00750dbd  8b4f4c               mov ecx, dword ptr [edi + 0x4c]
// 00750dc0  8b01                 mov eax, dword ptr [ecx]
// 00750dc2  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 00750dc8  56                   push esi
// 00750dc9  ffd2                 call edx
// 00750dcb  8bf0                 mov esi, eax
// 00750dcd  8bce                 mov ecx, esi
// 00750dcf  e87c92f8ff           call 0x6da050
// 00750dd4  85c0                 test eax, eax
// 00750dd6  7e20                 jle 0x750df8
// 00750dd8  53                   push ebx
// 00750dd9  8b1e                 mov ebx, dword ptr [esi]
// 00750ddb  8bce                 mov ecx, esi
// 00750ddd  e86e92f8ff           call 0x6da050
// 00750de2  48                   dec eax
// 00750de3  50                   push eax
// 00750de4  8b435c               mov eax, dword ptr [ebx + 0x5c]
// 00750de7  8bce                 mov ecx, esi
// 00750de9  ffd0                 call eax
// 00750deb  5b                   pop ebx
// 00750dec  3bc7                 cmp eax, edi
// 00750dee  7508                 jne 0x750df8
// 00750df0  5e                   pop esi
// 00750df1  b801000000           mov eax, 1
// 00750df6  5f                   pop edi
// 00750df7  c3                   ret 
// 00750df8  5e                   pop esi
// 00750df9  33c0                 xor eax, eax
// 00750dfb  5f                   pop edi
// 00750dfc  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRow.cpp (function ?IsLastTreeRow@CXTPReportRow@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp
