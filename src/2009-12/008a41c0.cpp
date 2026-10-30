// roc 2009-12 008a41c0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a41c0
//
// 008a41c0  57                   push edi
// 008a41c1  8bf9                 mov edi, ecx
// 008a41c3  837f4c00             cmp dword ptr [edi + 0x4c], 0
// 008a41c7  7504                 jne 0x8a41cd
// 008a41c9  33c0                 xor eax, eax
// 008a41cb  5f                   pop edi
// 008a41cc  c3                   ret 
// 008a41cd  8b4f4c               mov ecx, dword ptr [edi + 0x4c]
// 008a41d0  8b01                 mov eax, dword ptr [ecx]
// 008a41d2  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 008a41d8  56                   push esi
// 008a41d9  ffd2                 call edx
// 008a41db  8bf0                 mov esi, eax
// 008a41dd  8bce                 mov ecx, esi
// 008a41df  e83c8af8ff           call 0x82cc20
// 008a41e4  85c0                 test eax, eax
// 008a41e6  7e20                 jle 0x8a4208
// 008a41e8  53                   push ebx
// 008a41e9  8b1e                 mov ebx, dword ptr [esi]
// 008a41eb  8bce                 mov ecx, esi
// 008a41ed  e82e8af8ff           call 0x82cc20
// 008a41f2  48                   dec eax
// 008a41f3  50                   push eax
// 008a41f4  8b435c               mov eax, dword ptr [ebx + 0x5c]
// 008a41f7  8bce                 mov ecx, esi
// 008a41f9  ffd0                 call eax
// 008a41fb  5b                   pop ebx
// 008a41fc  3bc7                 cmp eax, edi
// 008a41fe  7508                 jne 0x8a4208
// 008a4200  5e                   pop esi
// 008a4201  b801000000           mov eax, 1
// 008a4206  5f                   pop edi
// 008a4207  c3                   ret 
// 008a4208  5e                   pop esi
// 008a4209  33c0                 xor eax, eax
// 008a420b  5f                   pop edi
// 008a420c  c3                   ret 
// copied from an identical function in another client (function ?IsLastTreeRow@CXTPReportRow@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp