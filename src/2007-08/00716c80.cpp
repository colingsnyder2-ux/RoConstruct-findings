// from server: 100% by auto
// roc 2007-08 00716c80  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00716c80
//
// 00716c80  51                   push ecx
// 00716c81  53                   push ebx
// 00716c82  56                   push esi
// 00716c83  8b742414             mov esi, dword ptr [esp + 0x14]
// 00716c87  8bc1                 mov eax, ecx
// 00716c89  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00716c8d  33db                 xor ebx, ebx
// 00716c8f  3bce                 cmp ecx, esi
// 00716c91  57                   push edi
// 00716c92  8944240c             mov dword ptr [esp + 0xc], eax
// 00716c96  7f2f                 jg 0x716cc7
// 00716c98  8b8080000000         mov eax, dword ptr [eax + 0x80]
// 00716c9e  8b00                 mov eax, dword ptr [eax]
// 00716ca0  8bd1                 mov edx, ecx
// 00716ca2  c1e204               shl edx, 4
// 00716ca5  03d1                 add edx, ecx
// 00716ca7  8d54900c             lea edx, [eax + edx*4 + 0xc]
// 00716cab  8bc6                 mov eax, esi
// 00716cad  2bc1                 sub eax, ecx
// 00716caf  83c001               add eax, 1
// 00716cb2  837a1c00             cmp dword ptr [edx + 0x1c], 0
// 00716cb6  7507                 jne 0x716cbf
// 00716cb8  8b3a                 mov edi, dword ptr [edx]
// 00716cba  2b7af8               sub edi, dword ptr [edx - 8]
// 00716cbd  03df                 add ebx, edi
// 00716cbf  83c244               add edx, 0x44
// 00716cc2  83e801               sub eax, 1
// 00716cc5  75eb                 jne 0x716cb2
// 00716cc7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00716ccb  3bd8                 cmp ebx, eax
// 00716ccd  7d56                 jge 0x716d25
// 00716ccf  2bc3                 sub eax, ebx
// 00716cd1  8bfe                 mov edi, esi
// 00716cd3  2bf9                 sub edi, ecx
// 00716cd5  8d5f02               lea ebx, [edi + 2]
// 00716cd8  99                   cdq 
// 00716cd9  f7fb                 idiv ebx
// 00716cdb  3bce                 cmp ecx, esi
// 00716cdd  8bd8                 mov ebx, eax
// 00716cdf  7f44                 jg 0x716d25
// 00716ce1  8bf1                 mov esi, ecx
// 00716ce3  c1e604               shl esi, 4
// 00716ce6  03f1                 add esi, ecx
// 00716ce8  03f6                 add esi, esi
// 00716cea  55                   push ebp
// 00716ceb  8b2dd8ed7700         mov ebp, dword ptr [0x77edd8]
// 00716cf1  03f6                 add esi, esi
// 00716cf3  83c701               add edi, 1
// 00716cf6  eb08                 jmp 0x716d00
// 00716cf8  8da42400000000       lea esp, [esp]
// 00716cff  90                   nop 
// 00716d00  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00716d04  8b9180000000         mov edx, dword ptr [ecx + 0x80]
// 00716d0a  8b02                 mov eax, dword ptr [edx]
// 00716d0c  03c6                 add eax, esi
// 00716d0e  83782800             cmp dword ptr [eax + 0x28], 0
// 00716d12  7508                 jne 0x716d1c
// 00716d14  53                   push ebx
// 00716d15  6a00                 push 0
// 00716d17  50                   push eax
// 00716d18  ffd5                 call ebp
// 00716d1a  03db                 add ebx, ebx
// 00716d1c  83c644               add esi, 0x44
// 00716d1f  83ef01               sub edi, 1
// 00716d22  75dc                 jne 0x716d00
// 00716d24  5d                   pop ebp
// 00716d25  5f                   pop edi
// 00716d26  5e                   pop esi
// 00716d27  5b                   pop ebx
// 00716d28  59                   pop ecx
// 00716d29  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Ribbon\XTPRibbonGroups.cpp (function ?CenterColumn@CXTPRibbonGroup@@IAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Ribbon/XTPRibbonGroups.cpp
