// roc 2008-06 00719b40  unit: CSelectionCaption  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00719b40
//
// 00719b40  53                   push ebx
// 00719b41  8b1d142e8000         mov ebx, dword ptr [0x802e14]
// 00719b47  56                   push esi
// 00719b48  57                   push edi
// 00719b49  6a00                 push 0
// 00719b4b  6a00                 push 0
// 00719b4d  8bf1                 mov esi, ecx
// 00719b4f  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 00719b55  68f3000000           push 0xf3
// 00719b5a  50                   push eax
// 00719b5b  ffd3                 call ebx
// 00719b5d  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 00719b63  8b11                 mov edx, dword ptr [ecx]
// 00719b65  8b4268               mov eax, dword ptr [edx + 0x68]
// 00719b68  ffd0                 call eax
// 00719b6a  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 00719b70  85c9                 test ecx, ecx
// 00719b72  7413                 je 0x719b87
// 00719b74  8b11                 mov edx, dword ptr [ecx]
// 00719b76  8b4204               mov eax, dword ptr [edx + 4]
// 00719b79  6a01                 push 1
// 00719b7b  ffd0                 call eax
// 00719b7d  c7868c01000000000000 mov dword ptr [esi + 0x18c], 0
// 00719b87  8b4638               mov eax, dword ptr [esi + 0x38]
// 00719b8a  85c0                 test eax, eax
// 00719b8c  750a                 jne 0x719b98
// 00719b8e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00719b91  51                   push ecx
// 00719b92  ff15f82d8000         call dword ptr [0x802df8]
// 00719b98  50                   push eax
// 00719b99  e84070f8ff           call 0x6a0bde
// 00719b9e  8bf8                 mov edi, eax
// 00719ba0  85ff                 test edi, edi
// 00719ba2  7403                 je 0x719ba7
// 00719ba4  8b4720               mov eax, dword ptr [edi + 0x20]
// 00719ba7  50                   push eax
// 00719ba8  ff15502d8000         call dword ptr [0x802d50]
// 00719bae  85c0                 test eax, eax
// 00719bb0  741d                 je 0x719bcf
// 00719bb2  8b5720               mov edx, dword ptr [edi + 0x20]
// 00719bb5  6a00                 push 0
// 00719bb7  6a00                 push 0
// 00719bb9  683f270000           push 0x273f
// 00719bbe  52                   push edx
// 00719bbf  ffd3                 call ebx
// 00719bc1  8b4620               mov eax, dword ptr [esi + 0x20]
// 00719bc4  6a01                 push 1
// 00719bc6  6a00                 push 0
// 00719bc8  50                   push eax
// 00719bc9  ff15182e8000         call dword ptr [0x802e18]
// 00719bcf  5f                   pop edi
// 00719bd0  5e                   pop esi
// 00719bd1  5b                   pop ebx
// 00719bd2  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Controls\XTCaption.cpp (function ?OnPushPinCancel@CXTCaption@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaption.cpp
