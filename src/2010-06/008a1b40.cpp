// roc 2010-06 008a1b40  unit: CXTPRibbonGroup  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a1b40
//
// 008a1b40  51                   push ecx
// 008a1b41  53                   push ebx
// 008a1b42  56                   push esi
// 008a1b43  8b742414             mov esi, dword ptr [esp + 0x14]
// 008a1b47  8bc1                 mov eax, ecx
// 008a1b49  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008a1b4d  33db                 xor ebx, ebx
// 008a1b4f  3bce                 cmp ecx, esi
// 008a1b51  57                   push edi
// 008a1b52  8944240c             mov dword ptr [esp + 0xc], eax
// 008a1b56  7f2d                 jg 0x8a1b85
// 008a1b58  8b8080000000         mov eax, dword ptr [eax + 0x80]
// 008a1b5e  8b00                 mov eax, dword ptr [eax]
// 008a1b60  8bd1                 mov edx, ecx
// 008a1b62  c1e204               shl edx, 4
// 008a1b65  03d1                 add edx, ecx
// 008a1b67  8d54900c             lea edx, [eax + edx*4 + 0xc]
// 008a1b6b  8bc6                 mov eax, esi
// 008a1b6d  2bc1                 sub eax, ecx
// 008a1b6f  40                   inc eax
// 008a1b70  837a1c00             cmp dword ptr [edx + 0x1c], 0
// 008a1b74  7507                 jne 0x8a1b7d
// 008a1b76  8b3a                 mov edi, dword ptr [edx]
// 008a1b78  2b7af8               sub edi, dword ptr [edx - 8]
// 008a1b7b  03df                 add ebx, edi
// 008a1b7d  83c244               add edx, 0x44
// 008a1b80  83e801               sub eax, 1
// 008a1b83  75eb                 jne 0x8a1b70
// 008a1b85  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008a1b89  3bd8                 cmp ebx, eax
// 008a1b8b  7d4a                 jge 0x8a1bd7
// 008a1b8d  2bc3                 sub eax, ebx
// 008a1b8f  8bfe                 mov edi, esi
// 008a1b91  2bf9                 sub edi, ecx
// 008a1b93  8d5f02               lea ebx, [edi + 2]
// 008a1b96  99                   cdq 
// 008a1b97  f7fb                 idiv ebx
// 008a1b99  3bce                 cmp ecx, esi
// 008a1b9b  8bd8                 mov ebx, eax
// 008a1b9d  7f38                 jg 0x8a1bd7
// 008a1b9f  8bf1                 mov esi, ecx
// 008a1ba1  c1e604               shl esi, 4
// 008a1ba4  03f1                 add esi, ecx
// 008a1ba6  03f6                 add esi, esi
// 008a1ba8  55                   push ebp
// 008a1ba9  8b2d40bc9e00         mov ebp, dword ptr [0x9ebc40]
// 008a1baf  03f6                 add esi, esi
// 008a1bb1  47                   inc edi
// 008a1bb2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008a1bb6  8b9180000000         mov edx, dword ptr [ecx + 0x80]
// 008a1bbc  8b02                 mov eax, dword ptr [edx]
// 008a1bbe  03c6                 add eax, esi
// 008a1bc0  83782800             cmp dword ptr [eax + 0x28], 0
// 008a1bc4  7508                 jne 0x8a1bce
// 008a1bc6  53                   push ebx
// 008a1bc7  6a00                 push 0
// 008a1bc9  50                   push eax
// 008a1bca  ffd5                 call ebp
// 008a1bcc  03db                 add ebx, ebx
// 008a1bce  83c644               add esi, 0x44
// 008a1bd1  83ef01               sub edi, 1
// 008a1bd4  75dc                 jne 0x8a1bb2
// 008a1bd6  5d                   pop ebp
// 008a1bd7  5f                   pop edi
// 008a1bd8  5e                   pop esi
// 008a1bd9  5b                   pop ebx
// 008a1bda  59                   pop ecx
// 008a1bdb  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroups.cpp (function ?CenterColumn@CXTPRibbonGroup@@IAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroups.cpp
