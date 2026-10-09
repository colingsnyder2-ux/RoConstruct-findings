// roc 2007-03 0070f670  unit: seg_00700000  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0070f670
//
// 0070f670  51                   push ecx
// 0070f671  53                   push ebx
// 0070f672  56                   push esi
// 0070f673  8b742414             mov esi, dword ptr [esp + 0x14]
// 0070f677  8bc1                 mov eax, ecx
// 0070f679  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0070f67d  33db                 xor ebx, ebx
// 0070f67f  3bce                 cmp ecx, esi
// 0070f681  57                   push edi
// 0070f682  8944240c             mov dword ptr [esp + 0xc], eax
// 0070f686  7f2f                 jg 0x70f6b7
// 0070f688  8b8080000000         mov eax, dword ptr [eax + 0x80]
// 0070f68e  8b00                 mov eax, dword ptr [eax]
// 0070f690  8bd1                 mov edx, ecx
// 0070f692  c1e204               shl edx, 4
// 0070f695  03d1                 add edx, ecx
// 0070f697  8d54900c             lea edx, [eax + edx*4 + 0xc]
// 0070f69b  8bc6                 mov eax, esi
// 0070f69d  2bc1                 sub eax, ecx
// 0070f69f  83c001               add eax, 1
// 0070f6a2  837a1c00             cmp dword ptr [edx + 0x1c], 0
// 0070f6a6  7507                 jne 0x70f6af
// 0070f6a8  8b3a                 mov edi, dword ptr [edx]
// 0070f6aa  2b7af8               sub edi, dword ptr [edx - 8]
// 0070f6ad  03df                 add ebx, edi
// 0070f6af  83c244               add edx, 0x44
// 0070f6b2  83e801               sub eax, 1
// 0070f6b5  75eb                 jne 0x70f6a2
// 0070f6b7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0070f6bb  3bd8                 cmp ebx, eax
// 0070f6bd  7d56                 jge 0x70f715
// 0070f6bf  2bc3                 sub eax, ebx
// 0070f6c1  8bfe                 mov edi, esi
// 0070f6c3  2bf9                 sub edi, ecx
// 0070f6c5  8d5f02               lea ebx, [edi + 2]
// 0070f6c8  99                   cdq 
// 0070f6c9  f7fb                 idiv ebx
// 0070f6cb  3bce                 cmp ecx, esi
// 0070f6cd  8bd8                 mov ebx, eax
// 0070f6cf  7f44                 jg 0x70f715
// 0070f6d1  8bf1                 mov esi, ecx
// 0070f6d3  c1e604               shl esi, 4
// 0070f6d6  03f1                 add esi, ecx
// 0070f6d8  03f6                 add esi, esi
// 0070f6da  55                   push ebp
// 0070f6db  8b2d58ed7700         mov ebp, dword ptr [0x77ed58]
// 0070f6e1  03f6                 add esi, esi
// 0070f6e3  83c701               add edi, 1
// 0070f6e6  eb08                 jmp 0x70f6f0
// 0070f6e8  8da42400000000       lea esp, [esp]
// 0070f6ef  90                   nop 
// 0070f6f0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0070f6f4  8b9180000000         mov edx, dword ptr [ecx + 0x80]
// 0070f6fa  8b02                 mov eax, dword ptr [edx]
// 0070f6fc  03c6                 add eax, esi
// 0070f6fe  83782800             cmp dword ptr [eax + 0x28], 0
// 0070f702  7508                 jne 0x70f70c
// 0070f704  53                   push ebx
// 0070f705  6a00                 push 0
// 0070f707  50                   push eax
// 0070f708  ffd5                 call ebp
// 0070f70a  03db                 add ebx, ebx
// 0070f70c  83c644               add esi, 0x44
// 0070f70f  83ef01               sub edi, 1
// 0070f712  75dc                 jne 0x70f6f0
// 0070f714  5d                   pop ebp
// 0070f715  5f                   pop edi
// 0070f716  5e                   pop esi
// 0070f717  5b                   pop ebx
// 0070f718  59                   pop ecx
// 0070f719  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Ribbon\XTPRibbonGroups.cpp (function ?CenterColumn@CXTPRibbonGroup@@IAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Ribbon/XTPRibbonGroups.cpp
