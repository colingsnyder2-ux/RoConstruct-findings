// roc 2008-06 00795480  unit: CXTPRibbonGroup  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00795480
//
// 00795480  51                   push ecx
// 00795481  53                   push ebx
// 00795482  56                   push esi
// 00795483  8b742414             mov esi, dword ptr [esp + 0x14]
// 00795487  8bc1                 mov eax, ecx
// 00795489  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0079548d  33db                 xor ebx, ebx
// 0079548f  3bce                 cmp ecx, esi
// 00795491  57                   push edi
// 00795492  8944240c             mov dword ptr [esp + 0xc], eax
// 00795496  7f2d                 jg 0x7954c5
// 00795498  8b8080000000         mov eax, dword ptr [eax + 0x80]
// 0079549e  8b00                 mov eax, dword ptr [eax]
// 007954a0  8bd1                 mov edx, ecx
// 007954a2  c1e204               shl edx, 4
// 007954a5  03d1                 add edx, ecx
// 007954a7  8d54900c             lea edx, [eax + edx*4 + 0xc]
// 007954ab  8bc6                 mov eax, esi
// 007954ad  2bc1                 sub eax, ecx
// 007954af  40                   inc eax
// 007954b0  837a1c00             cmp dword ptr [edx + 0x1c], 0
// 007954b4  7507                 jne 0x7954bd
// 007954b6  8b3a                 mov edi, dword ptr [edx]
// 007954b8  2b7af8               sub edi, dword ptr [edx - 8]
// 007954bb  03df                 add ebx, edi
// 007954bd  83c244               add edx, 0x44
// 007954c0  83e801               sub eax, 1
// 007954c3  75eb                 jne 0x7954b0
// 007954c5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007954c9  3bd8                 cmp ebx, eax
// 007954cb  7d4a                 jge 0x795517
// 007954cd  2bc3                 sub eax, ebx
// 007954cf  8bfe                 mov edi, esi
// 007954d1  2bf9                 sub edi, ecx
// 007954d3  8d5f02               lea ebx, [edi + 2]
// 007954d6  99                   cdq 
// 007954d7  f7fb                 idiv ebx
// 007954d9  3bce                 cmp ecx, esi
// 007954db  8bd8                 mov ebx, eax
// 007954dd  7f38                 jg 0x795517
// 007954df  8bf1                 mov esi, ecx
// 007954e1  c1e604               shl esi, 4
// 007954e4  03f1                 add esi, ecx
// 007954e6  03f6                 add esi, esi
// 007954e8  55                   push ebp
// 007954e9  8b2d682d8000         mov ebp, dword ptr [0x802d68]
// 007954ef  03f6                 add esi, esi
// 007954f1  47                   inc edi
// 007954f2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007954f6  8b9180000000         mov edx, dword ptr [ecx + 0x80]
// 007954fc  8b02                 mov eax, dword ptr [edx]
// 007954fe  03c6                 add eax, esi
// 00795500  83782800             cmp dword ptr [eax + 0x28], 0
// 00795504  7508                 jne 0x79550e
// 00795506  53                   push ebx
// 00795507  6a00                 push 0
// 00795509  50                   push eax
// 0079550a  ffd5                 call ebp
// 0079550c  03db                 add ebx, ebx
// 0079550e  83c644               add esi, 0x44
// 00795511  83ef01               sub edi, 1
// 00795514  75dc                 jne 0x7954f2
// 00795516  5d                   pop ebp
// 00795517  5f                   pop edi
// 00795518  5e                   pop esi
// 00795519  5b                   pop ebx
// 0079551a  59                   pop ecx
// 0079551b  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroups.cpp (function ?CenterColumn@CXTPRibbonGroup@@IAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroups.cpp
