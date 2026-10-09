// roc 2010-06 00676a50  unit: RBX::Assembly  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00676a50
//
// 00676a50  51                   push ecx
// 00676a51  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00676a55  56                   push esi
// 00676a56  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00676a5a  3bf0                 cmp esi, eax
// 00676a5c  0f849a000000         je 0x676afc
// 00676a62  53                   push ebx
// 00676a63  8d5e04               lea ebx, [esi + 4]
// 00676a66  3bd8                 cmp ebx, eax
// 00676a68  0f848d000000         je 0x676afb
// 00676a6e  b804000000           mov eax, 4
// 00676a73  2bc6                 sub eax, esi
// 00676a75  55                   push ebp
// 00676a76  8944240c             mov dword ptr [esp + 0xc], eax
// 00676a7a  57                   push edi
// 00676a7b  eb03                 jmp 0x676a80
// 00676a7d  8d4900               lea ecx, [ecx]
// 00676a80  8b06                 mov eax, dword ptr [esi]
// 00676a82  8b2b                 mov ebp, dword ptr [ebx]
// 00676a84  50                   push eax
// 00676a85  55                   push ebp
// 00676a86  8bfb                 mov edi, ebx
// 00676a88  ff542428             call dword ptr [esp + 0x28]
// 00676a8c  83c408               add esp, 8
// 00676a8f  84c0                 test al, al
// 00676a91  742b                 je 0x676abe
// 00676a93  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00676a97  8d4419fc             lea eax, [ecx + ebx - 4]
// 00676a9b  c1f802               sar eax, 2
// 00676a9e  85c0                 test eax, eax
// 00676aa0  7e18                 jle 0x676aba
// 00676aa2  03c0                 add eax, eax
// 00676aa4  03c0                 add eax, eax
// 00676aa6  50                   push eax
// 00676aa7  8bd3                 mov edx, ebx
// 00676aa9  56                   push esi
// 00676aaa  2bd0                 sub edx, eax
// 00676aac  50                   push eax
// 00676aad  83c204               add edx, 4
// 00676ab0  52                   push edx
// 00676ab1  ff1580a89e00         call dword ptr [0x9ea880]
// 00676ab7  83c410               add esp, 0x10
// 00676aba  892e                 mov dword ptr [esi], ebp
// 00676abc  eb32                 jmp 0x676af0
// 00676abe  8b43fc               mov eax, dword ptr [ebx - 4]
// 00676ac1  8d73fc               lea esi, [ebx - 4]
// 00676ac4  50                   push eax
// 00676ac5  55                   push ebp
// 00676ac6  ff542428             call dword ptr [esp + 0x28]
// 00676aca  83c408               add esp, 8
// 00676acd  84c0                 test al, al
// 00676acf  7419                 je 0x676aea
// 00676ad1  8b0e                 mov ecx, dword ptr [esi]
// 00676ad3  890f                 mov dword ptr [edi], ecx
// 00676ad5  8b56fc               mov edx, dword ptr [esi - 4]
// 00676ad8  8bfe                 mov edi, esi
// 00676ada  83ee04               sub esi, 4
// 00676add  52                   push edx
// 00676ade  55                   push ebp
// 00676adf  ff542428             call dword ptr [esp + 0x28]
// 00676ae3  83c408               add esp, 8
// 00676ae6  84c0                 test al, al
// 00676ae8  75e7                 jne 0x676ad1
// 00676aea  8b742418             mov esi, dword ptr [esp + 0x18]
// 00676aee  892f                 mov dword ptr [edi], ebp
// 00676af0  83c304               add ebx, 4
// 00676af3  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 00676af7  7587                 jne 0x676a80
// 00676af9  5f                   pop edi
// 00676afa  5d                   pop ebp
// 00676afb  5b                   pop ebx
// 00676afc  5e                   pop esi
// 00676afd  59                   pop ecx
// 00676afe  c3                   ret 
// library openrbx-client/App\v8world\Assembly2.cpp (function ??$_Insertion_sort1@PAPAVAssembly@RBX@@P6A_NPBV12@0@ZPAV12@@std@@YAXPAPAVAssembly@RBX@@0P6A_NPBV12@1@Z0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Assembly2.cpp
