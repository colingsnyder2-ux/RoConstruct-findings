// roc 2008-06 006a39a0  unit: MyXTPCommandBars  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a39a0
//
// 006a39a0  57                   push edi
// 006a39a1  8bf9                 mov edi, ecx
// 006a39a3  8b87a0000000         mov eax, dword ptr [edi + 0xa0]
// 006a39a9  50                   push eax
// 006a39aa  e825861100           call 0x7bbfd4
// 006a39af  50                   push eax
// 006a39b0  e871d2ffff           call 0x6a0c26
// 006a39b5  83c408               add esp, 8
// 006a39b8  85c0                 test eax, eax
// 006a39ba  7502                 jne 0x6a39be
// 006a39bc  5f                   pop edi
// 006a39bd  c3                   ret 
// 006a39be  53                   push ebx
// 006a39bf  0fb75f64             movzx ebx, word ptr [edi + 0x64]
// 006a39c3  56                   push esi
// 006a39c4  6a00                 push 0
// 006a39c6  8bc8                 mov ecx, eax
// 006a39c8  e801861100           call 0x7bbfce
// 006a39cd  8bf0                 mov esi, eax
// 006a39cf  85f6                 test esi, esi
// 006a39d1  742f                 je 0x6a3a02
// 006a39d3  8b06                 mov eax, dword ptr [esi]
// 006a39d5  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 006a39db  8bce                 mov ecx, esi
// 006a39dd  ffd2                 call edx
// 006a39df  85c0                 test eax, eax
// 006a39e1  7419                 je 0x6a39fc
// 006a39e3  56                   push esi
// 006a39e4  8bcf                 mov ecx, edi
// 006a39e6  e825ffffff           call 0x6a3910
// 006a39eb  85c0                 test eax, eax
// 006a39ed  7504                 jne 0x6a39f3
// 006a39ef  5e                   pop esi
// 006a39f0  5b                   pop ebx
// 006a39f1  5f                   pop edi
// 006a39f2  c3                   ret 
// 006a39f3  8b5840               mov ebx, dword ptr [eax + 0x40]
// 006a39f6  5e                   pop esi
// 006a39f7  8bc3                 mov eax, ebx
// 006a39f9  5b                   pop ebx
// 006a39fa  5f                   pop edi
// 006a39fb  c3                   ret 
// 006a39fc  8b9ea4000000         mov ebx, dword ptr [esi + 0xa4]
// 006a3a02  5e                   pop esi
// 006a3a03  8bc3                 mov eax, ebx
// 006a3a05  5b                   pop ebx
// 006a3a06  5f                   pop edi
// 006a3a07  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPCommandBars.cpp (function ?GetActiveDocTemplate@CXTPCommandBars@@UAEIXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCommandBars.cpp
