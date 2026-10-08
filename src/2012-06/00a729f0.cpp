// roc 2012-06 00a729f0  unit: CXTPRibbonGroup  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a729f0
//
// 00a729f0  51                   push ecx
// 00a729f1  53                   push ebx
// 00a729f2  56                   push esi
// 00a729f3  8b742414             mov esi, dword ptr [esp + 0x14]
// 00a729f7  8bc1                 mov eax, ecx
// 00a729f9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a729fd  33db                 xor ebx, ebx
// 00a729ff  3bce                 cmp ecx, esi
// 00a72a01  57                   push edi
// 00a72a02  8944240c             mov dword ptr [esp + 0xc], eax
// 00a72a06  7f2d                 jg 0xa72a35
// 00a72a08  8b8080000000         mov eax, dword ptr [eax + 0x80]
// 00a72a0e  8b00                 mov eax, dword ptr [eax]
// 00a72a10  8bd1                 mov edx, ecx
// 00a72a12  c1e204               shl edx, 4
// 00a72a15  03d1                 add edx, ecx
// 00a72a17  8d54900c             lea edx, [eax + edx*4 + 0xc]
// 00a72a1b  8bc6                 mov eax, esi
// 00a72a1d  2bc1                 sub eax, ecx
// 00a72a1f  40                   inc eax
// 00a72a20  837a1c00             cmp dword ptr [edx + 0x1c], 0
// 00a72a24  7507                 jne 0xa72a2d
// 00a72a26  8b3a                 mov edi, dword ptr [edx]
// 00a72a28  2b7af8               sub edi, dword ptr [edx - 8]
// 00a72a2b  03df                 add ebx, edi
// 00a72a2d  83c244               add edx, 0x44
// 00a72a30  83e801               sub eax, 1
// 00a72a33  75eb                 jne 0xa72a20
// 00a72a35  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a72a39  3bd8                 cmp ebx, eax
// 00a72a3b  7d4a                 jge 0xa72a87
// 00a72a3d  2bc3                 sub eax, ebx
// 00a72a3f  8bfe                 mov edi, esi
// 00a72a41  2bf9                 sub edi, ecx
// 00a72a43  8d5f02               lea ebx, [edi + 2]
// 00a72a46  99                   cdq 
// 00a72a47  f7fb                 idiv ebx
// 00a72a49  3bce                 cmp ecx, esi
// 00a72a4b  8bd8                 mov ebx, eax
// 00a72a4d  7f38                 jg 0xa72a87
// 00a72a4f  8bf1                 mov esi, ecx
// 00a72a51  c1e604               shl esi, 4
// 00a72a54  03f1                 add esi, ecx
// 00a72a56  03f6                 add esi, esi
// 00a72a58  55                   push ebp
// 00a72a59  8b2df43ab200         mov ebp, dword ptr [0xb23af4]
// 00a72a5f  03f6                 add esi, esi
// 00a72a61  47                   inc edi
// 00a72a62  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a72a66  8b9180000000         mov edx, dword ptr [ecx + 0x80]
// 00a72a6c  8b02                 mov eax, dword ptr [edx]
// 00a72a6e  03c6                 add eax, esi
// 00a72a70  83782800             cmp dword ptr [eax + 0x28], 0
// 00a72a74  7508                 jne 0xa72a7e
// 00a72a76  53                   push ebx
// 00a72a77  6a00                 push 0
// 00a72a79  50                   push eax
// 00a72a7a  ffd5                 call ebp
// 00a72a7c  03db                 add ebx, ebx
// 00a72a7e  83c644               add esi, 0x44
// 00a72a81  83ef01               sub edi, 1
// 00a72a84  75dc                 jne 0xa72a62
// 00a72a86  5d                   pop ebp
// 00a72a87  5f                   pop edi
// 00a72a88  5e                   pop esi
// 00a72a89  5b                   pop ebx
// 00a72a8a  59                   pop ecx
// 00a72a8b  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroups.cpp (function ?CenterColumn@CXTPRibbonGroup@@IAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroups.cpp
