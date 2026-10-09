// roc 2009-12 008ed8a0  unit: CXTPRibbonGroup  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ed8a0
//
// 008ed8a0  51                   push ecx
// 008ed8a1  53                   push ebx
// 008ed8a2  56                   push esi
// 008ed8a3  8b742414             mov esi, dword ptr [esp + 0x14]
// 008ed8a7  8bc1                 mov eax, ecx
// 008ed8a9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008ed8ad  33db                 xor ebx, ebx
// 008ed8af  3bce                 cmp ecx, esi
// 008ed8b1  57                   push edi
// 008ed8b2  8944240c             mov dword ptr [esp + 0xc], eax
// 008ed8b6  7f2d                 jg 0x8ed8e5
// 008ed8b8  8b8080000000         mov eax, dword ptr [eax + 0x80]
// 008ed8be  8b00                 mov eax, dword ptr [eax]
// 008ed8c0  8bd1                 mov edx, ecx
// 008ed8c2  c1e204               shl edx, 4
// 008ed8c5  03d1                 add edx, ecx
// 008ed8c7  8d54900c             lea edx, [eax + edx*4 + 0xc]
// 008ed8cb  8bc6                 mov eax, esi
// 008ed8cd  2bc1                 sub eax, ecx
// 008ed8cf  40                   inc eax
// 008ed8d0  837a1c00             cmp dword ptr [edx + 0x1c], 0
// 008ed8d4  7507                 jne 0x8ed8dd
// 008ed8d6  8b3a                 mov edi, dword ptr [edx]
// 008ed8d8  2b7af8               sub edi, dword ptr [edx - 8]
// 008ed8db  03df                 add ebx, edi
// 008ed8dd  83c244               add edx, 0x44
// 008ed8e0  83e801               sub eax, 1
// 008ed8e3  75eb                 jne 0x8ed8d0
// 008ed8e5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008ed8e9  3bd8                 cmp ebx, eax
// 008ed8eb  7d4a                 jge 0x8ed937
// 008ed8ed  2bc3                 sub eax, ebx
// 008ed8ef  8bfe                 mov edi, esi
// 008ed8f1  2bf9                 sub edi, ecx
// 008ed8f3  8d5f02               lea ebx, [edi + 2]
// 008ed8f6  99                   cdq 
// 008ed8f7  f7fb                 idiv ebx
// 008ed8f9  3bce                 cmp ecx, esi
// 008ed8fb  8bd8                 mov ebx, eax
// 008ed8fd  7f38                 jg 0x8ed937
// 008ed8ff  8bf1                 mov esi, ecx
// 008ed901  c1e604               shl esi, 4
// 008ed904  03f1                 add esi, ecx
// 008ed906  03f6                 add esi, esi
// 008ed908  55                   push ebp
// 008ed909  8b2d6ccc9800         mov ebp, dword ptr [0x98cc6c]
// 008ed90f  03f6                 add esi, esi
// 008ed911  47                   inc edi
// 008ed912  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008ed916  8b9180000000         mov edx, dword ptr [ecx + 0x80]
// 008ed91c  8b02                 mov eax, dword ptr [edx]
// 008ed91e  03c6                 add eax, esi
// 008ed920  83782800             cmp dword ptr [eax + 0x28], 0
// 008ed924  7508                 jne 0x8ed92e
// 008ed926  53                   push ebx
// 008ed927  6a00                 push 0
// 008ed929  50                   push eax
// 008ed92a  ffd5                 call ebp
// 008ed92c  03db                 add ebx, ebx
// 008ed92e  83c644               add esi, 0x44
// 008ed931  83ef01               sub edi, 1
// 008ed934  75dc                 jne 0x8ed912
// 008ed936  5d                   pop ebp
// 008ed937  5f                   pop edi
// 008ed938  5e                   pop esi
// 008ed939  5b                   pop ebx
// 008ed93a  59                   pop ecx
// 008ed93b  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroups.cpp (function ?CenterColumn@CXTPRibbonGroup@@IAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroups.cpp
