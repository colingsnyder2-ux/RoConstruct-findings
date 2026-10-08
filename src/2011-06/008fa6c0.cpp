// roc 2011-06 008fa6c0  unit: CXTPRibbonGroup  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fa6c0
//
// 008fa6c0  51                   push ecx
// 008fa6c1  53                   push ebx
// 008fa6c2  56                   push esi
// 008fa6c3  8b742414             mov esi, dword ptr [esp + 0x14]
// 008fa6c7  8bc1                 mov eax, ecx
// 008fa6c9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008fa6cd  33db                 xor ebx, ebx
// 008fa6cf  3bce                 cmp ecx, esi
// 008fa6d1  57                   push edi
// 008fa6d2  8944240c             mov dword ptr [esp + 0xc], eax
// 008fa6d6  7f2d                 jg 0x8fa705
// 008fa6d8  8b8080000000         mov eax, dword ptr [eax + 0x80]
// 008fa6de  8b00                 mov eax, dword ptr [eax]
// 008fa6e0  8bd1                 mov edx, ecx
// 008fa6e2  c1e204               shl edx, 4
// 008fa6e5  03d1                 add edx, ecx
// 008fa6e7  8d54900c             lea edx, [eax + edx*4 + 0xc]
// 008fa6eb  8bc6                 mov eax, esi
// 008fa6ed  2bc1                 sub eax, ecx
// 008fa6ef  40                   inc eax
// 008fa6f0  837a1c00             cmp dword ptr [edx + 0x1c], 0
// 008fa6f4  7507                 jne 0x8fa6fd
// 008fa6f6  8b3a                 mov edi, dword ptr [edx]
// 008fa6f8  2b7af8               sub edi, dword ptr [edx - 8]
// 008fa6fb  03df                 add ebx, edi
// 008fa6fd  83c244               add edx, 0x44
// 008fa700  83e801               sub eax, 1
// 008fa703  75eb                 jne 0x8fa6f0
// 008fa705  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008fa709  3bd8                 cmp ebx, eax
// 008fa70b  7d4a                 jge 0x8fa757
// 008fa70d  2bc3                 sub eax, ebx
// 008fa70f  8bfe                 mov edi, esi
// 008fa711  2bf9                 sub edi, ecx
// 008fa713  8d5f02               lea ebx, [edi + 2]
// 008fa716  99                   cdq 
// 008fa717  f7fb                 idiv ebx
// 008fa719  3bce                 cmp ecx, esi
// 008fa71b  8bd8                 mov ebx, eax
// 008fa71d  7f38                 jg 0x8fa757
// 008fa71f  8bf1                 mov esi, ecx
// 008fa721  c1e604               shl esi, 4
// 008fa724  03f1                 add esi, ecx
// 008fa726  03f6                 add esi, esi
// 008fa728  55                   push ebp
// 008fa729  8b2d601ca400         mov ebp, dword ptr [0xa41c60]
// 008fa72f  03f6                 add esi, esi
// 008fa731  47                   inc edi
// 008fa732  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008fa736  8b9180000000         mov edx, dword ptr [ecx + 0x80]
// 008fa73c  8b02                 mov eax, dword ptr [edx]
// 008fa73e  03c6                 add eax, esi
// 008fa740  83782800             cmp dword ptr [eax + 0x28], 0
// 008fa744  7508                 jne 0x8fa74e
// 008fa746  53                   push ebx
// 008fa747  6a00                 push 0
// 008fa749  50                   push eax
// 008fa74a  ffd5                 call ebp
// 008fa74c  03db                 add ebx, ebx
// 008fa74e  83c644               add esi, 0x44
// 008fa751  83ef01               sub edi, 1
// 008fa754  75dc                 jne 0x8fa732
// 008fa756  5d                   pop ebp
// 008fa757  5f                   pop edi
// 008fa758  5e                   pop esi
// 008fa759  5b                   pop ebx
// 008fa75a  59                   pop ecx
// 008fa75b  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroups.cpp (function ?CenterColumn@CXTPRibbonGroup@@IAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroups.cpp
