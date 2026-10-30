// roc 2009-12 008463b0  unit: CXTPControls  size: 542 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008463b0
//
// 008463b0  83ec38               sub esp, 0x38
// 008463b3  8b442448             mov eax, dword ptr [esp + 0x48]
// 008463b7  53                   push ebx
// 008463b8  55                   push ebp
// 008463b9  56                   push esi
// 008463ba  8b30                 mov esi, dword ptr [eax]
// 008463bc  57                   push edi
// 008463bd  8bd9                 mov ebx, ecx
// 008463bf  6a01                 push 1
// 008463c1  8d4c243c             lea ecx, [esp + 0x3c]
// 008463c5  51                   push ecx
// 008463c6  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 008463c9  83e610               and esi, 0x10
// 008463cc  895c242c             mov dword ptr [esp + 0x2c], ebx
// 008463d0  c744242001000000     mov dword ptr [esp + 0x20], 1
// 008463d8  89742424             mov dword ptr [esp + 0x24], esi
// 008463dc  e8cfcefcff           call 0x8132b0
// 008463e1  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 008463e4  e8a7e1fbff           call 0x804590
// 008463e9  8bc8                 mov ecx, eax
// 008463eb  e8507bfbff           call 0x7fdf40
// 008463f0  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008463f4  8b4b2c               mov ecx, dword ptr [ebx + 0x2c]
// 008463f7  8d441007             lea eax, [eax + edx + 7]
// 008463fb  33ed                 xor ebp, ebp
// 008463fd  89442428             mov dword ptr [esp + 0x28], eax
// 00846401  89442434             mov dword ptr [esp + 0x34], eax
// 00846405  33c0                 xor eax, eax
// 00846407  3bcd                 cmp ecx, ebp
// 00846409  896c2430             mov dword ptr [esp + 0x30], ebp
// 0084640d  896c2458             mov dword ptr [esp + 0x58], ebp
// 00846411  896c2410             mov dword ptr [esp + 0x10], ebp
// 00846415  89442420             mov dword ptr [esp + 0x20], eax
// 00846419  0f8e74010000         jle 0x846593
// 0084641f  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00846423  83c73c               add edi, 0x3c
// 00846426  837fec00             cmp dword ptr [edi - 0x14], 0
// 0084642a  0f8450010000         je 0x846580
// 00846430  837ff400             cmp dword ptr [edi - 0xc], 0
// 00846434  0f8546010000         jne 0x846580
// 0084643a  85c0                 test eax, eax
// 0084643c  7c15                 jl 0x846453
// 0084643e  3bc1                 cmp eax, ecx
// 00846440  7d11                 jge 0x846453
// 00846442  3b432c               cmp eax, dword ptr [ebx + 0x2c]
// 00846445  0f8d62010000         jge 0x8465ad
// 0084644b  8b4b28               mov ecx, dword ptr [ebx + 0x28]
// 0084644e  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00846451  eb02                 jmp 0x846455
// 00846453  33c0                 xor eax, eax
// 00846455  8b0f                 mov ecx, dword ptr [edi]
// 00846457  33db                 xor ebx, ebx
// 00846459  83b84801000004       cmp dword ptr [eax + 0x148], 4
// 00846460  0f94c3               sete bl
// 00846463  e828f8faff           call 0x7f5c90
// 00846468  3947fc               cmp dword ptr [edi - 4], eax
// 0084646b  742b                 je 0x846498
// 0084646d  8b0f                 mov ecx, dword ptr [edi]
// 0084646f  e81cf8faff           call 0x7f5c90
// 00846474  8b0f                 mov ecx, dword ptr [edi]
// 00846476  8947fc               mov dword ptr [edi - 4], eax
// 00846479  8b442450             mov eax, dword ptr [esp + 0x50]
// 0084647d  8b11                 mov edx, dword ptr [ecx]
// 0084647f  8b929c000000         mov edx, dword ptr [edx + 0x9c]
// 00846485  50                   push eax
// 00846486  8d442444             lea eax, [esp + 0x44]
// 0084648a  50                   push eax
// 0084648b  ffd2                 call edx
// 0084648d  8b08                 mov ecx, dword ptr [eax]
// 0084648f  894fe4               mov dword ptr [edi - 0x1c], ecx
// 00846492  8b5004               mov edx, dword ptr [eax + 4]
// 00846495  8957e8               mov dword ptr [edi - 0x18], edx
// 00846498  8b47e4               mov eax, dword ptr [edi - 0x1c]
// 0084649b  8b4fe8               mov ecx, dword ptr [edi - 0x18]
// 0084649e  85f6                 test esi, esi
// 008464a0  7431                 je 0x8464d3
// 008464a2  894c2454             mov dword ptr [esp + 0x54], ecx
// 008464a6  89442414             mov dword ptr [esp + 0x14], eax
// 008464aa  8bd0                 mov edx, eax
// 008464ac  837ff800             cmp dword ptr [edi - 8], 0
// 008464b0  742f                 je 0x8464e1
// 008464b2  837c241800           cmp dword ptr [esp + 0x18], 0
// 008464b7  7503                 jne 0x8464bc
// 008464b9  83c506               add ebp, 6
// 008464bc  036c2410             add ebp, dword ptr [esp + 0x10]
// 008464c0  85f6                 test esi, esi
// 008464c2  8d5fc4               lea ebx, [edi - 0x3c]
// 008464c5  8d3429               lea esi, [ecx + ebp]
// 008464c8  7461                 je 0x84652b
// 008464ca  56                   push esi
// 008464cb  6a00                 push 0
// 008464cd  55                   push ebp
// 008464ce  f7da                 neg edx
// 008464d0  52                   push edx
// 008464d1  eb5d                 jmp 0x846530
// 008464d3  8bd1                 mov edx, ecx
// 008464d5  89442454             mov dword ptr [esp + 0x54], eax
// 008464d9  89542414             mov dword ptr [esp + 0x14], edx
// 008464dd  8bc8                 mov ecx, eax
// 008464df  ebcb                 jmp 0x8464ac
// 008464e1  837c241800           cmp dword ptr [esp + 0x18], 0
// 008464e6  75d4                 jne 0x8464bc
// 008464e8  85db                 test ebx, ebx
// 008464ea  75d0                 jne 0x8464bc
// 008464ec  8b442458             mov eax, dword ptr [esp + 0x58]
// 008464f0  03c2                 add eax, edx
// 008464f2  3b442428             cmp eax, dword ptr [esp + 0x28]
// 008464f6  7fc4                 jg 0x8464bc
// 008464f8  85f6                 test esi, esi
// 008464fa  8d3429               lea esi, [ecx + ebp]
// 008464fd  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00846501  8d5fc4               lea ebx, [edi - 0x3c]
// 00846504  740a                 je 0x846510
// 00846506  56                   push esi
// 00846507  f7d9                 neg ecx
// 00846509  51                   push ecx
// 0084650a  55                   push ebp
// 0084650b  f7d8                 neg eax
// 0084650d  50                   push eax
// 0084650e  eb04                 jmp 0x846514
// 00846510  50                   push eax
// 00846511  56                   push esi
// 00846512  51                   push ecx
// 00846513  55                   push ebp
// 00846514  8bcb                 mov ecx, ebx
// 00846516  e8754ec2ff           call 0x46b390
// 0084651b  8b442454             mov eax, dword ptr [esp + 0x54]
// 0084651f  39442410             cmp dword ptr [esp + 0x10], eax
// 00846523  7f28                 jg 0x84654d
// 00846525  89442410             mov dword ptr [esp + 0x10], eax
// 00846529  eb22                 jmp 0x84654d
// 0084652b  52                   push edx
// 0084652c  56                   push esi
// 0084652d  6a00                 push 0
// 0084652f  55                   push ebp
// 00846530  53                   push ebx
// 00846531  ff1538ca9800         call dword ptr [0x98ca38]
// 00846537  8b442414             mov eax, dword ptr [esp + 0x14]
// 0084653b  3b442434             cmp eax, dword ptr [esp + 0x34]
// 0084653f  7e04                 jle 0x846545
// 00846541  89442434             mov dword ptr [esp + 0x34], eax
// 00846545  8b542454             mov edx, dword ptr [esp + 0x54]
// 00846549  89542410             mov dword ptr [esp + 0x10], edx
// 0084654d  3b742430             cmp esi, dword ptr [esp + 0x30]
// 00846551  7e04                 jle 0x846557
// 00846553  89742430             mov dword ptr [esp + 0x30], esi
// 00846557  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0084655b  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00846563  85f6                 test esi, esi
// 00846565  740a                 je 0x846571
// 00846567  8b1b                 mov ebx, dword ptr [ebx]
// 00846569  f7db                 neg ebx
// 0084656b  895c2458             mov dword ptr [esp + 0x58], ebx
// 0084656f  eb07                 jmp 0x846578
// 00846571  8b47d0               mov eax, dword ptr [edi - 0x30]
// 00846574  89442458             mov dword ptr [esp + 0x58], eax
// 00846578  8b442420             mov eax, dword ptr [esp + 0x20]
// 0084657c  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00846580  8b4b2c               mov ecx, dword ptr [ebx + 0x2c]
// 00846583  40                   inc eax
// 00846584  83c740               add edi, 0x40
// 00846587  3bc1                 cmp eax, ecx
// 00846589  89442420             mov dword ptr [esp + 0x20], eax
// 0084658d  0f8c93feffff         jl 0x846426
// 00846593  85f6                 test esi, esi
// 00846595  741b                 je 0x8465b2
// 00846597  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0084659b  8b542430             mov edx, dword ptr [esp + 0x30]
// 0084659f  894c2428             mov dword ptr [esp + 0x28], ecx
// 008465a3  8954242c             mov dword ptr [esp + 0x2c], edx
// 008465a7  8d4c2428             lea ecx, [esp + 0x28]
// 008465ab  eb09                 jmp 0x8465b6
// 008465ad  e85ad5faff           call 0x7f3b0c
// 008465b2  8d4c2430             lea ecx, [esp + 0x30]
// 008465b6  8b11                 mov edx, dword ptr [ecx]
// 008465b8  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008465bc  8b4904               mov ecx, dword ptr [ecx + 4]
// 008465bf  5f                   pop edi
// 008465c0  5e                   pop esi
// 008465c1  5d                   pop ebp
// 008465c2  8910                 mov dword ptr [eax], edx
// 008465c4  894804               mov dword ptr [eax + 4], ecx
// 008465c7  5b                   pop ebx
// 008465c8  83c438               add esp, 0x38
// 008465cb  c21000               ret 0x10
// copied from an identical function in another client (function ?_CalcSmartLayoutToolBar@CXTPControls@@IAE?AVCSize@@PAVCDC@@PAUXTPBUTTONINFO@1@AAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp