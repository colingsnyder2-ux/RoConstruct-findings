// roc 2009-12 00814f50  unit: MyXTPCommandBars  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00814f50
//
// 00814f50  57                   push edi
// 00814f51  8bf9                 mov edi, ecx
// 00814f53  8b87a0000000         mov eax, dword ptr [edi + 0xa0]
// 00814f59  50                   push eax
// 00814f5a  e893161100           call 0x9265f2
// 00814f5f  50                   push eax
// 00814f60  e8d9ecfdff           call 0x7f3c3e
// 00814f65  83c408               add esp, 8
// 00814f68  85c0                 test eax, eax
// 00814f6a  7502                 jne 0x814f6e
// 00814f6c  5f                   pop edi
// 00814f6d  c3                   ret 
// 00814f6e  53                   push ebx
// 00814f6f  0fb75f64             movzx ebx, word ptr [edi + 0x64]
// 00814f73  56                   push esi
// 00814f74  6a00                 push 0
// 00814f76  8bc8                 mov ecx, eax
// 00814f78  e86f161100           call 0x9265ec
// 00814f7d  8bf0                 mov esi, eax
// 00814f7f  85f6                 test esi, esi
// 00814f81  742f                 je 0x814fb2
// 00814f83  8b06                 mov eax, dword ptr [esi]
// 00814f85  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 00814f8b  8bce                 mov ecx, esi
// 00814f8d  ffd2                 call edx
// 00814f8f  85c0                 test eax, eax
// 00814f91  7419                 je 0x814fac
// 00814f93  56                   push esi
// 00814f94  8bcf                 mov ecx, edi
// 00814f96  e825ffffff           call 0x814ec0
// 00814f9b  85c0                 test eax, eax
// 00814f9d  7504                 jne 0x814fa3
// 00814f9f  5e                   pop esi
// 00814fa0  5b                   pop ebx
// 00814fa1  5f                   pop edi
// 00814fa2  c3                   ret 
// 00814fa3  8b5840               mov ebx, dword ptr [eax + 0x40]
// 00814fa6  5e                   pop esi
// 00814fa7  8bc3                 mov eax, ebx
// 00814fa9  5b                   pop ebx
// 00814faa  5f                   pop edi
// 00814fab  c3                   ret 
// 00814fac  8b9ea4000000         mov ebx, dword ptr [esi + 0xa4]
// 00814fb2  5e                   pop esi
// 00814fb3  8bc3                 mov eax, ebx
// 00814fb5  5b                   pop ebx
// 00814fb6  5f                   pop edi
// 00814fb7  c3                   ret 
// copied from an identical function in another client (function ?GetActiveDocTemplate@CXTPCommandBars@@UAEIXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCommandBars.cpp