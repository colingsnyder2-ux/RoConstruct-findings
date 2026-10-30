// roc 2012-06 00a56070  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 318 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a56070
//
// 00a56070  83ec20               sub esp, 0x20
// 00a56073  53                   push ebx
// 00a56074  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00a56078  8b03                 mov eax, dword ptr [ebx]
// 00a5607a  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a5607d  55                   push ebp
// 00a5607e  56                   push esi
// 00a5607f  8bf1                 mov esi, ecx
// 00a56081  57                   push edi
// 00a56082  8bcb                 mov ecx, ebx
// 00a56084  ffd2                 call edx
// 00a56086  50                   push eax
// 00a56087  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a5608a  8b5050               mov edx, dword ptr [eax + 0x50]
// 00a5608d  83c050               add eax, 0x50
// 00a56090  83ec10               sub esp, 0x10
// 00a56093  8bcc                 mov ecx, esp
// 00a56095  8911                 mov dword ptr [ecx], edx
// 00a56097  8b5004               mov edx, dword ptr [eax + 4]
// 00a5609a  895104               mov dword ptr [ecx + 4], edx
// 00a5609d  8b5008               mov edx, dword ptr [eax + 8]
// 00a560a0  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a560a3  895108               mov dword ptr [ecx + 8], edx
// 00a560a6  89410c               mov dword ptr [ecx + 0xc], eax
// 00a560a9  8d4c2450             lea ecx, [esp + 0x50]
// 00a560ad  51                   push ecx
// 00a560ae  e8cdbaffff           call 0xa51b80
// 00a560b3  83c418               add esp, 0x18
// 00a560b6  837b5c00             cmp dword ptr [ebx + 0x5c], 0
// 00a560ba  0f84df000000         je 0xa5619f
// 00a560c0  8b16                 mov edx, dword ptr [esi]
// 00a560c2  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00a560c5  53                   push ebx
// 00a560c6  8bce                 mov ecx, esi
// 00a560c8  ffd0                 call eax
// 00a560ca  8b542444             mov edx, dword ptr [esp + 0x44]
// 00a560ce  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a560d2  89542418             mov dword ptr [esp + 0x18], edx
// 00a560d6  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a560da  8954241c             mov dword ptr [esp + 0x1c], edx
// 00a560de  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00a560e1  837a3802             cmp dword ptr [edx + 0x38], 2
// 00a560e5  89442434             mov dword ptr [esp + 0x34], eax
// 00a560e9  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a560ed  89442410             mov dword ptr [esp + 0x10], eax
// 00a560f1  7405                 je 0xa560f8
// 00a560f3  40                   inc eax
// 00a560f4  89442410             mov dword ptr [esp + 0x10], eax
// 00a560f8  8b435c               mov eax, dword ptr [ebx + 0x5c]
// 00a560fb  41                   inc ecx
// 00a560fc  33ed                 xor ebp, ebp
// 00a560fe  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00a56102  85c0                 test eax, eax
// 00a56104  0f8e95000000         jle 0xa5619f
// 00a5610a  8d9b00000000         lea ebx, [ebx]
// 00a56110  85ed                 test ebp, ebp
// 00a56112  7c15                 jl 0xa56129
// 00a56114  3be8                 cmp ebp, eax
// 00a56116  7d11                 jge 0xa56129
// 00a56118  3b6b5c               cmp ebp, dword ptr [ebx + 0x5c]
// 00a5611b  0f8d88000000         jge 0xa561a9
// 00a56121  8b4358               mov eax, dword ptr [ebx + 0x58]
// 00a56124  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 00a56127  eb02                 jmp 0xa5612b
// 00a56129  33f6                 xor esi, esi
// 00a5612b  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a5612f  8d3c11               lea edi, [ecx + edx]
// 00a56132  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a56136  83ec10               sub esp, 0x10
// 00a56139  8bc4                 mov eax, esp
// 00a5613b  8910                 mov dword ptr [eax], edx
// 00a5613d  894804               mov dword ptr [eax + 4], ecx
// 00a56140  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a56144  894808               mov dword ptr [eax + 8], ecx
// 00a56147  8bce                 mov ecx, esi
// 00a56149  89780c               mov dword ptr [eax + 0xc], edi
// 00a5614c  e8cf5affff           call 0xa4bc20
// 00a56151  8b5660               mov edx, dword ptr [esi + 0x60]
// 00a56154  8bcf                 mov ecx, edi
// 00a56156  397204               cmp dword ptr [edx + 4], esi
// 00a56159  7538                 jne 0xa56193
// 00a5615b  8b7b5c               mov edi, dword ptr [ebx + 0x5c]
// 00a5615e  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a56162  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00a56166  2bfd                 sub edi, ebp
// 00a56168  4f                   dec edi
// 00a56169  0faffa               imul edi, edx
// 00a5616c  8bc6                 mov eax, esi
// 00a5616e  2bc7                 sub eax, edi
// 00a56170  03d1                 add edx, ecx
// 00a56172  3bd0                 cmp edx, eax
// 00a56174  7e02                 jle 0xa56178
// 00a56176  8bc2                 mov eax, edx
// 00a56178  8d56ff               lea edx, [esi - 1]
// 00a5617b  3bc2                 cmp eax, edx
// 00a5617d  8bf0                 mov esi, eax
// 00a5617f  7c02                 jl 0xa56183
// 00a56181  8bf2                 mov esi, edx
// 00a56183  3bce                 cmp ecx, esi
// 00a56185  7e04                 jle 0xa5618b
// 00a56187  8bc1                 mov eax, ecx
// 00a56189  eb06                 jmp 0xa56191
// 00a5618b  3bc2                 cmp eax, edx
// 00a5618d  7c02                 jl 0xa56191
// 00a5618f  8bc2                 mov eax, edx
// 00a56191  8bc8                 mov ecx, eax
// 00a56193  8b435c               mov eax, dword ptr [ebx + 0x5c]
// 00a56196  45                   inc ebp
// 00a56197  3be8                 cmp ebp, eax
// 00a56199  0f8c71ffffff         jl 0xa56110
// 00a5619f  5f                   pop edi
// 00a561a0  5e                   pop esi
// 00a561a1  5d                   pop ebp
// 00a561a2  5b                   pop ebx
// 00a561a3  83c420               add esp, 0x20
// 00a561a6  c21800               ret 0x18
// 00a561a9  e812c2f2ff           call 0x9823c0
// copied from an identical function in another client (function ?RepositionTabControl@CAppearanceSetVisio@CXTPTabPaintManager@@UAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabPaintManagerAppearance.cpp