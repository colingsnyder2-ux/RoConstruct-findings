// roc 2009-06 00811d50  unit: CXTPRibbonGroup  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00811d50
//
// 00811d50  51                   push ecx
// 00811d51  53                   push ebx
// 00811d52  56                   push esi
// 00811d53  8b742414             mov esi, dword ptr [esp + 0x14]
// 00811d57  8bc1                 mov eax, ecx
// 00811d59  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00811d5d  33db                 xor ebx, ebx
// 00811d5f  3bce                 cmp ecx, esi
// 00811d61  57                   push edi
// 00811d62  8944240c             mov dword ptr [esp + 0xc], eax
// 00811d66  7f2d                 jg 0x811d95
// 00811d68  8b8080000000         mov eax, dword ptr [eax + 0x80]
// 00811d6e  8b00                 mov eax, dword ptr [eax]
// 00811d70  8bd1                 mov edx, ecx
// 00811d72  c1e204               shl edx, 4
// 00811d75  03d1                 add edx, ecx
// 00811d77  8d54900c             lea edx, [eax + edx*4 + 0xc]
// 00811d7b  8bc6                 mov eax, esi
// 00811d7d  2bc1                 sub eax, ecx
// 00811d7f  40                   inc eax
// 00811d80  837a1c00             cmp dword ptr [edx + 0x1c], 0
// 00811d84  7507                 jne 0x811d8d
// 00811d86  8b3a                 mov edi, dword ptr [edx]
// 00811d88  2b7af8               sub edi, dword ptr [edx - 8]
// 00811d8b  03df                 add ebx, edi
// 00811d8d  83c244               add edx, 0x44
// 00811d90  83e801               sub eax, 1
// 00811d93  75eb                 jne 0x811d80
// 00811d95  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00811d99  3bd8                 cmp ebx, eax
// 00811d9b  7d4a                 jge 0x811de7
// 00811d9d  2bc3                 sub eax, ebx
// 00811d9f  8bfe                 mov edi, esi
// 00811da1  2bf9                 sub edi, ecx
// 00811da3  8d5f02               lea ebx, [edi + 2]
// 00811da6  99                   cdq 
// 00811da7  f7fb                 idiv ebx
// 00811da9  3bce                 cmp ecx, esi
// 00811dab  8bd8                 mov ebx, eax
// 00811dad  7f38                 jg 0x811de7
// 00811daf  8bf1                 mov esi, ecx
// 00811db1  c1e604               shl esi, 4
// 00811db4  03f1                 add esi, ecx
// 00811db6  03f6                 add esi, esi
// 00811db8  55                   push ebp
// 00811db9  8b2df8ed8900         mov ebp, dword ptr [0x89edf8]
// 00811dbf  03f6                 add esi, esi
// 00811dc1  47                   inc edi
// 00811dc2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00811dc6  8b9180000000         mov edx, dword ptr [ecx + 0x80]
// 00811dcc  8b02                 mov eax, dword ptr [edx]
// 00811dce  03c6                 add eax, esi
// 00811dd0  83782800             cmp dword ptr [eax + 0x28], 0
// 00811dd4  7508                 jne 0x811dde
// 00811dd6  53                   push ebx
// 00811dd7  6a00                 push 0
// 00811dd9  50                   push eax
// 00811dda  ffd5                 call ebp
// 00811ddc  03db                 add ebx, ebx
// 00811dde  83c644               add esi, 0x44
// 00811de1  83ef01               sub edi, 1
// 00811de4  75dc                 jne 0x811dc2
// 00811de6  5d                   pop ebp
// 00811de7  5f                   pop edi
// 00811de8  5e                   pop esi
// 00811de9  5b                   pop ebx
// 00811dea  59                   pop ecx
// 00811deb  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroups.cpp (function ?CenterColumn@CXTPRibbonGroup@@IAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroups.cpp
