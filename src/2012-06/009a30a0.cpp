// roc 2012-06 009a30a0  unit: MyXTPCommandBars  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a30a0
//
// 009a30a0  57                   push edi
// 009a30a1  8bf9                 mov edi, ecx
// 009a30a3  8b87a0000000         mov eax, dword ptr [edi + 0xa0]
// 009a30a9  50                   push eax
// 009a30aa  e85b660f00           call 0xa9970a
// 009a30af  50                   push eax
// 009a30b0  e831f4fdff           call 0x9824e6
// 009a30b5  83c408               add esp, 8
// 009a30b8  85c0                 test eax, eax
// 009a30ba  7502                 jne 0x9a30be
// 009a30bc  5f                   pop edi
// 009a30bd  c3                   ret 
// 009a30be  53                   push ebx
// 009a30bf  0fb75f64             movzx ebx, word ptr [edi + 0x64]
// 009a30c3  56                   push esi
// 009a30c4  6a00                 push 0
// 009a30c6  8bc8                 mov ecx, eax
// 009a30c8  e837660f00           call 0xa99704
// 009a30cd  8bf0                 mov esi, eax
// 009a30cf  85f6                 test esi, esi
// 009a30d1  742f                 je 0x9a3102
// 009a30d3  8b06                 mov eax, dword ptr [esi]
// 009a30d5  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 009a30db  8bce                 mov ecx, esi
// 009a30dd  ffd2                 call edx
// 009a30df  85c0                 test eax, eax
// 009a30e1  7419                 je 0x9a30fc
// 009a30e3  56                   push esi
// 009a30e4  8bcf                 mov ecx, edi
// 009a30e6  e825ffffff           call 0x9a3010
// 009a30eb  85c0                 test eax, eax
// 009a30ed  7504                 jne 0x9a30f3
// 009a30ef  5e                   pop esi
// 009a30f0  5b                   pop ebx
// 009a30f1  5f                   pop edi
// 009a30f2  c3                   ret 
// 009a30f3  8b5840               mov ebx, dword ptr [eax + 0x40]
// 009a30f6  5e                   pop esi
// 009a30f7  8bc3                 mov eax, ebx
// 009a30f9  5b                   pop ebx
// 009a30fa  5f                   pop edi
// 009a30fb  c3                   ret 
// 009a30fc  8b9ea4000000         mov ebx, dword ptr [esi + 0xa4]
// 009a3102  5e                   pop esi
// 009a3103  8bc3                 mov eax, ebx
// 009a3105  5b                   pop ebx
// 009a3106  5f                   pop edi
// 009a3107  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPCommandBars.cpp (function ?GetActiveDocTemplate@CXTPCommandBars@@UAEIXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPCommandBars.cpp
